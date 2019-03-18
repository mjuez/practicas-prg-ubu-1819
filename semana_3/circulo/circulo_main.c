/*
 * circulo_main.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide el valor del radio de una circunferencia y nos muestra su perímetro y 
 * el área del círculo que encierra (datos enteros, redondeo de resultado).
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
// Constante PI
#define PI 3.14159

/*
 * Función principal.
 * 
 * Calcula y muestra el perímetro y área de un círculo dado su radio.
 */
int main() {
  // Declaración de variables.
  int     perimetro, area, radio;

  // Entrada de datos.
  printf("Introduce longitud del radio: ");
  scanf("%d", &radio);

  // Cálculos.
  perimetro = 2 * PI * radio;	// aunque el resultado es decimal, al asignarlo a un int, se redondea solo.
  area = PI * radio * radio;

  // Impresión por pantalla de resultados.
  printf("Perímetro: %d, Área: %d\n", perimetro, area);

  return 0;
}
