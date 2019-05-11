//
// Created by ntallaris on 11/4/2019.
//

#ifndef EXECUTINGNATIVEFUNCTIONSENGINE_RECIPEITEM_H
#define EXECUTINGNATIVEFUNCTIONSENGINE_RECIPEITEM_H


#include <string>

#include <fstream>

// include headers that implement a archive in simple text format
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>



class RecipeItem {

public:
    RecipeItem();
    RecipeItem(std::string functionTag, std::string functionType,std::string dataTag, std::string resultTag);

    std::string getFunctionTag() const;
    std::string getDataTag() const;
    std::string getResultTag() const;
    std::string getFunctionType() const;

    friend class boost::serialization::access;
    template<class Archive>
    void serialize(Archive & ar, const unsigned int version)
    {
        // note, version is always the latest when saving
        ar & functionTag;
        ar & dataTag;
        ar & resultTag;
        ar & functionType;

    }

private:
    std::string functionTag;
    std::string dataTag;
    std::string resultTag;
    std::string functionType;


};


#endif //EXECUTINGNATIVEFUNCTIONSENGINE_RECIPEITEM_H
