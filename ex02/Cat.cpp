#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
    std::cout << "Cat default constructor called." << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
    std::cout << "Cat copy constructor called." << std::endl;
    this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called." << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);
        *this->brain = *other.brain;
    }
    return (*this);
}

Cat::~Cat()
{
    delete(this->brain);
    std::cout << "Cat destructor called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miau Miau" << std::endl;
}

void Cat::setIdea(std::string idea, int i)
{
    if (i < 0 || i > 99)
    {
        std::cout << "Invalid Idea." << std::endl;
        return ;
    }
    else
        this->brain->setIdea(idea, i);
}

std::string Cat::getIdea(int i) const
{
    if (i < 0 || i > 99)
    {
        std::cout << "Invalid Idea." << std::endl;
        return ("");
    }
    else
        return (this->brain->getIdea(i));
}
