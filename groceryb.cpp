#include <iostream>
#include <string>
using namespace std;
#include "groceryb.h"
//classs implimentation

void GroceryItem::getItemInStockNumber()
{
    //get item number from the user;
    cout<<"Please enter the identification number for the item : ";
    cin>>itemInStockNumber;
    while (itemInStockNumber<=1000 || itemInStockNumber >10000)
         {
        cout<<"Invalid value entered for stock id! \n";
        cout<<"Please RE-Enter the stock id for the item :  ";
        cin>>itemInStockNumber;

         }
}

void GroceryItem::getItemQuantity()
{
    //get the quantity for the item entered
    cout<<"Please Enter the quantity of the available stock :  ";
    cin>>quantity;
    while (quantity<=0)
    {
        cout<<"Invalid value entered! \n";
        cout<<"Please RE-Enter the quantity of the available stock Again :  ";
        cin>>quantity;

    }

}

void GroceryItem::getItemPrice()
{
    cout<<"Please enter the price for the item you entered : ";
    cin>>price;
     while (price<=0)
         {
        cout<<"Invalid value entered! \n";
        cout<<"Please RE-Enter the price for the item you entered :  ";
        cin>>price;

         }

}

void GroceryItem::GroceryItemTotal()
{
    total = (quantity * price);
    //cout<<"The total items in stock are: " <<total;
}

void GroceryItem::dataEntry()
{
    getItemInStockNumber();
    getItemQuantity();
    getItemPrice();
    GroceryItemTotal();
}

void GroceryItem::displayResults()
{
    cout<<"\n\n";
   cout<<"The Item ID is : "<<itemInStockNumber<<"\n";
   cout<<"The Total Quantity Available is  : "<<quantity<<"\n";
   cout<<"The Price for Each Item quantity unit is : "<<price<<"\n";
   cout<<"The total Cost of the Items in stock is : "<<total<<"\n";
}





