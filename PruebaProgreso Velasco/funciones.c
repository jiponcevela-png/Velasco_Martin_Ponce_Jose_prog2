#include <stdio.h>
#include "ventas.h"
void ingresarVentas(float ventas[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Ingrese venta del dia %d: ", i + 1);
        scanf("%f", &ventas[i]);
    }
}
float totalVentas(float ventas[], int n) {
    float total = 0;
    for(int i = 0; i < n; i++) {
        total += ventas[i];
    }
    return total;
}
float promedioVentas(float ventas[], int n) {
    return totalVentas(ventas, n) / n;
}
float ventaMaxima(float ventas[], int n) {
    float max = ventas[0];
    for(int i = 1; i < n; i++) {
        if (ventas[i] > max) {
            max = ventas[i];
        }
    }
    return max;
}
void mostrarResultados(float total, float promedio, float maxima) {
    printf("\nResultados\n");
    printf("Total: %.2f\n", total);
    printf("Promedio: %.2f\n", promedio);
    printf("Venta maxima: %.2f\n", maxima);
}