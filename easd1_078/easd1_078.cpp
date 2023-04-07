//Karena dengan adanya algoritma kita dapat memecahkan masalah secara sistematis dan waktu efisien.
//Array dan link list
//Speed of the machine, compiler, operating system, programming language, & size of the input
//Quick sort, karena memiliki kompleksitas waktu rata-rata O(n log n) dan membutuhkan sedikit memori.
//-Bubble sort, Insertion sort, selection sort merupakan quadratiic, quick sort dan merge sort merupakan Loglinier, sedangkan shell sort bisa jadi keduanya.
//
#include <iostream>
using namespace std;

const int max = 78 + 20 - 2 * 15 + 10 + 20; // jumlah maksimum data

int alvien[98];
int temp[98];

void merge(int low, int mid, int high) {
    int i = low;
    int AR = mid + 1;
    int k = low;

    while (i <= mid && AR <= high) {
        if (alvien[i] <= alvien[AR]) {
            temp[k] = alvien[i];
            i++;
        }
        else {
            temp[k] = alvien[AR];
            AR++;
        }
        k++;
    }

    while (AR <= high) {
        temp[k] = alvien[AR];
        AR++;
        k++;
    }

    while (i <= mid) {
        temp[k] = alvien[i];
        i++;
        k++;
    }

    for (int i = low; i <= high; i++) {
        alvien[i] = temp[i];
    }
}

void mergeSort(int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = (low + high) / 2;
    mergeSort(low, mid);
    mergeSort(mid + 1, high);
    merge(low, mid, high);
}

void input() {
    cout << "Masukkan " << 98 << " data:" << endl;
    for (int i = 0; i < 98; i++) {
        cin >> alvien[i];
    }
}

void display() {
    cout << "Hasil Pengurutan: " << endl;
    for (int i = 0; i < 98; i++) {
        cout << alvien[i] << " ";
    }
    cout << endl;
}






