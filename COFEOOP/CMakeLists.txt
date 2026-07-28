cmake_minimum_required(VERSION 4.2)
project(COFEOOP)

set(CMAKE_CXX_STANDARD 20)

add_executable(COFEOOP main.cpp
        Beverage.cpp
        Beverage.h
        Coffe.cpp
        Coffe.h
        Size.cpp
        Size.h
        tea.cpp
        tea.h
        Topping.cpp
        Topping.h
        Frappuccino.cpp
        Frappuccino.h
        Order.cpp
        Order.h
        FileManager.cpp
        FileManager.h
        ConsoleView.cpp
        ConsoleView.h
        CafeController.cpp
        CafeController.h)
