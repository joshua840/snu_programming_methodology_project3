#ifndef __RECIPE_H
#define __RECIPE_H

#include <vector>
#include <string>

using namespace std;

typedef pair<string, int> strIntPair;

class Recipe
{
public:
    Recipe() : name("None"), score(0){};
    Recipe(string, vector<strIntPair>, double);
    string getName() const { return name; }
    double getScore() const { return score; }
    vector<strIntPair> getIngredients() const { return ingredients; }

private:
    string name;
    double score;
    vector<strIntPair> ingredients;
};

#endif //__RECIPE_H