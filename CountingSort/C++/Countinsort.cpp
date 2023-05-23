#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void countingSort(std::vector<int>& arr) {
    int max_value = *std::max_element(arr.begin(), arr.end());
    std::vector<int> count(max_value + 1, 0);
    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
}
    int index = 0;
    for (int i = 0; i < count.size(); i++) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}


