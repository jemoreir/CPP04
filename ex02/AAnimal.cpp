#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor called." << std::endl;
    this->type = "Default";
}

AAnimal::AAnimal(const AAnimal& other)
{
    std::cout << "AAnimal copy constructor called." << std::endl;
    *this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    std::cout << "AAnimal copy assignment operator called." << std::endl;
    if (this != &other)
    {
        this->type = other.getType();
    }
    return (*this);
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called." << std::endl;
}

std::string AAnimal::getType(void) const
{
    return (this->type);
}

void AAnimal::makeSound() const
{
    std::cout << "Undentified AAnimal is close." << std::endl;
}
