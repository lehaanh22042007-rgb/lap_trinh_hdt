//
// Created by lehaa on 29/07/2026.
//

#ifndef COFEOOP_CONSOLEVIEW_H
#define COFEOOP_CONSOLEVIEW_H


#pragma once

#include <iostream>
#include <vector>

#include "Beverage.h"

using namespace std;

class ConsoleView
{
public:

    void showMenu();

    void displayDrinks(const vector<Beverage*>& drinks);

    int getChoice();

    void showMessage(string message);
};


#endif //COFEOOP_CONSOLEVIEW_H
