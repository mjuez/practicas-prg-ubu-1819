/*
 * segundos_main.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide el una cantidad entera de segundos y nos muestra su equivalente en
 * horas, minutos, y segundos.
 * 
 * Solución en función main.
 *
 * @authors:
 *   Carlos Pardo <cpardo@ubu.es>,
 *   Ángel Arroyo <aarroyop@ubu.es>,
 *   Francisco Javier Rodríguez <fjrdiaz@ubu.es>,
 *   Mario Juez <mariojg@ubu.es>
 * @date: 2019-02-19
 * @version: 2.0
 * @license: GPLv3
 * @organization: LSI@EPS.UBU.ES
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf, scanf)
#include <stdio.h>
// Constantes (segundos en una hora y en un minuto)
#define HORA 3600
#define MINUTO 60

/*
 * Función principal.
 * 
 * Calcula y muestra por pantalla el equivalente en horas minutos y segundos 
 * a una cantidad de segundos.
 */
int main() {
  // Declaración de variables.
  unsigned int segundos, horas, minutos, restoSegundos;

  // Entrada de datos.
  printf("Introduce un número de segundos: ");
  scanf("%u", &segundos);

  // Cálculos.
  horas = segundos / HORA;
  restoSegundos = segundos % HORA;
  minutos = restoSegundos / MINUTO;
  restoSegundos = restoSegundos % MINUTO;

  // Impresión por pantalla de resultados.
  printf("Horas %d, Minutos %d, Segundos %d\n", horas, minutos, restoSegundos);

  return 0;
}
