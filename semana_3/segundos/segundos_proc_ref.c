/*
 * segundos_proc_ref.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide el una cantidad entera de segundos y nos muestra su equivalente en
 * horas, minutos, y segundos.
 * 
 * Solución con procedimientos utilizando paso por referencia.
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

// Declaración de prototipos
void leeSegundos(unsigned *);
void calculaHoras(unsigned *, unsigned *);
void calculaMinutos(unsigned *, unsigned *);
void calculaRestoSegundos(unsigned *, unsigned);
void imprimeResultados(unsigned *, unsigned *, unsigned *);

/*
 * Función principal.
 * 
 * Calcula y muestra por pantalla el equivalente en horas minutos y segundos 
 * a una cantidad de segundos.
 */
int main() {
  // Declaración de variables.
  unsigned segundos, horas, minutos;

  // Entrada de datos.
  leeSegundos(&segundos);

  // Cálculos.
  calculaHoras(&segundos, &horas); // se actualizan los segundos (resto)!
  calculaMinutos(&segundos, &minutos); // se actualizan los segundos (resto)!

  // Impresión por pantalla de resultados.
  imprimeResultados(&horas, &minutos, &segundos);

  return 0;
}

/*
 * Procedimiento leeSegundos.
 * 
 * Lee una cantidad de segundos introducida por teclado y la almacena en el 
 * parámetro segundos pasado por referencia.
 * 
 * @param segundos - referencia a la cantidad de segundos.
 */
void leeSegundos(unsigned *segundos) {
  // Entrada de datos.
  printf("Introduce un número de segundos: ");
  scanf("%u", segundos);
}

/*
 * Procedimiento calculaHoras.
 * 
 * Calcula el equivalente en horas de una cantidad de segundos y la almacena
 * en el parámetro horas pasado por referencia. A continuación calcula la 
 * cantidad de segundos restante y actualiza la referencia a segundos.
 * 
 * @param segundos - referencia a la cantidad de segundos
 * @param horas - referencia a la cantidad de horas
 */
void calculaHoras(unsigned *segundos, unsigned *horas) {
  // Cálculo del número de horas.
  *horas = *segundos / HORA;
  
  // Actualización de segundos.
  calculaRestoSegundos(segundos, HORA);
}

/*
 * Procedimiento calculaMinutos.
 * 
 * Calcula el equivalente en minutos de una cantidad de segundos y la almacena
 * en el parámetro minutos pasado por referencia. A continuación calcula la 
 * cantidad de segundos restante y actualiza la referencia a segundos.
 * 
 * @param segundos - referencia a la cantidad de segundos
 * @param minutos - referencia a la cantidad de minutos
 */
void calculaMinutos(unsigned *segundos, unsigned *minutos) {
  // Cálculo del número de minutos.
  *minutos = *segundos / MINUTO;
  
  // Actualización de segundos.
  calculaRestoSegundos(segundos, MINUTO);
}

/*
 * Procedimiento calculaRestoSegundos.
 * 
 * Calcula los segundos restantes tras calcular su equivalencia a horas y 
 * minutos, se acutaliza la referencia a segundos con el nuevo valor.
 * 
 * @param segundos - referencia a la cantidad de segundos
 * @param uTiempo - unidad de tiempo en base a la que calcular el resto 
 *                  (horas o minutos)
 */
void calculaRestoSegundos(unsigned *segundos, unsigned uTiempo) {
  // Actualización de la cantidad de segundos al resto del cálculo de horas
  // o minutos.
  *segundos = *segundos % uTiempo;
}

/*
 * Procedimiento imprimeResultados.
 * 
 * Muestra por pantalla la conversión a horas, minutos, y segundos.
 * 
 * @param horas - referencia a la cantidad de horas.
 * @param minutos - referencia a la cantidad de minutos.
 * @param segundos - referencia a la cantidad de segundos
 */
void imprimeResultados(unsigned *horas, unsigned *minutos, unsigned *segundos) {
  // Impresión por pantalla de resultados.
  printf("Horas %d, Minutos %d, Segundos %d\n", *horas, *minutos, *segundos);
}