//
// Created by lehaa on 29/07/2026.
//

#include "ConsoleView.h"


void ConsoleView::showMenu()
{
    cout << "\n=========================\n";
    cout << "     CAFE MANAGEMENT\n";
    cout << "=========================\n";

    cout << "1. Xem menu\n";
    cout << "2. Dat do uong\n";
    cout << "3. Xem hoa don\n";
    cout << "4. Thoat\n";

    cout << "Lua chon: ";
}


void ConsoleView::displayDrinks(
    const vector<Beverage*>& drinks)
{
    cout << "\n===== MENU =====\n";


    int index = 1;


    for(Beverage* drink : drinks)
    {
        cout
            << index++
            << ". "
            << drink->getName()
            << " - "
            << drink->tính_giá()
            << " VND"
            << endl;
    }
}


int ConsoleView::getChoice()
{
    int choice;

    cin >> choice;

    return choice;
}


void ConsoleView::showMessage(string message)
{
    cout << message << endl;
}
