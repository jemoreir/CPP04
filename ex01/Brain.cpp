#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called." << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator called." << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destructor called." << std::endl;
}

void Brain::setIdea(std::string idea, int i)
{
    if (i < 0 || i > 99)
    {
        std::cout << "Invalid Idea." << std::endl;
        return ;
    }
    else
        this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
    if (i < 0 || i > 99)
    {
        std::cout << "Invalid Idea." << std::endl;
        return ("");
    }
    else
        return (this->ideas[i]);
}