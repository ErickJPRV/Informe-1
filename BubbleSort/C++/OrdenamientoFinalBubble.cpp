#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <string>
#include "Bubblesort.cpp"

std::vector<int> readNumbersFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::vector<int> numbers;
    int num;
    while (file >> num) {
        numbers.push_back(num);
    }
    file.close();
    return numbers;
}

void writeNumbersToFile(const std::vector<int>& numbers, const std::string& filename) {
    std::ofstream file(filename);
    for (int i = 0; i < numbers.size(); ++i) {
        file << numbers[i] << " ";
    }
    file.close();
}

std::string intToString(int number) {
    return std::to_string(number);
}

int main() {
    std::vector<double> times;

    auto tiempo_Inicio_1 = std::chrono::high_resolution_clock::now();
    int u = 100;
    std::vector<int> lines = readNumbersFromFile(intToString(u) + ".txt");
    std::vector<int> a = Bubblesort(lines);
    auto time_Final_1 = std::chrono::high_resolution_clock::now();
    double elapsed_Time_1 = std::chrono::duration<double>(time_Final_1 - tiempo_Inicio_1).count();
    times.push_back(elapsed_Time_1);
    writeNumbersToFile(a, intToString(u) + "(resuelto).txt");

    auto tiempo_Inicio_2 = std::chrono::high_resolution_clock::now();
    u = 500;
    lines = readNumbersFromFile(intToString(u) + ".txt");
    a = Bubblesort(lines);
    auto time_Final_2 = std::chrono::high_resolution_clock::now();
    double elapsed_Time_2 = std::chrono::duration<double>(time_Final_2 - tiempo_Inicio_2).count();
    times.push_back(elapsed_Time_2);
    writeNumbersToFile(a, intToString(u) + "(resuelto).txt");

    u = 1000;
    while (u >= 1000 && u < 10000) {
        auto tiempo_Inicio = std::chrono::high_resolution_clock::now();
        lines = readNumbersFromFile(intToString(u) + ".txt");
        a = Bubblesort(lines);
        auto time_Final = std::chrono::high_resolution_clock::now();
        double elapsed_Time = std::chrono::duration<double>(time_Final - tiempo_Inicio).count();
        times.push_back(elapsed_Time);
        writeNumbersToFile(a, intToString(u) + "(resuelto).txt");
        u += 1000;
    }

    u = 10000;
    while (u >= 10000 && u < 100001) {
        auto tiempo_Inicio = std::chrono::high_resolution_clock::now();
        lines = readNumbersFromFile(intToString(u) + ".txt");
        a = Bubblesort(lines);
        auto time_Final = std::chrono::high_resolution_clock::now();
        double elapsed_Time = std::chrono::duration<double>(time_Final - tiempo_Inicio).count();
        times.push_back(elapsed_Time);
        writeNumbersToFile(a, intToString(u) + "(resuelto).txt");
        u += 10000;
    }

    std::ofstream timesFile("tiempos.txt");
    for (int i = 0; i < times.size(); ++i) {
        timesFile << times[i] << " ";
    }
    timesFile.close();

    return 0;
}

