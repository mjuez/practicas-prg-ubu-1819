/*
 * holaClase.c
 * ¯¯¯¯¯¯¯¯¯¯¯
 * Muestra por pantalla un saludo de parte del autor del programa.
 *
 * @authors:
 *   Carlos Pardo <cpardo@ubu.es>,
 *   Ángel Arroyo <aarroyop@ubu.es>,
 *   Francisco Javier Rodríguez <fjrdiaz@ubu.es>,
 *   Mario Juez <mariojg@ubu.es>
 * @date: 2019-02-05
 * @version: 1.0
 * @license: GPLv3
 * @organization: LSI@EPS.UBU.ES
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf)
#include <stdio.h>
// Constante AUTHOR
#define AUTHOR "Mario Juez"

/* 
 * Función principal.
 * Imprime un saludo por pantalla.
 */
int main() {
  printf("Hola clase\n\tMe llamo ");
  printf(AUTHOR);
  printf("\n");
  return 0;
}
