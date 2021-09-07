#define columnas 9
#ifndef FUNCIONES_H
#define FUNCIONES_H


//llenado de matriz
int leer(char *filename, int MatrizSalida[][columnas]);//pide: int leer(char *NombreArchivo, int matriz1Sal[*][valorcolumna]); 

//Hacerla transversal
int transversa(int MatrizEntrada[][columnas], int MatrizSalida[][columnas]);//pide: int transversal(int Matriz1[*][valor], int Matriz2Salida[*][valorColumna]);

//Multiplicacion transversal por normal
int multiplicacionM(int MatrizEntrada[][columnas], int MatrizEntrada1[][columnas], int MultMatrizSalida[][columnas]);//pide: int multiplicacionM(int Matriz1[][valorColumna], int matriz2[][valorColumna], int matrizSalida[][valorColumna]);

const char integrantes();

#endif /* FUNCIONES_H */

