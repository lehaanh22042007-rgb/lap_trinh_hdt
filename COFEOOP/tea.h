//
// Created by lehaa on 28/07/2026.
//

#ifndef COFEOOP_TEA_H
#define COFEOOP_TEA_H


#pragma once


#include <string>
#include <vector>
#include "Beverage.h"
#include "Size.h"
#include "Topping.h"

using namespace std;

class Tea : public Beverage
{
private:
    Size size;
    vector<Topping> toppings;

public:
    Tea(string tên,
        double giá_gốc,
        Size size,
        vector<Topping> toppings);

    double tính_giá() override;

    Size getSize() const;

    string getTopping() const;

    const vector<Topping>& getToppings() const;
};

#endif //COFEOOP_TEA_H
