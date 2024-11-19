#Name: Melanie Cruz
#Email: melanie,cruz21@myhunter.cuny.edu
#Date: November 13,2023
#This program moves the turtle randomly

import turtle
import random 

bob = turtle.Turtle()
bob.speed(10)

for i in range(100):
    bob.forward(10)
    a = random.randrange(0,360)
    bob.right(a)