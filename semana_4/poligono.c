/*
 * poligono.c
 * ¯¯¯¯¯¯¯¯¯¯
 * Pide el número de lados y el valor del radio de un polígono regular y 
 * muestra su perímetro y su área.
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
 * @version: 1.0
 * @organization: LSI@EPS.UBU.ES
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf, scanf)
#include <stdio.h>
// Funciones matemáticas (pow)
#include <math.h>
// Constante PI
#define PI 3.14159

// Declaración de prototipos
void    leeNumLados(int *);
void    leeRadio(float *);
float   calculaLado(float, int);
float   calculaApotema(float);
float   calculaPerimetro(int, float);
float   calculaArea(float, float);

/*
 * Función principal.
 * 
 * Calcula y muestra el perímetro y área de un rombo dadas sus diagonales.
 */
int main() {
  // Declaración de variables
  int     numLados;
  float   radio, perimetro, area, lado, apotema;

  // Entrada de datos
  leeNumLados(&numLados);
  leeRadio(&radio);

  // Cálculo de resultados
  lado = calculaLado(radio, numLados);
  apotema = calculaApotema(lado);
  perimetro = calculaPerimetro(numLados, lado);
  area = calculaArea(perimetro, apotema);

  // Salida de resultados
  printf("Perímetro: %.2f, Área: %.2f\n", perimetro, area);

  return 0;
}

/*
 * Procedimiento leeNumLados.
 * 
 * Lee el valor del número de lados introducido por teclado y lo almacena en el
 * parámetro numLados pasado por referencia.
 * 
 * @param numLados - referencia al número de lados.
 */
void leeNumLados(int *numLados) {
  printf("Introduce un número de lados: ");
  scanf("%d", numLados);
}

/*
 * Procedimiento leeRadio.
 * 
 * Lee el valor del radio introducido por teclado y lo almacena en el parámetro
 * radio pasado por referencia.
 * 
 * @param radio - referencia al radio del círculo.
 */
void leeRadio(float *radio) {
  printf("Introduce un radio: ");
  scanf("%f", radio);
}

/*
 * Función calculaLado.
 * 
 * Calcula la longitud de los lados de un polígono regular dado el radio y el
 * número de lados.
 * 
 * @param radio - radio del polígono.
 * @param numLados - número de lados del polígono.
 * @return longitud del lado calculado.
 */
float calculaLado(float radio, int numLados) {
  float   lado = sqrt(2 * pow(radio, 2.0) * (1 - cos(2 * PI / numLados)));
  return lado;
}

/*
 * Función calculaApotema.
 * 
 * Calcula el apotema de un polígono regular dada la longitud de sus lados.
 * 
 * @param lado - longitud del lado del polígono.
 * @return apotema calculado.
 */
float calculaApotema(float lado) {
  float   apotema = sqrt(pow(lado, 2.0) + pow(0.5 * lado, 2.0));
  return apotema;
}

/*
 * Función calculaPerimetro.
 * 
 * Calcula el perímetro de un polígono regular dado el número de lados y la
 * longitud de cada lado.
 * 
 * @param numLados - número de lados del polígono.
 * @param lado - longitud del lado del polígono.
 * @return perímetro calculado.
 */
float calculaPerimetro(int numLados, float lado) {
  float   perimetro = numLados * lado;
  return perimetro;
}

/*
 * Función calculaArea.
 * 
 * Calcula el área de un polígono regular dado el perímetro y el apotema.
 * 
 * @param perimetro - perímetro del polígono.
 * @param apotema - apotema del polígono.
 * @return área calculada.
 */
float calculaArea(float perimetro, float apotema) {
  float   area = 0.5 * perimetro * apotema;
  return area;
}