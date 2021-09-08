#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"
#define filas 60
#define columnas 9
#define ARRAYSIZE(x)  (sizeof(x)/sizeof(*(x)))
#include <stdbool.h>
bool pass = true;

int leer(char *filename, int MatrizSalida[][columnas]) {
    FILE *file = fopen(filename, "r"); //lo leemos
    if (file) {
        pass = true;

        int MatrizEntrada[filas][columnas]; //asignamos las columnas y datos tienen que ser o con una columna e fila mas para genera espacio extra para correr
        //int MatrizEntrada1[61][9];
        size_t i, j, k; //declaramos variables utilizables

        char buffer[1024], *ptr; //ocupamos un vector para darle espacio de memoria al buffer
        /*
         * lee cada línea del archivo.
         */
        for (i = 0; fgets(buffer, sizeof buffer, file); ++i) {
            /*
             * Analizar los valores separados por comas de cada línea en 'matriz'
             */
            for (j = 0, ptr = buffer; j < ARRAYSIZE(*MatrizEntrada); ++j, ++ptr) {

                MatrizEntrada[i][j] = (int) strtol(ptr, &ptr, 10); //asignamos valor a MatrizEntrada convirtiendolos en enteros
            }
        }
        fclose(file);
        /*
         * Imprime los datos en 'matriz'.
         */
        //-----------------------------------------------------------------------------------------------------------------------------------
        //mostrar y copiar matriz
        for (j = 1; j < i; ++j) {//filas
            //printf("Pocision: [%lu]: ", (long unsigned) j);
            for (k = 3; k < ARRAYSIZE(*MatrizEntrada); ++k) {//columna

                MatrizSalida[j][k] = MatrizEntrada[j][k];
            }

        }
        return pass;
    } else {
        pass = false;
        return pass;
    }

}

int transversa(int MatrizEntrada[][columnas], int MatrizSalida[][columnas]) {
    if (MatrizEntrada) {
        for (int a = 0; a < filas; ++a) {//cambio de filas y columnas
            for (int e = 0; e < columnas; ++e) {//columnas
                MatrizEntrada[e][a];
            }
        }

        pass = true;
        return pass;
    } else {
        pass = false;
        return pass;
    }
}

int multiplicacionM(int MatrizEntrada[][columnas], int MatrizEntrada1[][columnas], int MultMatrizSalida[][columnas]) {
    //pide: int multiplicacionM(int Matriz1[][valorColumna], int matriz2[][valorColumna], int matrizSalida[][valorColumna]);

    //funcion 3 Multiplicar matrices transversal * incial
    /*
     * C11=A11.B11+A12.B21+A13.B31
     * 
     * C12=A11.B12+A12.B22+A13.B32
     * 
     * C21=A21.B11+A22.B21+A23.B31
     * 
     * C22=A21.B12+A22.B22+A23.B32
     */
    if (MatrizEntrada && MatrizEntrada1) {
        for (int i = 0; i < filas; i++) {
            for (int a = 0; a < filas; a++) {
                int suma = 0;
                for (int j = 0; j < columnas; j++) {
                    suma += ((MatrizEntrada[i][j]) * (MatrizEntrada1[j][a]));
                }
                MultMatrizSalida[i][a] = suma;
            }
        }
        
        pass = true;
        return pass;
    } else {
        pass = false;
        return pass;
    }
}

const char integrante() {
    char *Integrante = "LE19005";


    FILE *Salida = fopen("Integrante.csv", "w");
    if (Salida == NULL) {
        printf("Error no existe el archivo");
        exit(-1);
        pass = false;
        return pass;
    } else {
        fprintf(Salida, "%s", Integrante);
        pass = true;
        return pass;
    }
}