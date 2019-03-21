/*
 * segundos_proc_val.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide el una cantidad entera de segundos y nos muestra su equivalente en
 * horas, minutos, y segundos.
 * 
 * Solución con procedimientos utilizando paso por valor.
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
void    leeSegundos();
void    calculaHoras(unsigned);
void    calculaMinutos(unsigned);
void    imprimeHoras(unsigned);
void    imprimeMinutos(unsigned);
void    imprimeSegundos(unsigned);

/*
 * Función principal.
 * 
 * Calcula y muestra por pantalla el equivalente en horas minutos y segundos 
 * a una cantidad de segundos.
 */
int main() {
  // Entrada de datos.
  leeSegundos();

  return 0;
}

/*
 * Procedimiento leeSegundos.
 * 
 * Lee una cantidad de segundos introducida por teclado.
 * 
 * @param segundos - referencia a la cantidad de segundos.
 */
void leeSegundos() {
  // Declaración de variables (solo existen dentro del procedimiento).
  unsigned segundos;

  // Entrada de datos.
  printf("Introduce un número de segundos: ");
  scanf("%u", &segundos);

  // Cálculo de horas.
  calculaHoras(segundos);
}

/*
 * Procedimiento calculaHoras.
 * 
 * Calcula el equivalente en horas de una cantidad de segundos. A continuación 
 * calcula la cantidad de segundos restante y calcula los minutos.
 * 
 * @param segundos - cantidad de segundos.
 */
void calculaHoras(unsigned segundos) {
  // Declaración de variables (solo existen dentro del procedimiento).
  unsigned horas, restoSegundos;

  // Cálculo e impresión de horas.
  horas = segundos / HORA;
  imprimeHoras(horas);

  // Cálculo de minutos con el resto de segundos.
  restoSegundos = segundos % HORA;
  calculaMinutos(restoSegundos);
}

/*
 * Procedimiento calculaMinutos.
 * 
 * Calcula el equivalente en minutos de una cantidad de segundos. A 
 * continuación calcula la cantidad de segundos restante.
 * 
 * @param segundos - referencia a la cantidad de segundos
 */
void calculaMinutos(unsigned segundos) {
  // Declaración de variables (solo existen dentro del procedimiento).
  unsigned minutos, restoSegundos;

  // Cálculo e impresión de minutos.
  minutos = segundos / MINUTO;
  imprimeMinutos(minutos);

  // Cálculo e impresión del resto de segundos.
  restoSegundos = segundos % MINUTO;
  imprimeSegundos(restoSegundos);
}

/*
 * Procedimiento imprimeHoras.
 * 
 * Muestra por pantalla la cantidad de horas tras realizar la conversión.
 * 
 * @param horas - cantidad de horas.
 */
void imprimeHoras(unsigned horas) {
  // Impresión por pantalla de horas.
  printf("Horas %d, ", horas);
}

/*
 * Procedimiento imprimeMinutos.
 * 
 * Muestra por pantalla la cantidad de minutos tras realizar la conversión.
 * 
 * @param minutos - cantidad de minutos.
 */
void imprimeMinutos(unsigned minutos) {
  // Impresión por pantalla de minutos.
  printf("Minutos %d, ", minutos);
}

/*
 * Procedimiento imprimeSegundos.
 * 
 * Muestra por pantalla la cantidad de segundos tras realizar la conversión.
 * 
 * @param segundos - cantidad de segundos.
 */
void imprimeSegundos(unsigned segundos) {
  // Impresión por pantalla de segundos.
  printf("Segundos %d\n", segundos);
}
