def cabeza(arr,n,i):
    l = 2 * i + 1
    r = 2 * i + 2
    if l < n and arr[l] > arr[i]:
        l1 = l
    else:
        l1 = i
    if r < n and arr[r] > arr[l1]:
        l1 = r
    if l1 != i:
        arr[i], arr[l1] = arr[l1], arr[i]
        cabeza(arr, n, l1)
def contruccion(arr):
    n = len(arr)
    for i in range(n, -1,-1):
        cabeza(arr, n, i)    
    for i in range(n-1,0,-1):
        arr[0] ,arr[i] = arr[i], arr[0]
        cabeza(arr, i, 0)
    return arr

