/*
 * enteros.c
 * ¯¯¯¯¯¯¯¯¯
 * Introduce y muestra 3 números:
 * - Entero sin signo (natural)
 * - Entero con signo (entero)
 * - Entero con signo largo
 * Establecer los dos primeros enteros a entero corto (short).
 *
 * @authors:
 *   Carlos Pardo <cpardo@ubu.es>,
 *   Ángel Arroyo <aarroyop@ubu.es>,
 *   Francisco Javier Rodríguez <fjrdiaz@ubu.es>,
 *   Mario Juez <mariojg@ubu.es>
 * @date: 2019-02-12
 * @version: 2.0
 * @license: GPLv3
 * @organization: LSI@EPS.UBU.ES
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf, scanf)
#include<stdio.h>

/* 
 * Función principal.
 * 
 * Lee la entrada por teclado de tres números (natural, entero, entero largo) 
 * separados por espacios y los muestra por pantalla. 
 */
int main(){
  // Declaración de variables
  short unsigned int num1;  // ó short unsigned num1; (int es redundante). NATURAL
  short signed int num2;    // ó short int num2; (signed es redundante). ENTERO
  long signed int num3;     // ó long num3; (signed e int redundantes). ENTERO LARGO

  // Entrada de datos
  printf("Introduce 3 números separados por espacios\n");
  scanf("%hu %hd %ld", &num1, &num2, &num3);

  // Impresión por pantalla
  printf("Natural: %hu\n", num1);       // %hu -> short (h) unsigned (u)
  printf("Entero: %hd\n", num2);        // %h -> short (h) int (d)
  printf("Entero largo: %ld\n", num3);  // %l -> long (l) int (d)
    
  return 0;
}
