/*
 * cifras_proc_ref.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide un número de cuatro cifras (1000-9999) para descomponerlo en unidades
 * de mil, centenas, decenas y unidades. Se debe mostrar la descomposición por
 * pantalla.
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
// Constantes de cifras
#define U_MIL 1000
#define CENTENA 100
#define DECENA 10

// Declaración de prototipos
void    leeNumero(unsigned *);
void    calculaUnidadesMil(unsigned *, unsigned *);
void    calculaCentenas(unsigned *, unsigned *);
void    calculaDecenas(unsigned *, unsigned *);
void    calculaUnidades(unsigned *, unsigned *);
void    imprimeResultados(unsigned *, unsigned *, unsigned *, unsigned *);

/*
 * Función principal.
 * 
 * Calcula y muestra por pantalla el número entero de 4 cifras descompuesto.
 */
int main() {
  // Declaración de variables.
  unsigned num, uMil, centenas, decenas, unidades;

  // Entrada de datos.
  leeNumero(&num);

  // Cálculos.
  calculaUnidadesMil(&num, &uMil);
  calculaCentenas(&num, &centenas);
  calculaDecenas(&num, &decenas);
  calculaUnidades(&num, &unidades);

  // Impresión por pantalla de resultados.
  imprimeResultados(&uMil, &centenas, &decenas, &unidades);

  return 0;
}

/*
 * Procedimiento leeNumero.
 * 
 * Lee un número de cuatro cifras introducido por teclado y lo almacena en el
 * parámetro num pasado por referencia.
 * 
 * @param num - referencia al número de cuatro cifras.
 */
void leeNumero(unsigned *num) {
  // Entrada de datos.
  printf("Introduce un número de 4 cifras: ");
  scanf("%u", num);
}

/*
 * Procedimiento calculaUnidadesMil.
 * 
 * Calcula las unidades de mil de un número de cuatro cifras y lo almacena en
 * el parámetro uMil pasado por referencia.
 * 
 * @param num - referencia al número de cuatro cifras.
 * @param uMil - referencia a las unidades de mil.
 */
void calculaUnidadesMil(unsigned *num, unsigned *uMil) {
  // Cálculos.
  *uMil = *num / U_MIL;
}

/*
 * Procedimiento calculaCentenas.
 * 
 * Calcula las centenas de un número de cuatro cifras y lo almacena en el 
 * parámetro centenas pasado por referencia.
 * 
 * @param num - referencia al número de cuatro cifras.
 * @param centenas - referencia a las centenas.
 */
void calculaCentenas(unsigned *num, unsigned *centenas) {
  // Cálculos.
  *centenas = *num % U_MIL / CENTENA;
}

/*
 * Procedimiento calculaDecenas.
 * 
 * Calcula las decenas de un número de cuatro cifras y lo almacena en el
 * parámetro decenas pasado por referencia.
 * 
 * @param num - referencia al número de cuatro cifras.
 * @param decenas - referencia a las decenas.
 */
void calculaDecenas(unsigned *num, unsigned *decenas) {
  // Cálculos.
  *decenas = *num % U_MIL % CENTENA / DECENA;
}

/*
 * Procedimiento calculaUnidades.
 * 
 * Calcula las unidades de un número de cuatro cifras y lo almacena en el
 * parámetro unidades pasado por referencia.
 * 
 * @param num - referencia al número de cuatro cifras.
 * @param unidades - referencia a las unidades.
 */
void calculaUnidades(unsigned *num, unsigned *unidades) {
  // Cálculos.
  *unidades = *num % U_MIL % CENTENA % DECENA;
}

/*
 * Procedimiento imprimeResultados.
 * 
 * Muestra por pantalla la descomposición en cifras.
 * 
 * @param uMil - referencia a las unidades de mil.
 * @param centenas - referencia a las centenas.
 * @param decenas - referencia a las decenas.
 * @param unidades - referencia a las unidades.
 */
void imprimeResultados(unsigned *uMil, unsigned *centenas,
		       unsigned *decenas, unsigned *unidades) {
  // Impresión por pantalla de resultados.
  printf("Unidades de mil: %u, Centenas: %u, Decenas: %u, Unidades: %u\n",
	 *uMil, *centenas, *decenas, *unidades);
}
