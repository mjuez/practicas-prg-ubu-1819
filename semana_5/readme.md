# Estructuras de control alternativas

Durante esta semana se trabaja con las estructuras de control alternativas:

- Alternativas simples (`if`)
- Alternativas completas (`if-else`)
- Alternativas anidadas
- Alternativas múltiples (`switch`)

## Ejercicio 1: Ecuaciones de segundo grado

Hacer un programa que pida 3 coeficientes (a, b, c) de una ecuación de segundo grado `ax² + bx + c = 0`.

- Si `a = 0` y `b = 0`, tendremos una ecuación degradada.
- Si `a = 0` y `b != 0`, tendremos una ecuación de primer grado (`x = -c/b`).
- Si `a != 0`, tendremos una raíz real (`x = (-b +- sqrt(d))/2a`).
- Si `d = 0` tendremos una raíz real doble (`-b/2a`).
- Si `d > 0` tebdremos dos raíces reales diferentes:
  - `x = (-b + sqrt(d))/2a`.
  - `x = (-b - sqrt(d))/2a`.
- Si `d < 0` tendremos dos raíces complejas conjugadas:
  - `x = -b/2a + i(sqrt(-d)/2a)`.
  - `x = -b/2a - i(sqrt(-d)/2a)`.

Donde el radicando es: `d = b²-4ac`.

## Ejercicio 2: Días de un mes

Hacer un programa que pida un mes (formato: `mm`) y un año (formato: `yyyy`) y muestre por pantalla cuántos días tiene. Se debe tener en cuenta si el año es bisiesto para mostrar correctamente el número de días del mes febrero.

- Un año es bisiesto cuando es divisible entre 4 y (no es divisible entre 100 o es divisible entre 400).
- Se debe utilizar la sentencia condicional `switch`.