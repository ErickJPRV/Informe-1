
def mergeSort(lista):
    if len(lista) > 1:
        r = len(lista)//2
        L = lista[:r]
        M = lista[r:]
        mergeSort(L)
        mergeSort(M)
        i = j = k = 0
        while i < len(L) and j < len(M):
            if L[i] < M[j]:
                lista[k] = L[i]
                i += 1
            else:
                lista[k] = M[j]
                j += 1
            k += 1
        while i < len(L):
            lista[k] = L[i]
            i += 1
            k += 1

        while j < len(M):
            lista[k] = M[j]
            j += 1
            k += 1
    return lista

