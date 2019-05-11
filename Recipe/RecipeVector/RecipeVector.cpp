//
// Created by ntallaris on 11/4/2019.
//

#include "RecipeVector.h"


RecipeVector::RecipeVector() {}

void RecipeVector::addToRecipe(RecipeItem t) {
    recipe.push_back(t);
}

RecipeItem RecipeVector::getRecipeItemAt(int i){

    if (i < (int) recipe.size())
    {
        return recipe[i];
    }

    return recipe[i];

}

int RecipeVector::recipeCount() {
    return recipe.size();
}