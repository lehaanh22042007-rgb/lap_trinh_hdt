//
// Created by lehaa on 28/07/2026.
//

#include "Order.h"
#include "Order.h"

Order::Order()
{
}

Order::~Order()
{
    for (Beverage* drink : drinks)
    {
        delete drink;
    }
}

void Order::addDrink(Beverage* drink)
{
    drinks.push_back(drink);
}

double Order::calculateTotal() const
{
    double total = 0;

    for (Beverage* drink : drinks)
    {
        total += drink->tính_giá();
    }

    return total;
}

const vector<Beverage*>& Order::getDrinks() const
{
    return drinks;
}