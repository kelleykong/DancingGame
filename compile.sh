#!/bin/sh
cc -mi86 -Was-ncc -.o -com -s start.s game.c gamelib.s graphics.s irq.s keyboard.c main.c timer.c -o dance
