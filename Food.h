#ifndef __FOOD_H_
#define __FOOD_H_
#include <string>
using namespace std;

typedef pair<int, int> intPair;

class Food {
public:
    Food() : name("null"), size(0, 0), exp(0) {}
    Food(string, intPair, int);
    int getExp() const { return exp; }
    string getName() { return name; }
    intPair getSize() const { return size; }
    friend bool operator>(const Food &, const Food &);

private:
    string name;
    intPair size;
    int exp;
};

class FoodInFridge : public Food {
public:
    FoodInFridge(Food food, int x, int y) : Food(food) { pos = make_pair(x, y); }
    intPair getPos() { return pos; }
    void setPos(intPair &pos_) { pos = pos_; }

private:
    intPair pos;
};

#endif
