/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:31:44 by marvin            #+#    #+#             */
/*   Updated: 2025/07/21 18:31:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

#define NUM_ANIMALS 10

int main(void)
{
    // 1. Création d'un tableau d'animaux (5 chiens, 5 chats)
    Animal* animals[NUM_ANIMALS];

    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        if (i < NUM_ANIMALS / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
        std::cout << "\033[1;33mCreated: " << animals[i]->getType() << "\033[0m\n";
    }

    // 2. Chaque animal pense à quelques idées
    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        Brain* brain = animals[i]->getBrain();
        brain->setIdeas("I will eat human", 0);
        brain->setIdeas("I think I'm kidding", 1);
        brain->setIdeas("I'm not really sure", 2);
    }

    // 3. Affichage des idées principales de chaque animal
    std::cout << "\n\033[1;34m--- Ideas of all animals ---\033[0m\n";
    for (int i = 0; i < NUM_ANIMALS; i++)
    {
        Brain* brain = animals[i]->getBrain();
        std::cout << animals[i]->getType() << " thinks: " << brain->getIdeas(0) << "\n";
    }

    // 4. Chaque animal fait un son
    std::cout << "\n\033[1;34m--- Sounds ---\033[0m\n";
    for (int i = 0; i < NUM_ANIMALS; i++)
        animals[i]->makeSound();

    // 5. Test de copie profonde
    std::cout << "\n\033[1;34m--- Deep copy test ---\033[0m\n";
    Dog originalDog;
    originalDog.getBrain()->setIdeas("I love bones", 0);

    Dog copiedDog = originalDog; // utilise l'opérateur de copie
    copiedDog.getBrain()->setIdeas("I prefer meat", 0);

    std::cout << "Original Dog idea: " << originalDog.getBrain()->getIdeas(0) << "\n";
    std::cout << "Copied Dog idea: " << copiedDog.getBrain()->getIdeas(0) << "\n";

    // 6. Libération de la mémoire
    std::cout << "\n\033[1;34m--- Destruction ---\033[0m\n";
    for (int i = 0; i < NUM_ANIMALS; i++)
        delete animals[i];

    return 0;
}
