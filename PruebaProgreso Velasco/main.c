#include <stdio.h>
#include "ventas.h"
int main() {
    float ventas[MAX_DIAS];
    int n;
    printf("Cuantos dias quiere registrar? (max 30): ");
    scanf("%d", &n);
    if(n < 1 || n > MAX_DIAS) {
        printf("Numero de dias no valido.\n");
        return 1;
    }
    ingresarVentas(ventas, n);
    float total = totalVentas(ventas, n);
    float promedio = promedioVentas(ventas, n);
    float maxima = ventaMaxima(ventas, n);
    mostrarResultados(total, promedio, maxima);
    return 0;
}