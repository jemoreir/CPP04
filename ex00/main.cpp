#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongAnimal();
const WrongAnimal* l = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
std::cout << l->getType() << " " << std::endl;
j->makeSound();
i->makeSound();
k->makeSound();
l->makeSound();
meta->makeSound();
delete (j);
delete (i);
delete (meta);
delete (k);
delete (l);

return 0;
}
