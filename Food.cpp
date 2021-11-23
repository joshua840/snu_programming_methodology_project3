#include "Food.h"
#include <iostream>
#include <string>

using namespace std;

/**
 * A constructor of the class
 * @param name_ the name of the refrigerator
 * @param size_ the size of the food (must be positive value)
 * @param exp_ the days left to the expiration date (must be greater than 0)
 */
Food::Food(string name_, intPair size_, int exp_)
{
    if (size_.first < 0 or size_.second < 0)
    {
        cout << "The size of food must be positive value";
        exit(1);
    }
    if (exp_ < 1)
    {
        cout << "The exp date of food must be greater than 0";
        exit(1);
    }
    name = name_;
    size = size_;
    exp = exp_;
}

/**
 * @param food1 first food to be compared
 * @param food2 second food to be compared
 * @return true if exp of food1 is greater than food2
 */
bool operator>(const Food &food1, const Food &food2)
{
    return (food1.exp > food2.exp);
}
