//
// Created by lehaa on 28/07/2026.
//

#ifndef COFEOOP_FRAPPUCCINO_H
#define COFEOOP_FRAPPUCCINO_H


#pragma once

#include "Beverage.h"
#include "Size.h"
#include "Topping.h"
#include <vector>

using namespace std;

class Frappuccino : public Beverage
{
private:
    Size size;
    vector<Topping> toppings;

public:
    Frappuccino(string tên,
                double giá_gốc,
                Size size,
                vector<Topping> toppings);

    double tính_giá() override;

    Size getSize() const;

    const vector<Topping>& getToppings() const;
};


#endif //COFEOOP_FRAPPUCCINO_H
