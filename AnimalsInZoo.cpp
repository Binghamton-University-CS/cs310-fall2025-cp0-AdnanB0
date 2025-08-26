#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;


AnimalsInZoo::AnimalsInZoo(Animal animalObj) : numAnimals(1), animal(animalObj) {}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0), animal() {}


void AnimalsInZoo::display() {
   cout << numAnimals << " animal(s) stored" << endl;
   if (numAnimals > 0) {
       animal.display();
   }
}


