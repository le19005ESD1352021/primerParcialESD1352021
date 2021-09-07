#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define ARRAYSIZE(x)  (sizeof(x)/sizeof(*(x)))
#define filas 60
#define columnas 9
/*
 * 
 */
int main() {
    int Matriz1[filas][columnas];//primera para guardar matriz de csv
    int MatrizT[filas][columnas];
    int MultT[filas][columnas];

    char filename[] = "peliculasFavoritasESD135_2021.csv"; //declaramos el archivo y su direccion path
   void carnet(const char * path){
    
}
   integrante();
   
    leer(filename, Matriz1); //leer parametros para llenar matriz
    
    transversa(Matriz1, MatrizT); //transversa de la matriz dada csv

    multiplicacionM(Matriz1, MatrizT, MultT);//multiplicacion de matrices

    
    return 0;
}


