#include <iostream>
#include <vector>

using namespace std;

void ify(vector<int>& arr, int n, int i) {
    int largo = i;  
    int izquierda = 2 * i + 1;
    int derecha = 2 * i + 2;

    if (izquierda < n && arr[izquierda] > arr[largo]) {
        largo = izquierda;
    }

    if (derecha < n && arr[derecha] > arr[largo]) {
        largo = derecha;
    }

    if (largo != i) {
        swap(arr[i], arr[largo]);
        ify(arr, n, largo);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        ify(arr, n, i);
}
    for (int i = n - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        ify(arr, i, 0);
    }
}


