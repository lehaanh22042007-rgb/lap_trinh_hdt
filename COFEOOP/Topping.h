//
// Created by lehaa on 28/07/2026.
//

#ifndef COFEOOP_TOPPING_H
#define COFEOOP_TOPPING_H

#pragma once

#include <string>

using namespace std;

class Topping {
private:
    string name;
    double price;

public:
    Topping(string name, double price);

    string getName() const;

    double getPrice() const;
};

#endif //COFEOOP_TOPPING_H
