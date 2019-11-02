#include <iostream>
#include <string>
#include "groceryb.h"
using namespace std;

int main()
{
    GroceryItem x[10];

    for (int i=0;i<10; i++)
    {
        x[i].dataEntry();
        cout<<"\n";
    }
        for (int y=0; y<10; y++)
    {
         x[y].displayResults();
    }
    return 0;
}
