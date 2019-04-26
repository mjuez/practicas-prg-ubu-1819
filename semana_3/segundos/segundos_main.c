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
 * @version: 3.0
 * @license: GPLv3
 * @organization: LSI@EPS.UBU.ES
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf, scanf)
#include <stdio.h>
// Constantes (minutos en una hora y segundos en un minuto)
#define MINUTOS_HORA 60
#define SEGUNDOS_MINUTO 60

/*
 * Función principal.
 * 
 * Calcula y muestra por pantalla el equivalente en horas minutos y segundos 
 * a una cantidad de segundos.
 */
int main() {
  // Declaración de variables.
  unsigned segundos, horas, minutos, restoSegundos;

  // Entrada de datos.
  printf("Introduce un número de segundos: ");
  scanf("%u", &segundos);

  // Cálculos.
  restoSegundos = segundos % SEGUNDOS_MINUTO;
  minutos = (segundos / SEGUNDOS_MINUTO) % MINUTOS_HORA;
  horas = segundos / SEGUNDOS_MINUTO / MINUTOS_HORA;

  // Impresión por pantalla de resultados.
  printf("Horas %d, Minutos %d, Segundos %d\n", horas, minutos, restoSegundos);

  return 0;
}
