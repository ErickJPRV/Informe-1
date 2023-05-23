import random
import os
u=100
j=[random.randint(0,100) for x in range (u)]
j=str(j)
file=open(str(u)+".txt","w")
file.write(j[1:-1])
u=500
j=[random.randint(0,100) for x in range (u)]
j=str(j)
file=open(str(u)+".txt","w")
file.write(j[1:-1])
u=1000
while u>=1000 and u<10000:
    j=[random.randint(0,100)for x in range(u)]
    j=str(j)
    file=open(str(u)+".txt","w")
    file.write(j[1:-1])
    u=u+1000
u=10000
while u>=10000 and u<100001:
    j=[random.randint(0,100) for x in range(u)]
    j=str(j)
    file=open(str(u)+".txt","w")
    file.write(j[1:-1])
    u=u+10000
