
//
// Created by lehaa on 13/06/2026.
//

#include "Coffe.h"

Coffee::Coffee(
    string tên,
    double giá_gốc,
    Size size,
    int espressoShots
)
: Beverage(tên, giá_gốc)
{
    this->size = size;
    this->espressoShots = espressoShots;
}
double Coffee::tính_giá()
{
    double total = giá_gốc;

    switch(size)
    {
        case Trung_bình:
            total += 5000;
            break;

        case Lớn:
            total += 10000;
            break;

        default:
            break;
    }

    total += espressoShots * 8000;

    return total;
}
