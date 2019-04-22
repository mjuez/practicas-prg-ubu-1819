/*
 * binomio.c
 * ¯¯¯¯¯¯¯¯¯
 * Cálculo del binomio de newton (a+b)^m.
 * El programa pide por teclado dos enteros (a, b) y un número natural 
 * positivo. Se debe calcular el binomio de newton mediante el uso de funciones
 * recursivas.
 * 
 * Nota: en Linux se debe utilizar el flag -lm para enlazar la librería de
 * funciones matemáticas.
 *
 * @authors:
 *   Carlos Pardo <cpardo@ubu.es>,
 *   Ángel Arroyo <aarroyop@ubu.es>,
 *   Francisco Javier Rodríguez <fjrdiaz@ubu.es>,
 *   Mario Juez <mariojg@ubu.es>
 * @date: 2019-03-19
 * @version: 1.0
 * @license: GPLv3
 * @organization: LSI@EPS.UBU.ES
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf, scanf)
#include <stdio.h>
// Funciones matemáticas (pow)
#include <math.h>

// Declaración de prototipos
void leeEntero(int *);
void leeEnteroPositivo(unsigned *);
int factorial(int);
long sumatorio(int, int, unsigned, unsigned);
void muestraResultado(int, int, unsigned, long);
long binomial(unsigned, unsigned);

/*
 * Función principal.
 * 
 * Calcula el binomio de newton (a+b)^m.
 */
int main(){
  // Declaración de variables.
  int a, b;
  unsigned m;
  long res;

  // Entrada de datos.
  leeEntero(&a);
  leeEntero(&b);
  leeEnteroPositivo(&m);

  // Cálculos.
  res = sumatorio(a, b, m, 0);

  // Impresión por pantalla del resultado.
  muestraResultado(a, b, m, res);

  return 0;
}

/*
 * Procedimiento leeEntero.
 * 
 * Lee un número entero introducido por teclado y lo almacena en el parámetro
 * pasado por referencia.
 * 
 * @param num - referencia al número entero.
 */
void leeEntero(int *num){
  printf("Introduce un número entero: ");
  scanf("%d", num);
}

/*
 * Procedimiento leeEnteroPositivo.
 * 
 * Lee un número natural positivo introducido por teclado y lo almacena en el 
 * parámetro pasado por referencia.
 * 
 * @param num - referencia al número natural positivo.
 */
void leeEnteroPositivo(unsigned *num){
  printf("Introduce un número natural positivo: ");
  scanf("%u", num);
}

/*
 * Función factorial.
 * 
 * Calcula el factorial de un número entero.
 * 
 * @param n - número a calcular su factorial.
 * @return factorial de n.
 */
int factorial(int n){
  if(n == 0){
    return 1;
  }
  return n * factorial(n-1);
}

/*
 * Función sumatorio.
 * 
 * Calcula el sumatorio del binomio de newton.
 * 
 * @param a - primer componente del binomio.
 * @param b - segundo componente del binomio.
 * @param m - potencia emésima del binomio.
 * @param n - elemento necesario para la resolución del binomio. 
 *            Inicialmente es 0.
 * @return solución al binomio de newton.
 */
long sumatorio(int a, int b, unsigned m, unsigned n){
  long sumando = binomial(m, n) * pow(a, m - n) * pow(b, n);
  if(m == n){
    return sumando;  
  }
  return sumando + sumatorio(a, b, m, n + 1);
}

/*
 * Procedimiento muestraResultado.
 * 
 * Muestra el resultado de calcular el binomio de newton.
 * 
 * @param a - primer componente del binomio.
 * @param b - segundo componente del binomio.
 * @param m - potencia emésima del binomio.
 * @param res - solución del binomio.
 */
void muestraResultado(int a, int b, unsigned m, long res){
  printf("(%d + %d)^%u = %ld\n", a, b, m, res);
}

/*
 * Función binomial.
 * 
 * Calcula la combinatoria m n.
 * 
 * @param m - primera componente de la combinatoria.
 * @param n - segunda componente de la combinatoria.
 * @return solución de la combinatoria.
 */
long binomial(unsigned m, unsigned n){
  return factorial(m)/(factorial(n)*factorial(m-n));
}
