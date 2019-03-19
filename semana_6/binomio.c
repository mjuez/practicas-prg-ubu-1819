/*
 * binomio.c
 * ¯¯¯¯¯¯¯¯¯
 * Cálculo del binomio de newton (a+b)^m.
 * El programa pide por teclado dos enteros (a, b) y un número natural 
 * positivo. Se debe calcular el binomio de newton mediante el uso de funciones
 * recursivas.
 * 
 * Nota: en Linux se debe utilizar el flag -lm para enlazar la librería de
 * funciones matemáticas.
 *
 * @authors:
 *   Carlos Pardo <cpardo@ubu.es>,
 *   Ángel Arroyo <aarroyop@ubu.es>,
 *   Francisco Javier Rodríguez <fjrdiaz@ubu.es>,
 *   Mario Juez <mariojg@ubu.es>
 * @date: 2019-03-19
 * @version: 1.0
 * @license: GPLv3
 * @organization: LSI@EPS.UBU.ES
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf, scanf)
#include <stdio.h>
// Funciones matemáticas (pow)
#include <math.h>

// Declaración de prototipos
void leeEntero(int *);
void leeEnteroPositivo(unsigned *);
int factorial(int);
long sumatorio(int, int, unsigned, unsigned);
void muestraResultado(int, int, unsigned, long);
long binomial(unsigned, unsigned);

/*
 * Función principal.
 * 
 * Calcula el binomio de newton (a+b)^m.
 */
int main(){
  // TO-DO
  return 0;
}