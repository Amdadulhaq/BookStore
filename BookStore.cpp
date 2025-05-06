// BookStore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Sales_item.h"

int main()
{
    book myBook("The way","978-0-13-110362-7", 120, 45);
    myBook.display();

    return 0;
}

