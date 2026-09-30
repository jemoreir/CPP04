#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal **Array;
    Array = new Animal*[4];

    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
        {
            Array[i] = new Dog();
        }
        else
            Array[i] = new Cat();
    }
    for (int i = 0; i < 4; i++)
        delete(Array[i]);
    delete[](Array);
    Cat *gatoA = new Cat();
    gatoA->setIdea("ideia teste.", 77);
    Cat *gatoB = new Cat(*gatoA);
    Cat gatoC;
    gatoC = *gatoA;
    std::cout << "Gato A[77] antes de mudar: " << gatoA->getIdea(77) << std::endl;
    std::cout << "Gato B[77] antes de mudar: " << gatoB->getIdea(77) << std::endl;
    std::cout << "Gato C[77] antes de mudar: " << gatoC.getIdea(77) << std::endl;
    gatoA->setIdea("ideia final.", 77);
    std::cout << "Gato A[77] após mudar: " << gatoA->getIdea(77) << std::endl;
    std::cout << "Gato B[77] após mudar: " << gatoB->getIdea(77) << std::endl;
    std::cout << "Gato C[77] após mudar: " << gatoC.getIdea(77) << std::endl;
    
    delete(gatoA);
    delete(gatoB);
    return (0);
}
