#include <stdio.h>
#include "conversion.h"
int main(){
    const int inferior = 0, // lower limit of table
                  superior = 300, // upper limit
                  paso = 20;
    printf("Fahrenheit -> Celsius\n");
    for (int f = inferior;f <= superior ; f+= paso){
        printf("%3d F =  %6.2f C\n", f, Celsius(f));
    }
    printf("Celsius -> Fahrenheit\n");
    for (int c = inferior; c <= superior ; c+= paso){
        printf("%3d c = %6.2f C\n", c, Fahrenheit(c));
    }

}