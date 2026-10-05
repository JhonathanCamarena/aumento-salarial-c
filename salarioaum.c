/*Jhonathan Camarena Cédula: 8-1038-738 Fecha: 24/09/2026*/
#include <stdio.h>
#include <string.h>

int main()
{
    char nombre[50];
    char cedula[20];
    double salario_anterior, porcentaje_aumento = 0.0, aumento, nuevo_salario;

    // Entrada de datos
    printf(" SISTEMA DE CÁLCULO DE AUMENTO SALARIAL \n\n");
    printf("Información del Empleado \n");
    printf("Ingrese el nombre completo: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';

    printf("Ingrese la cédula: ");
    fgets(cedula, sizeof(cedula), stdin);
    cedula[strcspn(cedula, "\n")] = '\0';

    printf("Ingrese el salario actual ($): ");
    scanf("%lf", &salario_anterior);

    // Evaluación de la tasa de aumento mediante estructuras alternativas en cascada
    if (salario_anterior >= 100.0 && salario_anterior <= 900.0) {
        porcentaje_aumento = 0.20; // 20%
    } else if (salario_anterior > 900.0 && salario_anterior <= 1500.0) {
        porcentaje_aumento = 0.10; // 10%
    } else if (salario_anterior > 1500.0 && salario_anterior <= 2000.0) {
        porcentaje_aumento = 0.05; // 5%
    } else {
        porcentaje_aumento = 0.00; // 0%
    }

    // Cálculos finales
    aumento = salario_anterior * porcentaje_aumento;
    nuevo_salario = salario_anterior + aumento;

    // Salida detallada
    printf("\n Resumen de Ajuste Salarial \n");
    printf("Empleado:         %s\n", nombre);
    printf("Cédula:           %s\n", cedula);
    printf("Salario Anterior: $%.2f\n", salario_anterior);
    printf("Aumento (%.0f%%):   $%.2f\n", porcentaje_aumento * 100, aumento);
    printf("Nuevo Salario:    $%.2f\n", nuevo_salario);

    return 0;
}
