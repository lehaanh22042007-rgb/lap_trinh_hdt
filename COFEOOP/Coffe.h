//
// Created by lehaa on 13/06/2026.
//

#ifndef COFEOOP_COFFE_H
#define COFEOOP_COFFE_H

#pragma once

#include "Beverage.h"
#include "Size.h"

class Coffee : public Beverage {
private:
    Size size;
    int espressoShots;

public:
    Coffee(
        string name,
        double basePrice,
        Size size,
        int espressoShots
    );

    double tính_giá() override;

    Size getSize() const;

    int getEspressoShots() const;
};


#endif //COFEOOP_COFFE_H
