/*
 * cifras_func_ref.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide un número de cuatro cifras (1000-9999) para descomponerlo en unidades
 * de mil, centenas, decenas y unidades. Se debe mostrar la descomposición por
 * pantalla.
 * 
 * Solución con funciones utilizando paso por referencia.
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
// Constantes de cifras
#define U_MIL 1000
#define CENTENA 100
#define DECENA 10

// Declaración de prototipos
unsigned leeNumero();
unsigned calculaUnidadesMil(unsigned *);
unsigned calculaCentenas(unsigned *);
unsigned calculaDecenas(unsigned *);
unsigned calculaUnidades(unsigned *);
int     imprimeResultados(unsigned *, unsigned *, unsigned *, unsigned *);

/*
 * Función principal.
 * 
 * Calcula y muestra por pantalla el número entero de 4 cifras descompuesto.
 */
int main() {
  // Declaración de variables.
  unsigned num, uMil, centenas, decenas, unidades;

  // Entrada de datos.
  num = leeNumero();

  // Cálculos.
  uMil = calculaUnidadesMil(&num);
  centenas = calculaCentenas(&num);
  decenas = calculaDecenas(&num);
  unidades = calculaUnidades(&num);

  // Impresión por pantalla de resultados.
  imprimeResultados(&uMil, &centenas, &decenas, &unidades);

  return 0;
}

/*
 * Función leeNumero.
 * 
 * Lee un número de cuatro cifras introducido por teclado.
 * 
 * @return número leído.
 */
unsigned leeNumero() {
  // Declaración de variables (solo existen dentro de la función).
  unsigned num;

  // Entrada de datos.
  printf("Introduce un número de 4 cifras: ");
  scanf("%u", &num);

  // Retorno del número leído.
  return num;
}

/*
 * Función calculaUnidadesMil.
 * 
 * Calcula las unidades de mil de un número de cuatro cifras.
 * 
 * @param num - referencia al número de cuatro cifras.
 * @return unidades de mil.
 */
unsigned calculaUnidadesMil(unsigned *num) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned uMil = *num / U_MIL;

  // Retorno de las unidades de mil.
  return uMil;
}

/*
 * Función calculaCentenas.
 * 
 * Calcula las centenas de un número de cuatro cifras.
 * 
 * @param num - referencia al número de cuatro cifras.
 * @return centenas.
 */
unsigned calculaCentenas(unsigned *num) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned centenas = *num % U_MIL / CENTENA;

  // Retorno de las centenas.
  return centenas;
}

/*
 * Función calculaDecenas.
 * 
 * Calcula las decenas de un número de cuatro cifras.
 * 
 * @param num - referencia al número de cuatro cifras.
 * @return decenas.
 */
unsigned calculaDecenas(unsigned *num) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned decenas = *num % U_MIL % CENTENA / DECENA;

  // Retorno de las decenas.
  return decenas;
}

/*
 * Función calculaUnidades.
 * 
 * Calcula las unidades de un número de cuatro cifras.
 * 
 * @param num - referencia al número de cuatro cifras.
 * @return unidades.
 */
unsigned calculaUnidades(unsigned *num) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned unidades = *num % U_MIL % CENTENA % DECENA;

  // Retorno de las unidades.
  return unidades;
}

/*
 * Función imprimeResultados.
 * 
 * Muestra por pantalla la descomposición en cifras.
 * 
 * @param uMil - referencia a las unidades de mil.
 * @param centenas - referencia a las centenas.
 * @param decenas - referencia a las decenas.
 * @param unidades - referencia a las unidades.
 * @return número de caracteres imprimidos.
 */
int imprimeResultados(unsigned *uMil, unsigned *centenas, unsigned *decenas,
		      unsigned *unidades) {
  // Declaración de variables (solo existen dentro de la función).
  int     numcar;

  // Impresión por pantalla de resultados.
  numcar =
      printf
      ("Unidades de mil: %u, Centenas: %u, Decenas: %u, Unidades: %u\n",
       *uMil, *centenas, *decenas, *unidades);

  // Retorno del número de caracteres imprimidos.
  return numcar;
}
