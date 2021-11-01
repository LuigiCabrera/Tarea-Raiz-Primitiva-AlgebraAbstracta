# Tarea-Raiz-Primitiva-AlgebraAbstracta
Programas que son capaces de obtener la raíz primitiva mas pequeña de un numero primo

El proyecto contiene 2 archivos con el mismo programa implementado pero en diferentes lenguajes.
En python para hallar la raiz primitiva de 100049 se demora mas de 2 minutos.
Por ello decidi implementarlo en C++ y usando el algoritmo de exponenciacion modular que devuelve x^y % p sin tener que exponenciar x^y
Con este algoritmo tambien evito overflows (Un resultado mayor a 64 bits) cuando el exponente es muy grande.
El nuevo programa en C++ para hallar la raiz primitiva de 100049 se demora tan solo 1 segundo.

Luigi Cabrera Huanqui
