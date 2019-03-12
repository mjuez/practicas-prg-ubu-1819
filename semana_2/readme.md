# Números naturales y enteros

Durante esta semana se trabaja con las funciones básicas de entrada/salida y
con los números naturales y enteros.

## Ejercicio 1: Fracciones

Hacer un programa que pida 4 valores enteros y los interprete como el numerador
y el denominador de 4 fracciones. Que muestre el resultado de la suma, la 
diferencia, el producto y la división de las dos fracciones en formato fracción.

### Pruebas

| **Entrada** | **Salida** |
| --- | --- |
| 1 2 1 3 | Suma: 1/2+1/3=5/6<br />Resta: 1/2-1/3=1/6<br/>Multiplicación: 1/2*1/3=1/6<br/>División: 1/2:1/3=3/2 |
| -1 6 1 2 | Suma: -1/6+1/2=4/12<br />Resta: -1/6-1/2=-8/12<br />Multiplicación: -1/6*1/2=-1/12<br />División: -1/6:1/2=-2/6 |
| 1 2 -1 6 | Suma: 1/2-1/6=4/12<br />Resta: 1/2+1/6=8/12<br />Multiplicación: 1/2*-1/6=-1/12<br />División: 1/2:-1/6=-6/2
| 3 4 -2 3 | Suma: 3/4-2/3=1/12<br />Resta: 3/4+2/3=17/12<br />Multiplicación: 3/4*-2/3=-6/12<br />División: 3/4:-2/3=-18/16 |

## Ejercicio 2: Enteros

Hacer un programa que pida 3 números (en una única línea): entero sin signo, 
entero con signo, y entero largo. Los dos primeros enteros se deben declarar
como enteros cortos (`short`). Tras ello, mostrarlos por pantalla.

### Pruebas

| **Entrada** | **Salida** |
| --- | --- |
| 1 2 3 | Natural: 1<br />Entero: 2<br/>Entero largo: 3 |
| -1 2 3 | Natural: 65535<br />Entero: 2<br/>Entero largo: 3 |
| 1 32768 3 | Natural: 1<br />Entero: -32768<br/>Entero largo: 3 |
| 1 2 32768 | Natural: 1<br />Entero: 2<br/>Entero largo: 32768 |