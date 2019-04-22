/*
 * rombo.c
 * ¯¯¯¯¯¯¯
 * Pide el valor de las diagonales de un rombo y nos muestra su perímetro y su 
 * área.
 * Se deben utilizar tipos de datos en coma flotante.
 * 
 * Nota: utilizar el flag -lm a la hora de compilar con gcc en linux para 
 *       indicar al compilador que enlace la librería con las implementaciones
 *       de las funciones matemáticas declaradas en math.h (libm).
 *
 * @authors:
 *   Carlos Pardo <cpardo@ubu.es>,
 *   Ángel Arroyo <aarroyop@ubu.es>,
 *   Francisco Javier Rodríguez <fjrdiaz@ubu.es>,
 *   Mario Juez <mariojg@ubu.es>
 * @date: 2019-02-26
 * @version: 2.0
 * @organization: LSI@EPS.UBU.ES
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf, scanf)
#include <stdio.h>
// Funciones matemáticas (pow)
#include <math.h>

// Declaración de prototipos
void    leeDiagonal(float *);
float   calculaPerimetro(float, float);
float   calculaArea(float, float);

/*
 * Función principal.
 * 
 * Calcula y muestra el perímetro y área de un rombo dadas sus diagonales.
 */
int main() {
  // Declaración de variables.
  float   diag1, diag2, perimetro, area;

  // Entrada de datos.
  leeDiagonal(&diag1);
  leeDiagonal(&diag2);

  // Cálculo de resultados.
  perimetro = calculaPerimetro(diag1, diag2);
  area = calculaArea(diag1, diag2);

  // Salida de resultados.
  printf("Perímetro: %.2f, Área: %.2f\n", perimetro, area);

  return 0;
}

/*
 * Procedimiento leeDiagonal.
 * 
 * Lee el valor introducido por teclado de una diagonal del rombo y lo almacena
 * en el parámetro diagonal pasado por referencia.
 * 
 * @param diagonal - referencia a la diagonal.
 */
void leeDiagonal(float *diagonal) {
  // Entrada de datos.
  printf("Introduce diagonal: ");
  scanf("%f", diagonal);
}

/*
 * Función calculaPerimetro.
 * 
 * Calcula el perímetro de un rombo dadas sus diagonales.
 * 
 * @param diag1 - diagonal 1 (D) del rombo.
 * @param diag2 - diagonal 2 (d) del rombo.
 * @return perímetro calculado.
 */
float calculaPerimetro(float diag1, float diag2) {
  float   perimetro = 2 * sqrt(pow(diag1, 2.0) + pow(diag2, 2.0));
  return perimetro;
}

/*
 * Función calculaArea.
 * 
 * Calcula el área de un rombo dadas sus diagonales.
 * 
 * @param diag1 - diagonal 1 (D) del rombo.
 * @param diag2 - diagonal 2 (d) del rombo.
 * @return área calculada.
 */
float calculaArea(float diag1, float diag2) {
  float   area = 0.5 * diag1 * diag2;
  return area;
}
