/*
 * cifras_main.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide un número de cuatro cifras (1000-9999) para descomponerlo en unidades
 * de mil, centenas, decenas y unidades. Se debe mostrar la descomposición por
 * pantalla.
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
// Constantes de cifras
#define U_MIL 1000
#define CENTENA 100
#define DECENA 10

/*
 * Función principal.
 * 
 * Calcula y muestra por pantalla el número entero de 4 cifras descompuesto.
 */
int main() {
  // Declaración de variables.
  unsigned num, restoNum, uMil, centenas, decenas;

  // Entrada de datos.
  printf("Introduce un número de 4 cifras: ");
  scanf("%u", &num);

  // Cálculos.
  uMil = num / U_MIL;
  restoNum = num % U_MIL;
  centenas = restoNum / CENTENA;
  restoNum = restoNum % CENTENA;
  decenas = restoNum / DECENA;
  restoNum = restoNum % DECENA;

  // Impresión por pantalla de resultados.
  printf("Unidades de mil: %u, Centenas: %u, Decenas: %u, Unidades: %u\n",
	 uMil, centenas, decenas, restoNum);

  return 0;
}
