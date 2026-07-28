//
// Created by lehaa on 28/07/2026.
//

#ifndef COFEOOP_ORDER_H
#define COFEOOP_ORDER_H


#pragma once

#include <vector>
#include "Beverage.h"

using namespace std;

class Order
{
private:
    vector<Beverage*> drinks;

public:
    Order();

    ~Order();

    void addDrink(Beverage* drink);

    double calculateTotal() const;

    const vector<Beverage*>& getDrinks() const;
};


#endif //COFEOOP_ORDER_H
