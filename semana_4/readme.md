# Funciones y procedimientos (continuación)

Durante esta semana se trabaja con la modularización del código fuente. Para 
ello se aprende el uso de funciones y procedimientos, así como sus principales
diferencias. Además se pone en práctica el paso por valor y por referencia de
los parámetros en C.

También se trabaja con tipos de datos con coma flotante.

Para realizar estos ejercicios se necesitarán funciones matemáticas como 
`sqrt`. Dichas funciones se encuentran implementadas en la librería matemática
de C `libm`. Para utilizar dicha librería se debe incluír la cabecera `math.h`.

**Nota:** Se debe utilizar el flag -lm a la hora de compilar con `gcc` en linux
para indicar al compilador que enlace la librería con las implementaciones de 
las funciones matemáticas declaradas en math.h (libm).

## Ejercicio 1: Rombo

Hacer un programa que pida el valor de las diagonales de un rombo y nos muestre
su perímetro y su área.

Las fórmulas a aplicar son las siguientes:

- `P = 2 * sqrt(d^2 + D^2)`
- `A = 1/2 * D * d`

Donde `P` es el perímetro, `A` el área, `d` es la diagonal menor, y `D` es la 
diagonal mayor.

Se propone utilizar los siguientes prototipos:

```c
void leeDiagonal(float *);
float calculaPerimetro(float, float);  
float calculaArea(float, float);
```

### Pruebas

| **Entrada** | **Salida** |
| --- | --- |
| Introduce diagonal: 1<br />Introduce diagonal: 2 | Perímetro: 4.47, Área: 1.00 |
| Introduce diagonal: 10<br />Introduce diagonal: 10 | Perímetro: 28.28, Área: 50.00 |

## Ejercicio 2: Polígono

Hacer un programa que pida el número de lados y el valor del radio de un 
polígono regular y muestre su perímetro y su área.

Las fórmulas a aplicar son las siguientes:

- `l = sqrt(2 * r^2 * (1 - cos(2 * PI / n)))`
- `a = sqrt(l^2 + (1/2 * l)^2)`
- `P = l * n`
- `A = 1/2 * P * a`

Donde `P` es el perímetro, `A` el área, `a` es la apotema, `l` es la longitud
del lado, `n` es el número de lados, y `r` es el radio.

Se propone utilizar los siguientes prototipos:

```c
void leeNumLados(int *);
void leeRadio(float *);
float calculaPerimetro(int, float);  
float calculaArea(float, float);
float calculaLado(float, int);
float calculaApotema(float);
```

### Pruebas

| **Entrada** | **Salida** |
| --- | --- |
| Introduce un número de lados: 3<br />Introduce un radio: 1 | Perímetro: 5.20, Área: 5.03 |
| Introduce un número de lados: 8<br />Introduce un radio: 4 | Perímetro: 24.49, Área: 41.92 |