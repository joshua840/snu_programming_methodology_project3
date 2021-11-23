#include "Recipe.h"
#include <iostream>

using namespace std;

/**
 * A constructor of the class
 * @param name_ the name of the recipe
 * @param ingredients_ a vector that contains the pairs of food name and the number of the foods required. e.g. (bacon, 2)
 */
Recipe::Recipe(string name_, vector<strIntPair> ingredients_, double score_) : name(name_), score(score_), ingredients(ingredients_)
{
    if (score_ < 0)
    {
        cout << "The score of recipe must be positive value";
        exit(0);
    }
}
