#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int a = 1, b = 2, c = 4, x = 0;

  while(1){
    printf("Bienvenue dans le programme de test");
    
    x = a*b;
    printf("Voici le résultat de la multiplication : %d\n", x);
    
    x = 0;
    x = c / b;
    printf("Voici le résultat de la division : %d\n", x);
    
    x = 0;
    x = a + b + c;
    printf("Voici le résultat de l'addition : %d\n", x);
    
    x = 0;
    }
}
    
