#include <iostream>
#include <string>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main()
{
    Cat cat;
    Dog dog;
    Animal* animals[] = { &cat, &dog };
    for (size_t i = 0; i < 2; i++) {
        animals[i]->talk();
    }
}
