# Secuencias repetitivas

Durante esta semana se trabaja con las secuencias repetitivas (bucles).
Se utilizarán tres tipos: `do-while`, `while`, y `for`.

## Ejercicio 1: Números amigos

Hacer un programa que pida dos números enteros positivos y compruebe si son
números amigos.

Se considera que dos números son amigos si la suma de los divisores del primero
es igual al segundo, y a su vez, la suma de los divisores del segundo es igual 
al primero.

Se debe implementar una entrada de datos robusta, es decir, que compruebe que
los datos introducidos tengan el formato esperado. En este caso concreto se 
debe comprobar que cada número introducido sea un entero positivo. También se 
debe verificar que los dos números introducidos no sean iguales. El programa 
permanecerá pidiendo datos hasta que la entrada cumpla con todos los 
requisitos. Opcionalmente se pueden mostrar mensajes con información acerca de 
por qué los datos introducidos no son correctos.

### Pruebas

| **Entrada** | **Salida** |
| --- | --- |
| Introduce el primer número: 1<br />Introduce el segundo número: 2 | Los números 1 y 2 no son amigos. |
| Introduce el primer número: 220<br />Introduce el segundo número: 284 | Los números 220 y 284 son amigos. |