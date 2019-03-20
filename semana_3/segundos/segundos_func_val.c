/*
 * segundos_func_val.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide el una cantidad entera de segundos y nos muestra su equivalente en
 * horas, minutos, y segundos.
 * 
 * Solución con funciones utilizando paso por valor.
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
unsigned leeSegundos();
unsigned calculaHoras(unsigned);
unsigned calculaMinutos(unsigned);
unsigned calculaRestoSegundos(unsigned, unsigned);
int     imprimeResultados(unsigned, unsigned, unsigned);

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
  horas = calculaHoras(segundos);
  restoSegundos = calculaRestoSegundos(segundos, HORA);
  minutos = calculaMinutos(restoSegundos);
  restoSegundos = calculaRestoSegundos(restoSegundos, MINUTO);

  // Impresión por pantalla de resultados.
  imprimeResultados(horas, minutos, restoSegundos);

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
 * @param segundos - cantidad de segundos
 * @return equivalente en horas de una cantidad de segundos.
 */
unsigned calculaHoras(unsigned segundos) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned horas = segundos / HORA;
  
  // Retorno del número de horas.
  return horas;
}

/*
 * Función calculaMinutos.
 * 
 * Calcula el equivalente en minutos de una cantidad de segundos.
 * 
 * @param segundos - cantidad de segundos
 * @return equivalente en minutos de una cantidad de segundos.
 */
unsigned calculaMinutos(unsigned segundos) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned minutos = segundos / MINUTO;
  
  // Retorno del número de minutos.
  return minutos;
}

/*
 * Función calculaRestoSegundos.
 * 
 * Calcula los segundos restantes tras calcular su equivalencia a horas y 
 * minutos.
 * 
 * @param segundos - cantidad de segundos
 * @param uTiempo - unidad de tiempo en base a la que calcular el resto 
 *                  (horas o minutos)
 * @return segundos restantes
 */
unsigned calculaRestoSegundos(unsigned segundos, unsigned uTiempo) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned resto = segundos % uTiempo;

  // Retorno del resto de segundos.
  return resto;
}

/*
 * Función imprimeResultados.
 * 
 * Muestra por pantalla la conversión a horas, minutos, y segundos.
 * 
 * @param horas - cantidad de horas.
 * @param minutos - cantidad de minutos.
 * @param segundos - cantidad de segundos
 * @return número de caracteres imprimidos.
 */
int imprimeResultados(unsigned horas, unsigned minutos, unsigned segundos) {
  // Declaración de variables (solo existen dentro de la función).
  int     numcar;

  // Impresión por pantalla de resultados.
  numcar = printf("Horas %d, Minutos %d, Segundos %d\n", horas, minutos, segundos);

  // Retorno del número de caracteres imprimidos.
  return numcar;
}
