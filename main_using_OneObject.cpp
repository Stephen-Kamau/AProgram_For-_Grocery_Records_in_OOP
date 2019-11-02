#include <iostream>
#include <string>
#include "grocery.h"
using namespace std;

int main()
{
    cout << "Grocery Quantity Checking system" << endl;

    GroceryItem obj;

    obj.dataEntry();
    obj.displayResults();
    return 0;
}

