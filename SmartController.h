#ifndef __SMARTCONTROLLER_H_
#define __SMARTCONTROLLER_H_
#include "Controller.h"

class SmartController : public Controller
{
public:
    SmartController(intPair size_, foodListType &food_list_) : Controller(size_, food_list_) {}

    bool stackFood(const string, intPair, int);
    bool popFood(const string);

private:
    int maxHeight(Shelf &);
};

#endif
