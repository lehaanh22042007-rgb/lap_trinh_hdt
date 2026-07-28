//
// Created by lehaa on 28/07/2026.
//

#include "Frappuccino.h"

Frappuccino::Frappuccino(string name,
                         double basePrice,
                         Size size,
                         vector<Topping> toppings)
    : Beverage(name, basePrice)
{
    this->size = size;
    this->toppings = toppings;
}

double Frappuccino::tính_giá()
{
    double total = giá_gốc;

    switch (size)
    {
        case Trung_bình:
            total += 12000;
            break;

        case Lớn:
            total += 20000;
            break;

        default:
            break;
    }

    for (const Topping& t : toppings)
    {
        total += t.getPrice();
    }

    return total;
}

Size Frappuccino::getSize() const
{
    return size;
}

const vector<Topping>& Frappuccino::getToppings() const
{
    return toppings;
}