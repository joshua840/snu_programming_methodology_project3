#ifndef __NORMALCONTROLLER_H_
#define __NORMALCONTROLLER_H_
#include "Controller.h"

#define MAX_HEIGHT 6
typedef FoodInFridge *FoodPtr;
typedef map<string, vector<FoodPtr>> foodListType;

class NormalController : public Controller
{
public:
    NormalController(intPair size_, foodListType &food_list_) : Controller(size_, food_list_) {}

    bool stackFood(const string, intPair, int);
    bool popFood(const string);

private:
    //assumption
    int maxHeight = MAX_HEIGHT;
};

#endif
