//
// Created by lehaa on 28/07/2026.
//

#include "tea.h"

Tea::Tea(string tên,
         double giá_gốc,
         Size size,
         vector<Topping> topping)
    : Beverage(tên, giá_gốc)
{
    this->size = size;
    this->toppings = topping;
}

double Tea::tính_giá()
{
    double total = giá_gốc;

    switch (size)
    {
        case Trung_bình:
            total += 8000;
            break;

        case Lớn:
            total += 15000;
            break;

        default:
            break;
    }

    for (const auto& topping: toppings) {
        total += topping.getPrice();
    }

    return total;
}

Size Tea::getSize() const
{
    return size;
}

const vector<Topping>& Tea::getToppings() const
{
    return toppings;
}