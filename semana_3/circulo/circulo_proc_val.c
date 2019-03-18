/*
 * circulo_proc_val.c
 * ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯
 * Pide el valor del radio de una circunferencia y nos muestra su perímetro y 
 * el área del círculo que encierra (datos enteros, redondeo de resultado).
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
// Constante PI
#define PI 3.14159

// Declaración de prototipos
void    leeRadio();
void    calculaPerimetro(int);
void    calculaArea(int);
void    imprimePerimetro(int);
void    imprimeArea(int);

/*
 * Función principal.
 * 
 * Calcula y muestra el perímetro y área de un círculo dado su radio.
 */
int main() {
  // Entrada de datos, cálculo, e impresión de resultados.
  leeRadio();

  return 0;
}

/*
 * Procedimiento leeRadio.
 * 
 * Lee el valor del radio introducido por teclado.
 * A continuación llama a los procedimientos para calcular perímetro y área con
 * el valor leido.
 */
void leeRadio() {
  // Declaración de variables (solo existen dentro del procedimiento).
  int     radio;

  // Entrada de datos.
  printf("Introduce longitud del radio: ");
  scanf("%d", &radio);

  // Cálculo e impresión de los resultados.
  calculaPerimetro(radio);
  calculaArea(radio);
}

/*
 * Procedimiento calculaPerimetro.
 * 
 * Calcula el perímetro de un círculo dado su radio.
 * A continuación llama al procedimiento de imprimir el perímetro resultante.
 * 
 * @param radio - radio del círculo.
 */
void calculaPerimetro(int radio) {
  // Declaración de variables (solo existen dentro del procedimiento).
  // Se declara y se asigna el valor calculado en la misma línea.
  int     perimetro = 2 * PI * radio;

  // Impresión por pantalla de resultados.
  imprimePerimetro(perimetro);
}

/*
 * Procedimiento calculaArea.
 * 
 * Calcula el área de un círculo dado su radio.
 * A continuación llama al procedimiento de imprimir el área resultante.
 * 
 * @param radio - radio del círculo.
 */
void calculaArea(int radio) {
  // Declaración de variables (solo existen dentro del procedimiento).
  // Se declara y se asigna el valor calculado en la misma línea.
  int     area = PI * radio * radio;

  // Impresión por pantalla de resultados.
  imprimeArea(area);
}

/*
 * Procedimiento imprimePerimetro.
 * 
 * Muestra por pantalla el valor del perímetro calculado previamente.
 * 
 * @param perimetro - perímetro del círculo.
 */
void imprimePerimetro(int perimetro) {
  // Impresión por pantalla de resultados.
  printf("Perímetro: %d, ", perimetro);
}

/*
 * Procedimiento imprimeArea.
 * 
 * Muestra por pantalla el valor del área calculado previamente.
 * 
 * @param area - área del círculo.
 */
void imprimeArea(int area) {
  // Impresión por pantalla de resultados.
  printf("Área: %d\n", area);
}
