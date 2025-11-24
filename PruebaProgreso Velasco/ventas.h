#ifndef VENTAS_H
#define VENTAS_H
#define MAX_DIAS 30
void ingresarVentas(float ventas[], int n);
float totalVentas(float ventas[], int n);
float promedioVentas(float ventas[], int n);
float ventaMaxima(float ventas[], int n);
void mostrarResultados(float total, float promedio, float maxima);
#endif