/*
 * ascii.c
 * ¯¯¯¯¯¯¯
 * Introduce un número y retorna su caracter ASCII.
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
#include <stdio.h>

/* 
 * Función principal.
 * 
 * Lee la entrada por teclado de un número y retorna su caracter de la tabla 
 * ASCII. 
 */
int main(){
  // Declaración de variables
  int num;

  // Entrada de datos
  printf("Introduce un número entre 48 y 122:\n");
  scanf("%d", &num);
  
  // Impresión por pantalla
  printf("%c\n", (char) num); // utilizando (char) se realiza conversión de tipo
  
  return 0;
}
