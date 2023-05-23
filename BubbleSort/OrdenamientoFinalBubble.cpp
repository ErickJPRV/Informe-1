#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include "bubblesort.cpp" // Asegúrate de incluir el archivo de encabezado para Bubblesort si existe

int main() {
    std::vector<double> tiempos;
    auto tiempo_Inicio_1 = std::chrono::high_resolution_clock::now();
    int u = 100;
    std::ifstream tf(std::to_string(u) + ".txt");
    std::vector<int> lines;
    std::string line;
    while (std::getline(tf, line, ',')) {
        lines.push_back(std::stoi(line));
    }
    tf.close();
    vector<int> a= Bubblesort(lines);
    auto time_Final_1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> tiempo_1 = time_Final_1 - tiempo_Inicio_1;
    tiempos.push_back(tiempo_1.count());
    std::ofstream file(std::to_string(u) + "(resuelto).txt");
    for (int i = 0; i < a.size(); ++i) {
        file << a[i] << " ";
    }
    file.close();
    tiempo_Inicio_1 = std::chrono::high_resolution_clock::now();
    u = 500;
    tf.open(std::to_string(u) + ".txt");
    lines.clear();
    while (std::getline(tf, line, ',')) {
        lines.push_back(std::stoi(line));
    }
    tf.close();
    a = Bubblesort(lines);
    time_Final_1 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> tiempo_2 = time_Final_1 - tiempo_Inicio_1;
    tiempos.push_back(tiempo_2.count());
    file.open(std::to_string(u) + "(resuelto).txt");
    for (int i = 0; i < a.size(); ++i) {
        file << a[i] << " ";
    }
    file.close();

    // Bloque 3
    u = 1000;
    while (u >= 1000 && u < 10000) {
        tiempo_Inicio_1 = std::chrono::high_resolution_clock::now();
        tf.open(std::to_string(u) + ".txt");
        lines.clear();
        while (std::getline(tf, line, ',')) {
            lines.push_back(std::stoi(line));
        }
        tf.close();
        a = Bubblesort(lines);
        time_Final_1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> tiempo = time_Final_1 - tiempo_Inicio_1;
        tiempos.push_back(tiempo.count());
        file.open(std::to_string(u) + "(resuelto).txt");
        for (int i = 0; i < a.size(); ++i) {
            file << a[i] << " ";
        }
        file.close();
        u += 1000;
    }

    // Bloque 4
    u = 10000;
    while (u >= 10000 && u < 100001) {
        tiempo_Inicio_1 = std::chrono::high_resolution_clock::now();
        tf.open(std::to_string(u) + ".txt");
        lines.clear();
        while (std::getline(tf, line, ',')) {
            lines.push_back(std::stoi(line));
        }
        tf.close();
        a = Bubblesort(lines);
        time_Final_1 = std::chrono::high_resolution_clock::now();
        std::chrono::duration<double> tiempo = time_Final_1 - tiempo_Inicio_1;
        tiempos.push_back(tiempo.count());
        file.open(std::to_string(u) + "(resuelto).txt");
        for (int i = 0; i < a.size(); ++i) {
            file << a[i] << " ";
        }
        file.close();
        u += 10000;
    }

    std::ofstream tiemposFile("tiempos.txt");
    for (int i = 0; i < tiempos.size(); ++i) {
        tiemposFile << tiempos[i] << " ";
    }
    tiemposFile.close();

    return 0;
}

