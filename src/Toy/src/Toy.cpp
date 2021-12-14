#include "Toy.hpp"

Toy::Toy() : name("None"), manufacturer("None"), price(0) { cout << "Toy default constructor called!" << endl; }

Toy::Toy(string name, string manufacturer, double price) 
{
    cout << "Toy constructor called!" << endl;
    this -> name = name;
    this -> manufacturer = manufacturer;
    this -> price = price;
}

 Toy::Toy(const Toy& toy) 
 {
     cout << "Toy copy-constructor called!" << endl;
     name = toy.name;
     manufacturer = toy.manufacturer;
     price = toy.price;
 }

Toy& Toy::operator=(const Toy& toy)
{  
    //check for self-assign
    if(this == &toy) {
        cout << "Self-assign case is treated!" << endl;
        return *this;
    }

    this -> name = toy.name;
    this -> manufacturer = toy.manufacturer;
    this -> price = toy.price;

    return *this;
}

Toy::~Toy() { cout << "Toy destructor called!" << endl; }

void Toy::printToy() 
{
    cout << name << " " << manufacturer << " " << price << " lei" << endl;
}

string Toy::getName() { return name; }

string Toy::getManufacturer() { return manufacturer; }

double Toy::getPrice() { return price; }