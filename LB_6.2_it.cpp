#include <iostream>

using namespace std;

void create_array(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }
}

void print_array(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int count_odd(int* arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n = 10;
    int* arr_iter = new int[n];
    create_array(arr_iter, n);
    print_array(arr_iter, n);
    cout << count_odd(arr_iter, n) << '\n';
    delete[] arr_iter;

    return 0;
}
