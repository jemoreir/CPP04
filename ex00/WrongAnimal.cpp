#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wrong Animal default constructor called." << std::endl;
    this->type = "Another Animal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "Wrong Animal copy constructor called." << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Wrong Animal copy assignment operator called." << std::endl;
    if (this != &other)
    {
        this->type = other.getType();
    }
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal destructor called." << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Groww" << std::endl;
}
