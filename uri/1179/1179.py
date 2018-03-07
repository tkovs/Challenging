# -*- coding: utf-8 -*-

def show(lista, tipo):
    i = 0
    for elemento in lista:
        print("{0}[{1}] = {2}".format(tipo, i, elemento))
        i = i + 1

pares = []
impares = []

for _ in range(15):
    entrada = int(input())

    if entrada % 2 == 0:
        pares.append(entrada)
    else:
        impares.append(entrada)

    if len(pares) == 5:
        show(pares, 'par')
        pares = []

    if len(impares) == 5:
        show(impares, 'impar')
        impares = []

show(impares, 'impar')
show(pares, 'par')