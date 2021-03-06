/*
 * circulo_func_ref.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide el valor del radio de una circunferencia y nos muestra su perímetro y 
 * el área del círculo que encierra (datos enteros, redondeo de resultado).
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
// Constante PI
#define PI 3.14159

// Declaración de prototipos
int     leeRadio();
int     calculaPerimetro(int *);
int     calculaArea(int *);
int     imprimeResultados(int *, int *);

/*
 * Función principal.
 * 
 * Calcula y muestra el perímetro y área de un círculo dado su radio.
 */
int main() {
  // Declaración de variables.
  int     perimetro, area, radio;

  // Entrada de datos.
  radio = leeRadio();

  // Cálculos.
  perimetro = calculaPerimetro(&radio);
  area = calculaArea(&radio);

  // Impresión por pantalla de resultados.
  imprimeResultados(&perimetro, &area);

  return 0;
}

/*
 * Función leeRadio.
 * 
 * Lee el valor del radio introducido por teclado.
 * 
 * @return valor del radio leído.
 */
int leeRadio() {
  // Declaración de variables (solo existen dentro de la función).
  int     radio;

  // Entrada de datos.
  printf("Introduce longitud del radio: ");
  scanf("%d", &radio);

  // Retorno del radio leído.
  return radio;
}

/*
 * Función calculaPerimetro.
 * 
 * Calcula el perímetro de un círculo dado su radio.
 * 
 * @param radio - referencia al radio del círculo.
 * @return perímetro del círculo.
 */
int calculaPerimetro(int *radio) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  int     perimetro = 2 * PI * *radio;

  // Retorno del perímetro.
  return perimetro;
}

/*
 * Función calculaArea.
 * 
 * Calcula el área de un círculo dado su radio.
 * 
 * @param radio - referencia al radio del círculo.
 * @return área del círculo.
 */
int calculaArea(int *radio) {
  // Declaración de variables (solo existen dentro de la función).
  // Se declara y se asigna el valor calculado en la misma línea.
  int     area = PI * *radio * *radio;

  // Retorno del área.
  return area;
}

/*
 * Función imprimeResultados.
 * 
 * Muestra por pantalla los valores del perímetro y el área calculados 
 * previamente.
 * 
 * @param perimetro - referencia al perímetro del círculo.
 * @param area - referencia al área del círculo.
 * @return número de caracteres imprimidos.
 */
int imprimeResultados(int *perimetro, int *area) {
  // Declaración de variables (solo existen dentro de la función).
  int     numcar;

  // Impresión por pantalla de resultados.
  numcar = printf("Perímetro: %d, Área: %d\n", *perimetro, *area);

  // Retorno del número de caracteres imprimidos.
  return numcar;
}
