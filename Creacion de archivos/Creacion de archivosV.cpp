#include <iostream>
#include <fstream>
#include <random>
using namespace std;
int main() {
    int u = 100;
    std::ofstream file(std::to_string(u) + ".txt");
    for (int i = 0; i < u; ++i) {
        file << std::rand() % 101 << " ";
    }
    file.close();

    u = 500;
    file.open(std::to_string(u) + ".txt");
    for (int i = 0; i < u; ++i) {
        file << std::rand() % 101 << " ";
    }
    file.close();

    u = 1000;
    while (u >= 1000 && u < 10000) {
        file.open(std::to_string(u) + ".txt");
        for (int i = 0; i < u; ++i) {
            file << std::rand() % 101 << " ";
        }
        file.close();
        u += 1000;
    }

    u = 10000;
    while (u >= 10000 && u < 100001) {
        file.open(std::to_string(u) + ".txt");
        for (int i = 0; i < u; ++i) {
            file << std::rand() % 101 << " ";
        }
        file.close();
        u += 10000;
    }

    return 0;
}

