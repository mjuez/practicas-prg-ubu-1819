/*
 * segundos_func_ref.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide el una cantidad entera de segundos y nos muestra su equivalente en
 * horas, minutos, y segundos.
 * 
 * Solución con funciones utilizando paso por referencia.
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
// Constantes (segundos en una hora y en un minuto)
#define MINUTOS_HORA 60
#define SEGUNDOS_MINUTO 60

// Declaración de prototipos
unsigned leeSegundos();
unsigned calculaHoras(unsigned *);
unsigned calculaMinutos(unsigned *);
unsigned calculaRestoSegundos(unsigned *);
int     imprimeResultados(unsigned *, unsigned *, unsigned *);

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
  segundos = leeSegundos();

  // Cálculos.
  horas = calculaHoras(&segundos);
  minutos = calculaMinutos(&segundos) % MINUTOS_HORA;
  restoSegundos = calculaRestoSegundos(&segundos);

  // Impresión por pantalla de resultados.
  imprimeResultados(&horas, &minutos, &restoSegundos);

  return 0;
}

/*
 * Función leeSegundos.
 * 
 * Lee una cantidad de segundos introducida por teclado.
 * 
 * @return cantidad de segundos.
 */
unsigned leeSegundos() {
  // Declaración de variables (solo existen dentro de la función).
  unsigned segundos;

  // Entrada de datos.
  printf("Introduce un número de segundos: ");
  scanf("%u", &segundos);

  // Retorno de la cantidad de segundos leída.
  return segundos;
}

/*
 * Función calculaHoras.
 * 
 * Calcula el equivalente en horas de una cantidad de segundos.
 * 
 * @param segundos - referencia a la cantidad de segundos
 * @return equivalente en horas de una cantidad de segundos.
 */
unsigned calculaHoras(unsigned *segundos) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned horas = *segundos / SEGUNDOS_MINUTO / MINUTOS_HORA;
  
  // Retorno del número de horas.
  return horas;
}

/*
 * Función calculaMinutos.
 * 
 * Calcula el equivalente en minutos de una cantidad de segundos.
 * 
 * @param segundos - referencia a la cantidad de segundos
 * @return equivalente en minutos de una cantidad de segundos.
 */
unsigned calculaMinutos(unsigned *segundos) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned minutos = *segundos / SEGUNDOS_MINUTO;
  
  // Retorno del número de minutos.
  return minutos;
}

/*
 * Función calculaRestoSegundos.
 * 
 * Calcula los segundos restantes tras calcular su equivalencia a minutos.
 * 
 * @param segundos - referencia a la cantidad de segundos
 * @return segundos restantes
 */
unsigned calculaRestoSegundos(unsigned *segundos) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned resto = *segundos % SEGUNDOS_MINUTO;

  // Retorno del resto de segundos.
  return resto;
}

/*
 * Función imprimeResultados.
 * 
 * Muestra por pantalla la conversión a horas, minutos, y segundos.
 * 
 * @param horas - referencia a la cantidad de horas.
 * @param minutos - referencia a la cantidad de minutos.
 * @param segundos - referencia a la cantidad de segundos
 * @return número de caracteres imprimidos.
 */
int imprimeResultados(unsigned *horas, unsigned *minutos, unsigned *segundos) {
  // Declaración de variables (solo existen dentro de la función).
  int     numcar;

  // Impresión por pantalla de resultados.
  numcar = printf("Horas %d, Minutos %d, Segundos %d\n", *horas, *minutos, *segundos);

  // Retorno del número de caracteres imprimidos.
  return numcar;
}