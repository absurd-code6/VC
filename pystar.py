import turtle
import colorsys
k=turtle.Turtle()
j=turtle.Screen().bgcolor("black")
k.speed(1000)
m=70
n=0
for i in range(360):
    c=colorsys.hsv_to_rgb(n,1,0.8)
    n+=1/m
    k.color(c)
    k.left(10)
    for i in range(5):
         k.fd(200)
         k.left(144)
        
   
