#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "Wrong Cat default constructor called." << std::endl;
    this->type = "Cat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "Wrong Cat copy constructor called." << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "Wrong Cat copy assignment operator called." << std::endl;
    if (this != &other)
    {
        this->type = other.getType();
    }
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat destructor called." << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Miau Miau Miau Crlh" << std::endl;
}
