#include "SmartController.h"
#include "Controller.h"
#include "Food.h"

/**
 * Get maximum height among the foods in this shelf
 * 
 * @return maximum height of the foods.
 */
int SmartController::maxHeight(Shelf &shelf)
{
    if (shelf.vec.empty())
        return 0;
    auto comp = [](const FoodPtr a, const FoodPtr b)
    {
        return (a->getSize().second < b->getSize().second);
    };
    auto it_shelf = max_element(shelf.vec.begin(), shelf.vec.end(), comp);

    return (*it_shelf)->getSize().second;
}

/**
 * Store a given food object into the refrigerator
 * 
 * This function should follows the 'Shelf First Fit (Shelf-FF) algorithm, which is given in the PPT slide.
 * Your implemented algorithm should find the proper position of the new food.
 * Also, the given food object may in the stack memory. You should save it in the heap memory and reference
 * it from both food_list and shelves.
 * 
 * @param name The name of the food to be stored
 * @param size width and height of the food
 * @param exp the expire date of the food
 * @return true if inserting the food for both food_list and shelves has been succeed
 */
bool SmartController::stackFood(const string name, intPair foodSize, int exp)
{   
     /**
     * ===============================================
     * ======== TODO: Implement this function ========
     * ===============================================
     */
    return false;
}

/**
 * Pop food with shortest expire date from both foodList and shelves.
 * This function does not return the object.
 * The pop process should follows the algorithm in PPT slide.
 * 
 * @param food_name a name of food to be popped
 * @return 
 */
bool SmartController::popFood(const string food_name) // void
{
    /**
     * ===============================================
     * ======== TODO: Implement this function ========
     * ===============================================
     */
    return false;
}