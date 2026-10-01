#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    /* AAnimal aanimal = AAnimal(); */

    Dog dog = Dog();
    Cat cat = Cat();
    dog.makeSound();
    cat.makeSound();
}
