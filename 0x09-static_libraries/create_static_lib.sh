#!/bin/bash

gcc -c *.c
ar -rc libmy.a *.o
ranlib libmy.a

ar -rc liball.a *.o
ranlib liball.a


