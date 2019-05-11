//
// Created by ntallaris on 11/4/2019.
//


#include <cstdio>
#include <iostream>
extern "C" {
int testFunc(int a){
    return a+1;
}


//reduce function
int testFunc2(int a){
    if(a%2==0){
        return 0;
    }
}

//reduce function
int testFunc3(int a){
    if(a%1000==0){
        return 0;
    }
}

long long int reduceFunc1(long long int a,long long int b){
    return a+b;
}

}