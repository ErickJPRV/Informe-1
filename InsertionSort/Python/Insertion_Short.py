
def ordenamiento_insertion_short(lista):
    for j in range(2,len(lista)):
        key=lista[j]
        i=j-1
        while(i>=0 and lista [i]>key):
            lista[i+1]=lista[i]
            i=i-1
        lista[i+1]=key
    return lista

