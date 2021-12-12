#ifndef TOY_H
#define TOY_H

#include <iostream>
#include <string>

using namespace std;

class Toy 
{
    private:
        string name;
        string manufacturer;
        double price;

    public:
        Toy();
        Toy(string name, string manufacturer, double price);
        Toy(const Toy& toy);
        Toy& operator=(const Toy& toy);
        ~Toy();
        void printToy();
        string getName();
        string getManufacturer();
        double getPrice();
};

#endif