//
// Created by lehaa on 28/07/2026.
//

#ifndef COFEOOP_FILEMANAGER_H
#define COFEOOP_FILEMANAGER_H


#pragma once

#include <vector>
#include <string>

#include "Beverage.h"
#include "Coffe.h"
#include "Tea.h"
#include "Frappuccino.h"
#include "Order.h"

class FileManager
{
public:

    static std::vector<Beverage*> loadMenu(const std::string& filename);

    static void saveOrder(const std::string& filename,
                          const Order& order);
};


#endif //COFEOOP_FILEMANAGER_H
