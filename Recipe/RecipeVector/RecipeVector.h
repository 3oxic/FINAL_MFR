//
// Created by ntallaris on 11/4/2019.
//

#ifndef EXECUTINGNATIVEFUNCTIONSENGINE_RECIPEVECTOR_H
#define EXECUTINGNATIVEFUNCTIONSENGINE_RECIPEVECTOR_H

#include "../RecipeItem/RecipeItem.h"
#include <boost/serialization/access.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/serialization/binary_object.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/nvp.hpp>
#include <boost/serialization/vector.hpp>

#include <vector>
class RecipeVector {

public:
    RecipeVector();

    void addToRecipe(RecipeItem t);

    RecipeItem getRecipeItemAt(int i);

    int recipeCount();

private:
    std::vector<RecipeItem> recipe;

    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const unsigned int version)
    {
        // note, version is always the latest when saving
        ar & recipe;
    }




};


#endif //EXECUTINGNATIVEFUNCTIONSENGINE_RECIPEVECTOR_H
