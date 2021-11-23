#include <iostream>
#include <string>
#include "Refrigerator.h"
#include "SmartRefrigerator.h"
#include "Simulator.h"

using namespace std;

/**
 * This function chooses a type of a refrigerator,
 * then should call menuSelect of the refrigerator
 * Function terminates when the menuSelect returns 0 (program ends)
 */
void Simulator::start()
{
    int ref_type;
    Refrigerator *ref;
    // Initialize a refrigerator
    cout << "************************************************************" << endl;
    cout << "************************************************************" << endl;
    cout << "************************************************************" << endl;
    cout << "*************   Let's start the Project 3   ****************" << endl;
    cout << "************************************************************" << endl;
    cout << "************************************************************" << endl;
    cout << "************************************************************" << endl
         << endl;
    while (1)
    {
        cout << "1. Normal refrigerator" << endl;
        cout << "2. Smart refrigerator" << endl;
        cout << "What type of refrigerator do you have? : ";
        // ref_type = 1; //TODO: remove this line and restore the below comment before commit.
        cin >> ref_type;
        if (ref_type == 1)
        {
            ref = new Refrigerator();
            cout << "You have a normal refrigerator!" << endl
                 << endl;
            break;
        }
        else if (ref_type == 2)
        {
            ref = new SmartRefrigerator();
            cout << "You have a smart refrigerator!" << endl
                 << endl;
            break;
        }
        else
        {
            cout << "Please insert 1 or 2" << endl;
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
        }
    }
    // Simulate
    while (1)
    {
        int result = ref->menuSelect();
        if (result == 0)
        {
            cout << "Program finished!" << endl;
            break;
        }
    }
}