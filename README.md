# Sistema de Cálculo de Aumento Salarial

## ¿Qué problema resuelve?
Calcula el aumento de salario de un empleado según su salario actual y muestra un resumen con el salario anterior, el aumento y el nuevo salario.

| Salario actual | Aumento |
|---|---|
| $100 a $900 | 20% |
| Más de $900 hasta $1500 | 10% |
| Más de $1500 hasta $2000 | 5% |
| Otro valor | 0% |

## Tecnologías
- Lenguaje **C**
- Estructuras de decisión `if / else if / else` en cascada
- Librerías `stdio.h` y `string.h`

## ¿Cómo se instala y ejecuta?
1. Instala un compilador de C (GCC / MinGW, Code::Blocks o Dev-C++).
2. Descarga el archivo `aumento_salarial.c`.
3. Compila y ejecuta:
```bash
gcc aumento_salarial.c -o aumento
./aumento         # en Windows: aumento.exe
```
## Ejemplo de uso
```
 SISTEMA DE CÁLCULO DE AUMENTO SALARIAL

Información del Empleado
Ingrese el nombre completo: Jhonathan Camarena
Ingrese la cédula: 8-XXXX-XXX
Ingrese el salario actual ($): 1200

 Resumen de Ajuste Salarial
Empleado:         Jhonathan Camarena
Cédula:           8-XXXX-XXX
Salario Anterior: $1200.00
Aumento (10%):   $120.00
Nuevo Salario:    $1320.00
```
## Autor
Jhonathan Camarena, estudiante de Licenciatura en Redes Informáticas, UTP.
