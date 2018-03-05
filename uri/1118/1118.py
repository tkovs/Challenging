# -*- coding: utf-8 -*-
flag = 1

while flag == 1:
    flag = 1

    a = float(input())
    while (a < 0.0 or a > 10.0):
        print('nota invalida')
        a = float(input())

    b = float(input())
    while (b < 0 or b > 10):
        print('nota invalida')
        b = float(input())

    media = (a + b) / 2

    print("media = {:.2f}".format(round(media, 2)))

    print('novo calculo (1-sim 2-nao)')
    flag = int(input())

    while flag != 1 and flag !=  2:
        print('novo calculo (1-sim 2-nao)')
        flag = int(input())