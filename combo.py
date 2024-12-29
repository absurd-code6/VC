import turtle as t
import colorsys

t.bgcolor("black")
t.tracer(100)
t.pensize(2)
t.speed(0)

h1, h2 = 0.5, 0.01

for i in range(250):
    c1 = colorsys.hsv_to_rgb(h1, 1, 1)
    h1 += 0.008
    t.fillcolor(c1)
    t.begin_fill()
    t.forward(i)
    t.left(100)
    t.circle(30)
    for j in range(2):
        t.forward(i * j)
        t.right(109)
    t.end_fill()

    c2 = colorsys.hsv_to_rgb(h2, 1, 1)
    h2 += 0.02
    t.color(c2)
    t.forward(100)
    t.left(60)
    t.forward(100)
    t.right(120)
    t.circle(50)
    t.left(240)
    t.forward(100)
    t.left(60)
    t.forward(100)

    t.color(c1)
    t.begin_fill()
    t.forward(100)
    t.right(60)
    t.forward(100)
    t.left(120)
    t.circle(-50)
    t.right(240)
    t.forward(100)
    t.right(60)
    t.forward(100)
    t.end_fill()