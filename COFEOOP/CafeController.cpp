//
// Created by lehaa on 29/07/2026.
//

#include "CafeController.h"
#include <iostream>


CafeController::CafeController()
{

}
void CafeController::loadData()
{
    cout << ">>> Da vao loadData()" << endl;

    try
    {
        menu = FileManager::loadMenu("menu.txt");

        cout << ">>> Menu size = " << menu.size() << endl;
    }
    catch (const exception& e)
    {
        cout << ">>> Loi: " << e.what() << endl;
    }
}
// void CafeController::loadData()
// {
//     try
//     {
//         menu = FileManager::loadMenu("menu.txt");
//         cout << "So luong mon trong menu: "
//              << menu.size()
//              << endl;
//     }
//
//     catch(const exception& e)
//     {
//         view.showMessage(e.what());
//     }
// }
void CafeController::showMenu()
{
    cout << "Dang hien menu..." << endl;
    view.displayDrinks(menu);
}
void CafeController::addOrder()
{
    showMenu();


    cout << "Chon mon: ";

    int choice = view.getChoice();



    if(choice < 1 || choice > menu.size())
    {
        view.showMessage("Lua chon khong hop le!");
        return;
    }


    Beverage* selected = menu[choice-1];


    currentOrder.addDrink(selected);


    view.showMessage(
        "Them mon thanh cong!"
    );
}
void CafeController::saveOrder()
{
    try
    {
        FileManager::saveOrder(
            "orders.txt",
            currentOrder
        );

        view.showMessage(
            "Da luu hoa don!"
        );
    }

    catch(exception& e)
    {
        view.showMessage(e.what());
    }
}
void CafeController::run()
{

    loadData();


    int choice;


    do
    {

        view.showMenu();


        choice = view.getChoice();



        switch(choice)
        {

            case 1:
                showMenu();
                break;


            case 2:
                addOrder();
                break;


            case 3:
                saveOrder();
                break;


            case 4:
                view.showMessage(
                    "Tam biet!"
                );
                break;


            default:
                view.showMessage(
                    "Lua chon sai!"
                );

        }


    }while(choice != 4);

}
CafeController::~CafeController()
{
    for(Beverage* drink : menu)
    {
        delete drink;
    }
}