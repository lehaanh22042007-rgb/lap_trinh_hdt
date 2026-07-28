//
// Created by lehaa on 29/07/2026.
//

#ifndef COFEOOP_CAFECONTROLLER_H
#define COFEOOP_CAFECONTROLLER_H


#pragma once

#include "ConsoleView.h"

#include "FileManager.h"
#include "Order.h"

#include <vector>

using namespace std;


class CafeController
{
private:

    ConsoleView view;

    vector<Beverage*> menu;

    Order currentOrder;


public:

    CafeController();

    ~CafeController();


    void run();


private:

    void loadData();

    void showMenu();

    void addOrder();

    void saveOrder();

};


#endif //COFEOOP_CAFECONTROLLER_H
