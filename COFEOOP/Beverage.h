//
// Created by lehaa on 13/06/2026.
//

#ifndef COFEOOP_BEVERAGE_H
#define COFEOOP_BEVERAGE_H

#pragma once

#include <string>

using namespace std;

class Beverage {
protected:
    string tên;
    double giá_gốc;

public:
    string getName() const;

    double getBasePrice() const;

    Beverage(string tên, double giá_gốc);

    virtual double tính_giá() = 0;

    virtual ~Beverage();
};

#endif //COFEOOP_BEVERAGE_H
