/*
 * fracciones.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯
 * Operaciones con fracciones.
 * Solicita los valores de dos fracciones y muestra el resultado de operar con 
 * ellas.
 *
 * @authors:
 *   Carlos Pardo <cpardo@ubu.es>,
 *   Ángel Arroyo <aarroyop@ubu.es>,
 *   Francisco Javier Rodríguez <fjrdiaz@ubu.es>,
 *   Mario Juez <mariojg@ubu.es>
 * @date: 2019-02-13
 * @version: 4.0
 * @license: GPLv3
 * @organization: LSI@EPS.UBU.ES
 * 
 * PRUEBAS:
 * 1 2 1 3  =>  1/2 +-*:  1/3 : 5/6   1/6   1/3    3/2
 * -1 6 1 2 => -1/6 +-*:  1/2 : 4/12 -8/12 -1/12  -2/6
 * 1 2 -1 6 =>  1/2 +-*: -1/6 : 4/12  8/12 -1/12  -6/2
 * 3 4 -2 3 =>  3/4 +-*: -2/3 : 1/12 17/12 -6/12 -18/16 (o -9/8)
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf, scanf)
#include <stdio.h>

/* 
 * Función principal.
 * 
 * Lee la entrada por teclado de dos fracciones, realiza cálculos con ellas, y
 * los muestra por pantalla.
 */
int main() {
  // Declaración de variables
  int     num1, num2;
  unsigned den1, den2;		// los denominadores siempre son positivos.
  int     numSum, numRes, numPro, numDiv, denSRP, denDiv;

  // Entrada de datos
  printf("Introduce 4 números:\n");
  scanf("%d %u %d %u", &num1, &den1, &num2, &den2);
  printf("\n");

  // Cálculos
  denSRP = den1 * den2;
  denDiv = den1 * num2;
  numSum = num1 * den2 + num2 * den1;
  numRes = num1 * den2 - num2 * den1;
  numPro = num1 * num2;
  numDiv = num1 * den2;
  numDiv *= num2;		// ajuste de signo
  denDiv *= num2;		// ajuste de signo

  // Salida de resultados
  printf("Suma: %d/%u%+d/%u=%d/%u\n",
	 num1, den1, num2, den2, numSum, denSRP);
  printf("Resta: %d/%u%+d/%u=%d/%u\n",
	 num1, den1, -num2, den2, numRes, denSRP);
  printf("Multiplicación: %d/%u*%d/%u=%d/%u\n",
	 num1, den1, num2, den2, numPro, denSRP);
  printf("División: %d/%u:%d/%u=%d/%u\n",
	 num1, den1, num2, den2, numDiv, denDiv);

  return 0;
}
