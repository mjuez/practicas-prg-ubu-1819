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
  // Declaración de variables.
  int num1, num2;
  _Bool amigos;
  
  // Entrada de datos.
  leeNumeros(&num1, &num2);
  
  // Cálculos.
  amigos = sonAmigos(num1, num2);
  
  // Impresión de resultados.
  escribeResultado(amigos, num1, num2);

  return 0;
}

/*
 * Procedimiento cleanStdin.
 * 
 * Limpia el buffer de entrada tras una lectura incorrecta.
 */
void cleanStdin(){
  while(getchar() != '\n');
}

/*
 * Función entradaCorrecta.
 * 
 * Comprueba si la entrada por teclado de un número entero positivo es
 * correcta o no. Se imprimen mensajes informando si la entrada no es correcta.
 * 
 * @param leidos - Número de datos leídos por teclado. Se espera que sean dos,
 *                 un número, y el carácter de salto de línea ('\n').
 * @param num - Número leído por teclado.
 * @param enter - Carácter de salto de línea leído.
 * @return si la entrada es correcta.
 */
_Bool entradaCorrecta(int leidos, int num, char enter){
  // Declaración de variables. Inicialmente la entrada se fija a incorrecta.
  _Bool correcto = false;

  // Comprobaciones de la entrada y mensajes de error
  if(leidos != 2 || enter !='\n'){
    printf("[!] Se espera un número entero.\n");
    cleanStdin();
  }else if(num < 0){
    printf("[!] El número introducido no puede ser negativo.\n");
  }else{
    correcto = true;
  }

  return correcto;
}

/*
 * Procedimiento leeNumeros.
 * 
 * Lee dos números y los almacena en los parámetros num1 y num2 pasados por 
 * referencia. Si los números introducidos por teclado no cumplen con los 
 * requisitos (número entero positivo), se pedirá de forma repetitiva la 
 * introducción de los datos hasta que se ajusten a los requisitos.
 * 
 * @param num1 - referencia al número 1.
 * @param num2 - referencia al número 2.
 */
void leeNumeros(int *num1, int *num2){
  // Declaración de variables.
  int leidos = 0;
  char enter;

  // Lectura del primer número (num1).
  do{
    printf("Introduce el primer número: ");
    leidos = scanf("%d%c", num1, &enter);
  }while(!entradaCorrecta(leidos, *num1, enter));
  
  // Lectura del segundo número (num2).
  // También se comprueba que num2 sea distinto a num1.
  do{
    do{
      printf("Introduce el segundo número: ");
      leidos = scanf("%d%c", num2, &enter);
    }while(!entradaCorrecta(leidos, *num2, enter));
    
    if(*num1 == *num2){
      printf("[!] Los números introducidos no pueden ser iguales.\n");
    }
  }while(*num1 == *num2);
  
}

/*
 * Función sumaDivisores.
 * 
 * Calcula el sumatorio de los divisores de un número.
 * 
 * @param num - Número del que calcular el sumatorio.
 * @return sumatorio de divisores del número.
 */
int sumaDivisores(int num){
  // Declaración e inicialzación de variables.
  int divisorCandidato = 1;
  int suma = 0;

  // Mientras haya candidatos a divisores...
  while(divisorCandidato <= num/2){

    // ...Comprobamos si es divisor y actualizamos el sumatorio.
    if(num % divisorCandidato == 0){
      suma += divisorCandidato;
    }
    divisorCandidato++; // Siguiente candidato a divisor.
  }

  return suma;
}

/*
 * Función sonAmigos.
 * 
 * Comprueba si dos números son amigos. Serán amigos si el primer número es 
 * igual a la suma de los divisores del segundo número, y si el segundo número
 * es igual a la suma de los divisores del primer número.
 * 
 * @param num1 - Primer número.
 * @param num2 - Segundo número.
 * @return si son amigos.
 */
_Bool sonAmigos(int num1, int num2){
  // Declaración e inicialización de variables.
  _Bool amigos = false;
  int sumaNum1 = sumaDivisores(num1);
  int sumaNum2 = sumaDivisores(num2);
  
  // Comprobación de "amistad".
  if(num1 == sumaNum2 && num2 == sumaNum1){
    amigos = true;
  }

  return amigos;
}

/*
 * Procedimiento escribeResultado.
 * 
 * Imprime por pantalla si los dos números introducidos son amigos.
 * 
 * @param amigos - Si los números son amigos.
 * @param num1 - Primer número.
 * @param num2 - Segundo número.
 */
void escribeResultado(_Bool amigos, int num1, int num2){
  printf("Los números %d y %d ", num1, num2);

  if(amigos == true){
    printf("son amigos.\n");
  }else{
    printf("no son amigos.\n");
  }
}