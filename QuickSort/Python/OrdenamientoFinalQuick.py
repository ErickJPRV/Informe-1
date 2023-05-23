import time
from QuickSort import quicksort
tiempos=[]
###########################################################
tiempo_Inicio_1=time.time()
u=100
with open(str(u)+".txt", "r") as tf:
    lines = tf.read().split(', ')
    for i in range (0,len(lines)):
        lines[i]=int(lines[i])
a=quicksort(lines,0,len(lines)-1)
time_Final_1=time.time()
tiempos.append(time_Final_1-tiempo_Inicio_1)
file=open(str(u)+"(resuelto).txt","w")
lines=str(a)
file.write(lines)
############################################################
tiempo_Inicio_1=time.time()
u=500
with open(str(u)+".txt", "r") as tf:
    lines = tf.read().split(', ')
    for i in range (0,len(lines)):
        lines[i]=int(lines[i])
a=quicksort(lines,0,len(lines)-1)
time_Final_1=time.time()
tiempos.append(time_Final_1-tiempo_Inicio_1)
file=open(str(u)+"(resuelto).txt","w")
lines=str(a)
file.write(lines)
##############################################################
u=1000
while u>=1000 and u<10000:
    tiempo_Inicio_1=time.time()
    with open(str(u)+".txt", "r") as tf:
        lines = tf.read().split(', ')
        for i in range (0,len(lines)):
            lines[i]=int(lines[i])
    a=quicksort(lines,0,len(lines)-1)
    time_Final_1=time.time()
    tiempos.append(time_Final_1-tiempo_Inicio_1)
    file=open(str(u)+"(resuelto).txt","w")
    lines=str(a)
    file.write(lines)
    u=u+1000
#############################################################
u=10000
while u>=10000 and u<100001:
    tiempo_Inicio_1=time.time()
    with open(str(u)+".txt", "r") as tf:
        lines = tf.read().split(', ')
        for i in range (0,len(lines)):
            lines[i]=int(lines[i])
    a=quicksort(lines,0,len(lines)-1)
    time_Final_1=time.time()
    tiempos.append(time_Final_1-tiempo_Inicio_1)
    file=open(str(u)+"(resuelto).txt","w")
    lines=str(a)
    file.write(lines)
    u=u+10000
################################################################
file=open("tiempos.txt","w")
tiempos=str(tiempos)
file.write(tiempos)