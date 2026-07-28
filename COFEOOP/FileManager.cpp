//
// Created by lehaa on 28/07/2026.
//

#include "FileManager.h"

#include <fstream>
#include <sstream>
#include <stdexcept>

using namespace std;

vector<Beverage*> FileManager::loadMenu(const string& filename)
{
    vector<Beverage*> menu;

    ifstream fin(filename);

    if (!fin)
    {
        throw runtime_error("Cannot open menu file!");
    }

    string line;

    while (getline(fin, line))
    {
        stringstream ss(line);

        string type;
        string name;
        string priceStr;

        getline(ss, type, ',');
        getline(ss, name, ',');
        getline(ss, priceStr);

        double price = stod(priceStr);

        if (type == "Coffee")
        {
            menu.push_back(
                new Coffee(name, price, Nhỏ, 0)
            );
        }
        else if (type == "Tea")
        {
            vector<Topping> toppings;

            menu.push_back(
                new Tea(name, price, Nhỏ, toppings)
            );
        }
        else if (type == "Frappuccino")
        {
            vector<Topping> toppings;

            menu.push_back(
                new Frappuccino(name, price, Nhỏ, toppings)
            );
        }
    }

    fin.close();

    return menu;
}

void FileManager::saveOrder(const string& filename,
                            const Order& order)
{
    ofstream fout(filename);

    if (!fout)
    {
        throw runtime_error("Cannot create order file!");
    }

    const vector<Beverage*>& drinks = order.getDrinks();

    for (Beverage* drink : drinks)
    {
        fout
            << drink->getName()
            << ","
            << drink->tính_giá()
            << endl;
    }

    fout.close();
}