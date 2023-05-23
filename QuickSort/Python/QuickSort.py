def particion(arreglo, izquierda, derecha):
    pivote = arreglo[izquierda]
    while True:
        while arreglo[izquierda] < pivote:
            izquierda += 1
        while arreglo[derecha] > pivote:
            derecha -= 1
        if izquierda >= derecha:
            return derecha
        else:
            arreglo[izquierda], arreglo[derecha] = arreglo[derecha], arreglo[izquierda]
            izquierda += 1
            derecha -= 1
def quicksort(arreglo,izquierda,derecha):
    if izquierda < derecha:
        indiceParticion = particion(arreglo, izquierda, derecha)
        quicksort(arreglo, izquierda, indiceParticion)
        quicksort(arreglo, indiceParticion + 1, derecha)
    return arreglo



