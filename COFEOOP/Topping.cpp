//
// Created by lehaa on 28/07/2026.
//

#include "Topping.h"

Topping::Topping(string name, double price)
{
    this->name = name;
    this->price = price;
}

string Topping::getName() const
{
    return name;
}

double Topping::getPrice() const
{
    return price;
}