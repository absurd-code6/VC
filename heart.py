import colorsys
import math
import turtle
from turtle import *
n=0
m=70
t=turtle.Turtle()
def hearta(k):
    return 15*math.sin(k)**3
def heartb(k):
    return 12*math.cos(k)-5*\
    math.cos(2*k) -2*\
    math.cos(3*k) -\
    math.cos(4*k)
speed(100000)
bgcolor("black")
for i in range(360):
    goto(hearta(i)*20, heartb(i)*20)

    for j in range(5):
     c=colorsys.hsv_to_rgb(n,1,0.8)
     n+=1/m
     color(c)
     goto(0,0)
#done()