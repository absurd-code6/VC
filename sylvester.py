from turtle import *
import colorsys 
speed(0)
hideturtle()
bgcolor("black")
tracer(5)
width(2)
h=0.01
for i in range(900):
  color(colorsys.hsv_to_rgb(h,1,1))
  fd(100)
  left(60)
  fd(100)
  right(120)
  circle(50)
  left(240)
  fd(100)
  left(60)
  fd(100)
  h+=0.02
  color(colorsys.hsv_to_rgb(h,1,1))
  fd(100)
  right(60)
  fd(100)
  left(120)
  circle(-50)
  right(240)
  fd(100)
  right(60)
  forward(100)
  left(2)
  h+=0.02
  done()
# remove done() for 
# better experience