#include <iostream>
#include <zconf.h>


#include "Server/Server.h"
#include "Server/ServerInfo.h"
#include "Driver/Driver.h"


#include "Recipe/RecipeVector/RecipeVector.h"
#include "Recipe/RecipeItem/RecipeItem.h"


int main() {
//    std::cout << "Hello, World!" << std::endl;
//    ServerInfo<int> info;
//    std::vector<int> data;p
//    for(int i = 0;i<1000000 ; i++){
//        data.push_back(i);
//    }
//
//    Server srv = Server("0.0.0.0:50051", data, &info);
//    srv.Run();
//    Server srv = Server("0.0.0.0:50051");
    RecipeVector recipe;
    std::string cppPath;

    std::vector<int> data;
    for(int i = 0;i<5000000 ; i++){
        data.push_back(i);
    }

    recipe.addToRecipe(RecipeItem("testFunc", "map", "mainData", "resultData"));
    recipe.addToRecipe(RecipeItem("testFunc2", "filter", "resultData", "resultData2"));
    recipe.addToRecipe(RecipeItem("testFunc3", "filter", "resultData2", "resultData3"));
    recipe.addToRecipe(RecipeItem("reduceFunc1", "reduce", "resultData3", "resultData3"));




    std::cout << "Add path with the functions (cpp file)" << std::endl;
    std::getline(std::cin, cppPath);
    Driver driver = Driver("0.0.0.0:50051", cppPath, recipe);
    driver.setData(data);
    int c;
    do {
        c=getchar();
        putchar (c);
    } while (c != 'p');
    time_t begin; // time_t is a datatype to store time values.

    time (&begin); // note time before execution

    driver.setDebugTime(begin);
    driver.parallelize();
    driver.collect();




    std::cout << "Im in main" << std::endl;
    driver.stopServer();


    return 0;
}