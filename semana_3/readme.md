# Funciones y procedimientos

Durante esta semana se trabaja con la modularización del código fuente. Para 
ello se aprende el uso de funciones y procedimientos, así como sus principales
diferencias. Además se pone en práctica el paso por valor y por referencia de
los parámetros en C.

Los tres ejercicios propuestos se deben resolver de cinco formas diferentes:

- **Sin utilizar módulos:** Toda la implementación del programa se realiza 
dentro de la función main.
- **Utilizando funciones + paso por valor:** La implementación del programa se
debe modularizar a través de funciones cuyos parámetros se pasen por valor.
- **Utilizando funciones + paso por referencia:** La implementación del 
programa se debe modularizar a través de funciones cuyos parámetros se pasen 
por referencia.
- **Utilizando procedimientos + paso por valor:** La implementación del 
programa se debe modularizar a través de procedimientos cuyos parámetros se 
pasen por valor.
- **Utilizando procedimientos + paso por referencia:** La implementación del 
programa se debe modularizar a través de procedimientos cuyos parámetros se 
pasen por referencia.

## Ejercicio 1: Círculo

Hacer un programa que pida el valor del radio de una circunferencia y nos 
muestre su perímetro y el área del círculo que encierra. El resultado se debe
redondear para utilizar datos enteros (aun no hemos visto datos con coma 
flotante).

Las fórmulas a aplicar son las siguientes:

- `P = 2 * PI * r`
- `A = PI * r * r`

Donde `P` es el perímetro, `A` el área, y `r` el radio. 

Utiliza `#define` para declarar y dar valor a la constante PI.

### Pruebas

| **Entrada** | **Salida** |
| --- | --- |
| 3 | Perímetro: 18 Área: 28 |
| 5 | Perímetro: 31 Área: 78 |

