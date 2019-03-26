/*
 * amigos.c
 * ¯¯¯¯¯¯¯¯
 * Comprueba si dos números introducidos por teclado son amigos.
 * Se considera que dos números son amigos si la suma de los divisores del
 * primero es igual al segundo, y a su vez, la suma de los divisores del
 * segundo es igual al primero.
 *
 * @authors:
 *   Carlos Pardo <cpardo@ubu.es>,
 *   Ángel Arroyo <aarroyop@ubu.es>,
 *   Francisco Javier Rodríguez <fjrdiaz@ubu.es>,
 *   Mario Juez <mariojg@ubu.es>
 * @date: 2019-03-25
 * @version: 1.0
 * @license: GPLv3
 * @organization: LSI@EPS.UBU.ES
 */

// Directivas al preprocesador
// Funciones estándar de entrada/salida (printf, scanf)
#include <stdio.h>
// Soporte para tipos booleanos (_Bool)
#include <stdbool.h>

// Declaración de prototipos
void cleanStdin();
void leeNumeros(int *, int *);
void escribeResultado(_Bool, int, int);
_Bool entradaCorrecta(int, int, char);
_Bool sonAmigos(int, int);
int sumaDivisores(int);

/*
 * Función principal.
 * 
 * Lee dos números y comprueba si son amigos.
 */
int main(){
  // TO-DO
  return 0;
}