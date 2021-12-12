#include "src/Toy/src/Toy.hpp"
#include "src/Child/src/Child.hpp"

#include <iostream>
using namespace std;

int main()
{
    Toy toy("Barbie doll", "BarbieEnterprise", 100);
    Toy toy1("Elsa doll", "Disney", 70);
    Toy toy2("Race car", "Nerf", 85.6);

    Child child("Johnny", "Bravo", 5, "boy");

    child.addToy(toy);
    child.addToy(toy1);
    child.addToy(toy2);

    child.printChild();

    //use copy constructor to copy a child
    Child child1(child);
    child1.printChild();

    //use copy constructor to create a toy
    Toy toy3(toy);
    toy3.printToy();

    //use copy assignment operator for child
    Child child2;
    child2 = child1;

    child2.printChild();

    //use copy assignment operator for toy
    Toy toy4;
    (toy4 = toy1) = toy2;

    //self-assign
    toy4 = toy4;

    toy1.printToy();
    toy4.printToy();

    return 0;
}