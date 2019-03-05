/*
 * ecuacion.c
 * ¯¯¯¯¯¯¯¯¯¯
 * Cálculo de las soluciones de una ecuación de segundo grado. Se tienen en 
 * cuenta los siguientes tipos de ecuaciones:
 * - Ecuación degradada
 * - Ecuación de primer grado
 * - Ecuación con raíz real
 * - Ecuación con raíces reales
 * - Ecuación con raíces reales conjugadas
 * 
 * Nota: utilizar el flag -lm a la hora de compilar con gcc en linux para 
 *       indicar al compilador que enlace la librería con las implementaciones
 *       de las funciones matemáticas declaradas en math.h (libm).
 *
 * @authors:
 *   Carlos Pardo <cpardo@ubu.es>,
 *   Ángel Arroyo <aarroyop@ubu.es>,
 *   Francisco Javier Rodríguez <fjrdiaz@ubu.es>,
 *   Álvar Arnaiz <alvarag@ubu.es>,
 *   Mario Juez <mariojg@ubu.es>
 * @date: 2019-03-05
 * @version: 3.0
 * @license: GPLv3
 * @organization: LSI@EPS.UBU.ES
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf, scanf)
#include <stdio.h>
// Funciones matemáticas (sqrt)
#include <math.h>

// Declaración de prototipos
void    leeCoeficientes(float *, float *, float *);
float   calculaRadicando(float, float, float);
int     determinaTipo(float, float, float);
void    calculaSoluciones(int, float, float, float);
void    muestraResultados(int, float, float);

/* 
 * Función principal.
 * 
 * Lee la entrada por teclado de los tres coeficientes de una ecuación de
 * segundo grado, calcula la solución (o soluciones), y lo muestra por 
 * pantalla.
 */
int main() {
  // TO-DO
  return 0;
}
