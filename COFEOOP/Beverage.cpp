//
// Created by lehaa on 13/06/2026.
//

#include "Beverage.h"

Beverage::Beverage(string tên, double giá_gốc)
{
    this->tên = tên;
    this->giá_gốc = giá_gốc;
}

string Beverage::getName() const
{
    return tên;
}

double Beverage::getBasePrice() const
{
    return giá_gốc;
}

Beverage::~Beverage()
{
}