/*
 * circulo_proc_ref.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide el valor del radio de una circunferencia y nos muestra su perímetro y 
 * el área del círculo que encierra (datos enteros, redondeo de resultado).
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
// Constante PI
#define PI 3.14159

// Declaración de prototipos
void    leeRadio(int *);
void    calculaPerimetro(int *, int *);
void    calculaArea(int *, int *);
void    imprimeResultados(int *, int *);

/*
 * Función principal.
 * 
 * Calcula y muestra el perímetro y área de un círculo dado su radio.
 */
int main() {
  // Declaración de variables.
  int     radio, perimetro, area;

  // Entrada de datos, cálculo, e impresión de resultados.
  leeRadio(&radio);

  // Cálculos.
  calculaPerimetro(&radio, &perimetro);
  calculaArea(&radio, &area);

  // Impresión por pantalla de resultados.
  imprimeResultados(&perimetro, &area);

  return 0;
}

/*
 * Procedimiento leeRadio.
 * 
 * Lee el valor del radio introducido por teclado y lo almacena en el parámetro
 * radio pasado por referencia.
 * 
 * @param radio - referencia al radio del círculo.
 */
void leeRadio(int *radio) {
  // Entrada de datos.
  printf("Introduce longitud del radio: ");
  scanf("%d", radio);
}

/*
 * Procedimiento calculaPerimetro.
 * 
 * Calcula el perímetro de un círculo dado su radio y lo almacena en la
 * dirección de memoria del parámetro perimetro pasado por referencia.
 * 
 * @param radio - referencia al radio del círculo.
 * @param perimetro - referencia al perímetro del círculo.
 */
void calculaPerimetro(int *radio, int *perimetro) {
  *perimetro = 2 * PI * *radio;
}

/*
 * Procedimiento calculaArea.
 * 
 * Calcula el área de un círculo dado su radio y lo almacena en la
 * dirección de memoria del parámetro area pasado por referencia.
 * 
 * @param radio - referencia al radio del círculo.
 * @param area - referencia al área del círculo.
 */
void calculaArea(int *radio, int *area) {
  *area = PI * *radio * *radio;
}

/*
 * Procedimiento imprimePerimetro.
 * 
 * Muestra por pantalla el valor del perímetro calculado previamente.
 * 
 * @param perimetro - perímetro del círculo.
 */
void imprimeResultados(int *perimetro, int *area) {
  // Impresión por pantalla de resultados.
  printf("Perímetro: %d, Área: %d\n", *perimetro, *area);
}
