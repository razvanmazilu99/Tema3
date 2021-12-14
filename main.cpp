#include "src/Toy/src/Toy.hpp"
#include "src/Child/src/Child.hpp"

#include <iostream>
#include <memory>
using namespace std;

void use_unique_pointer() 
{
    Child child("Andrei", "Draghici", 5, "boy");
    Toy *toy = new Toy("Barbie doll", "BarbieEnterprise", 100);
    child.play(toy);

    cout << endl;

    Child child1("Johnny", "Bravo", 5, "boy");
    Toy *toy1 = new Toy("Barbie doll", "BarbieEnterprise", 100);
    child.playAndGiveAway(toy1, &child1);
}

int main()
{
    use_unique_pointer();
    // Toy toy("Barbie doll", "BarbieEnterprise", 100);
    // Toy toy1("Elsa doll", "Disney", 70);
    // Toy toy2("Race car", "Nerf", 85.6);

    // Child child("Johnny", "Bravo", 5, "boy");

    // child.addToy(toy);
    // child.addToy(toy1);
    // child.addToy(toy2);

    // child.printChild();

    // //use copy constructor to copy a child
    // Child child1(child);
    // child1.printChild();

    // //use copy constructor to create a toy
    // Toy toy3(toy);
    // toy3.printToy();

    // //use copy assignment operator for child
    // Child child2;
    // child2 = child1;

    // child2.printChild();

    // //use copy assignment operator for toy
    // Toy toy4;
    // (toy4 = toy1) = toy2;

    // //self-assign
    // toy4 = toy4;

    // toy1.printToy();
    // toy4.printToy();

    return 0;
}