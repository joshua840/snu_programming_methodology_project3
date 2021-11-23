#ifndef __REFRIGERATOR_H_
#define __REFRIGERATOR_H_
#include "Food.h"
#include "NormalController.h"
#include <map>
#include <vector>

using namespace std;

typedef FoodInFridge *FoodPtr;
typedef map<string, vector<FoodPtr>> foodListType;

class Refrigerator {
protected:
  intPair size;
  foodListType foodList;
  Controller *controller;

public:
  Refrigerator(intPair);
  Refrigerator();
  intPair getSize() const { return size; }
  void display();                    
  virtual void popFood();            
  virtual void insertFoodFromFile(); 
  virtual void insertFoodDirectly(); 
  virtual int menuSelect();
};
#endif