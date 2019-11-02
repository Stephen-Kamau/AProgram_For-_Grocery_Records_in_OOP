//class definition
#include <iostream>
#include <string>
using namespace std;

class GroceryItem
{
private:
    float itemInStockNumber;
    float total,price,quantity;
    //function prototypes
    void getItemInStockNumber();
    void getItemPrice();
    void getItemQuantity();
    void GroceryItemTotal();


public:
    void dataEntry();
    void displayResults();
};


