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

## Ejercicio 2: Segundos

Hacer un programa que pida un número de segundos y nos muestre su equivalente
en horas, minutos, y segundos.

Puedes utilizar `#define` para declarar y dar valor a constantes que almacenen
el número de segundos que tiene una hora, y el número de segundos que tiene 
un minuto.

### Pruebas

| **Entrada** | **Salida** |
| --- | --- |
| 59 | Horas 0, Minutos 0, Segundos 59 |
| 60 | Horas 0, Minutos 1, Segundos 0 |
| 3600 | Horas 1, Minutos 0, Segundos 0 |
| 3661 | Horas 1, Minutos 1, Segundos 1 |

## Ejercicio 3: Cifras

Hacer un programa que pida un número entero de cuatro cifras y lo descomponga
en:

- Unidades
- Decenas
- Centenas
- Unidades de mil

Puedes utilizar `#define` para declarar y dar valor a constantes que puedan
ser útiles para realizar la descomposición. Por ejemplo: `#define U_MIL 1000`.

### Pruebas

| **Entrada** | **Salida** |
| --- | --- |
| 1000 | Unidades de mil: 1, Centenas: 0, Decenas: 0, Unidades: 0 |
| 1100 | Unidades de mil: 1, Centenas: 1, Decenas: 0, Unidades: 0 |
| 1110 | Unidades de mil: 1, Centenas: 1, Decenas: 1, Unidades: 0 |
| 1111 | Unidades de mil: 1, Centenas: 1, Decenas: 1, Unidades: 1 |