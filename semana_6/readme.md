# Recursividad

Durante esta semana se trabaja con el concepto de recursividad.

## Ejercicio 1: Binomio de Newton

Hacer un programa que pida dos números enteros `a`, `b`; y un número natural
positivo `m`. Con ello, se debe calcular el binomio de newton (`(a+b)^m`).

La resolución del binomio se hace mediante la siguiente fórmula:

`(a+b)^m = comb(m, 0)*a^m*b^0 + comb(m, 1)*a^(m-1)*b^1 + ··· + comb(m, m-1)*a^1*b^(m-1) + comb(m, m)*a^0*b^m`

Donde la combinatoria m n `comb(m, n)` es `m! / (n! * (m-n)!)`.

El ejercicio se debe resolver utilizando funciones recursivas, tanto para el
cálculo del factorial como para el cálculo del sumatorio del binomio de newton.