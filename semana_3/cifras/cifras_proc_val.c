/*
 * cifras_proc_val.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide un número de cuatro cifras (1000-9999) para descomponerlo en unidades
 * de mil, centenas, decenas y unidades. Se debe mostrar la descomposición por
 * pantalla.
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
// Constantes de cifras
#define U_MIL 1000
#define CENTENA 100
#define DECENA 10

// Declaración de prototipos
void    leeNumero();
void    calculaUnidadesMil(unsigned);
void    calculaCentenas(unsigned);
void    calculaDecenas(unsigned);
void    calculaUnidades(unsigned);
void    imprimeUnidadesMil(unsigned);
void    imprimeCentenas(unsigned);
void    imprimeDecenas(unsigned);
void    imprimeUnidades(unsigned);

/*
 * Función principal.
 * 
 * Calcula y muestra por pantalla el número entero de 4 cifras descompuesto.
 */
int main() {
  // Entrada de datos.
  leeNumero();

  return 0;
}

/*
 * Procedimiento leeNumero.
 * 
 * Lee un número de cuatro cifras introducido por teclado. A continuación llama
 * a los procedimientos de calcular unidades de mil, centenas, decenas y 
 * unidades con el número leído.
 */
void leeNumero() {
  // Declaración de variables (solo existen dentro del procedimiento).
  unsigned num;

  // Entrada de datos.
  printf("Introduce un número de 4 cifras: ");
  scanf("%u", &num);

  // Cálculo e impresión de los resultados.
  calculaUnidadesMil(num);
  calculaCentenas(num);
  calculaDecenas(num);
  calculaUnidades(num);
}

/*
 * Procedimiento calculaUnidadesMil.
 * 
 * Calcula las unidades de mil de un número de cuatro cifras. A continuación
 * llama al procedimiento de imprimir las unidades de mil resultantes.
 * 
 * @param num - número de cuatro cifras.
 */
void calculaUnidadesMil(unsigned num) {
  // Declaración de variables (solo existen dentro del procedimiento).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned uMil = num / U_MIL;

  // Impresión por pantalla de resultados.
  imprimeUnidadesMil(uMil);
}

/*
 * Procedimiento calculaCentenas.
 * 
 * Calcula las centenas de un número de cuatro cifras. A continuación
 * llama al procedimiento de imprimir las centenas resultantes.
 * 
 * @param num - número de cuatro cifras.
 */
void calculaCentenas(unsigned num) {
  // Declaración de variables (solo existen dentro del procedimiento).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned centenas = num % U_MIL / CENTENA;

  // Impresión por pantalla de resultados.
  imprimeCentenas(centenas);
}

/*
 * Procedimiento calculaDecenas.
 * 
 * Calcula las decenas de un número de cuatro cifras. A continuación
 * llama al procedimiento de imprimir las decenas resultantes.
 * 
 * @param num - número de cuatro cifras.
 */
void calculaDecenas(unsigned num) {
  // Declaración de variables (solo existen dentro del procedimiento).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned decenas = num % U_MIL % CENTENA / DECENA;

  // Impresión por pantalla de resultados.
  imprimeDecenas(decenas);
}

/*
 * Procedimiento calculaUnidades.
 * 
 * Calcula las unidades de un número de cuatro cifras. A continuación
 * llama al procedimiento de imprimir las unidades resultantes.
 * 
 * @param num - número de cuatro cifras.
 */
void calculaUnidades(unsigned num) {
  // Declaración de variables (solo existen dentro del procedimiento).
  // Se declara y se asigna el valor calculado en la misma línea.
  unsigned unidades = num % U_MIL % CENTENA % DECENA;

  // Impresión por pantalla de resultados.
  imprimeUnidades(unidades);
}

/*
 * Procedimiento imprimeUnidadesMil.
 * 
 * Muestra por pantalla las unidades de mil del número de cuatro cifras.
 * 
 * @param uMil - unidades de mil del número de cuatro cifras.
 */
void imprimeUnidadesMil(unsigned uMil) {
  // Impresión por pantalla de resultados.
  printf("Unidades de mil: %u, ", uMil);
}

/*
 * Procedimiento imprimeCentenas.
 * 
 * Muestra por pantalla las centenas del número de cuatro cifras.
 * 
 * @param centenas - centenas del número de cuatro cifras.
 */
void imprimeCentenas(unsigned centenas) {
  // Impresión por pantalla de resultados.
  printf("Centenas: %u, ", centenas);
}

/*
 * Procedimiento imprimeDecenas.
 * 
 * Muestra por pantalla las decenas del número de cuatro cifras.
 * 
 * @param decenas - decenas del número de cuatro cifras.
 */
void imprimeDecenas(unsigned decenas) {
  // Impresión por pantalla de resultados.
  printf("Decenas: %u, ", decenas);
}

/*
 * Procedimiento imprimeUnidades.
 * 
 * Muestra por pantalla las unidades del número de cuatro cifras.
 * 
 * @param unidades - unidades del número de cuatro cifras.
 */
void imprimeUnidades(unsigned unidades) {
  // Impresión por pantalla de resultados.
  printf("Unidades: %u\n", unidades);
}
