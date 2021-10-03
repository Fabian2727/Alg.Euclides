# Algebra_Abs-
En el archivo .cpp nombrado EuclidesExt se encontrará el programa referente al algoritmo extendido de Euclides. El mismo consta de 3 funciones:
- modulo: Calcula el valor de un número a en un módulo n.
- euclides: Mediante la implementación del algoritmo de Euclides calcula el gcd de los números x,y.
- euclidesext: Haciendo uso de las dos funciones anteriores busca calcular el valor de las variables x,y para satisfacer la expresion gcd(a,b) = a*x + b*y.
Para usar este programa, se le pedirá ingresar  los números a y b, y se mostrará en pantalla su GCD y posteriormente los valores de X y Y que cumplen la ecuación mostrada anteriormente.

Como ejemplo podemos poner a = 4095 y b = 3110
Este caso nos devolverá un GCD(a,b) = 5 y unos valores de X = -281 y Y = 370
Dichos valores cumpliriían con la ecuación 5 = 4095*(-281) + 3110*(370)
