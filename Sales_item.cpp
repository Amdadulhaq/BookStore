#include <iostream>
#include "Sales_item.h"
#include <string>

book::book(std::string name, std::string IsbnCode, int total, int sold)
    : name(name),isbn(IsbnCode), totalCopies(total), soldCopies(sold) {}

int book::getRemaining() const
{
    return  totalCopies - soldCopies;
}

void book::display() const
{
    std::cout << "Name: " << name<<"\n"
        << "ISBN: "<<isbn<<"\n"
        <<"Total Copies: "<<totalCopies<<"\n"
        <<"Total Sold: "<<soldCopies<<"\n"
        <<"Remaining: "<<getRemaining()<<std::endl;
}
