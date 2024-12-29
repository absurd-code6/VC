import math
import turtle
from turtle import *
t=turtle.Turtle()
def hearta(k):
    return 15*math.sin(k)**3
def heartb(k):
    return 12*math.cos(k)-5*\
    math.cos(2*k) -2*\
    math.cos(3*k) -\
    math.cos(4*k)
speed(1000)
bgcolor("black")
for i in range(360):
    goto(hearta(i)*20, heartb(i)*20)
    col=["red","yellow","green","blue","purple","orange"]
    t.pencolor(col[i%6])
    t.width(i/720+3)
    t.forward(i)
    t.left(59)
  #  t.forward(i)