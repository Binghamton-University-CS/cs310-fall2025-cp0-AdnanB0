#include <iostream>
#include <stdlib.h>
#include "Animal.h" 
using namespace std;

#include "AnimalsInZoo.h"

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Cheetah", 1775);	

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   animal2.display();
   animal1->display();
   animal3.display();

   AnimalsInZoo emptyZoo;
   AnimalsInZoo fullZoo(Animal("Bear", 1995));

   delete animal1;

   emptyZoo.display();
   fullZoo.display();

}
