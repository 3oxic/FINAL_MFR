//
// Created by ntallaris on 11/4/2019.
//

#include "RecipeItem.h"

RecipeItem::RecipeItem(){

}
RecipeItem::RecipeItem(std::string functionTag, std::string functionType, std::string dataTag, std::string resultTag):functionTag(functionTag), functionType(functionType), dataTag(dataTag), resultTag(resultTag) {}

std::string RecipeItem::getFunctionTag() const{
    return functionTag;
}

std::string RecipeItem::getDataTag() const{
    return dataTag;
}

std::string RecipeItem::getResultTag() const{
    return resultTag;
}

std::string RecipeItem::getFunctionType() const{
    return functionType;
}