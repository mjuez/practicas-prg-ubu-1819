/*
 * ascii.c
 * ¯¯¯¯¯¯¯
 * Lee tres números enteros separados por coma e imprime cuántos ha leído
 * correctamente.
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
 * Lee la entrada por teclado de tres números separados por coma e imprime
 * cuántos ha leído correctamente aprovechando el retorno de la función scanf.
 */
int main(){
  // Declaración de variables
  int num1, num2, num3, leidos;

  // Entrada de datos.
  printf("Introduce tres enteros separados por coma:\n");
  leidos = scanf("%d,%d,%d", &num1, &num2, &num3);

  // Impresión por pantalla.
  printf("He leído %d enteros.\n", leidos);
  
  return 0;
}
