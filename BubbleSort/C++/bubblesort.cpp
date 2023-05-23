#include <iostream>
using namespace std;
#include <vector>
#include <stdio.h>
std::vector<int> Bubblesort(std::vector<int>& lista) {
    for (int i = 0; i < lista.size() - 1; ++i) {
        for (int j = 0; j < lista.size() - 1; ++j) {
            if (lista[j] > lista[j + 1]) {
                std::swap(lista[j], lista[j + 1]);
            }
        }
    }
    return lista;
}
