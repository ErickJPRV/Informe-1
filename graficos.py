import matplotlib.pyplot as plt

with open("C:\\ADA\\todo\\tiempos_bubble_sort.txt", 'r') as f:
    tc = [float(numero) for numero in f.read().split()]
with open("C:\\ADA\\todo\\tiempos_bubblepy.txt", 'r') as f:
    tpy = [float(numero) for numero in f.read().split()]


fig, ax = plt.subplots(figsize=(8, 6))


ax.plot(range(len(tpy)),tpy, label='Python')
ax.plot(range(len(tc)),tc, label='C++')


ax.set_xlabel('Datos a ordenar')
ax.set_ylabel('Tiempo de procesamiento (s)')
ax.set_title('Comparación de tiempos de procesamiento de bubble sort')
ax.legend()
valores_y = [100, 200, 300, 400, 500, 600, 700, 800, 900]

plt.yticks(valores_y)
ax.set_xticks(range(len(tpy)))
ax.set_xticklabels([str(x) for x in [100,500,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000]])
ax.tick_params(axis='x', rotation=45)


plt.show()
plt.tight_layout()

fig.savefig('graficobubble.pdf', bbox_inches='tight', pad_inches=0.3, dpi=900)

