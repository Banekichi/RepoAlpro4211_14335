#include <iostream>
#include <array>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int jumlah(int myArr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += myArr[i];
    }
    return sum;
}

double rerata(int myArr[], int size) {
    double sum = 0;
    double avg;
    for (int i = 0; i < size; i ++) {
        sum += myArr[i];
    }
    avg = sum / size;
    return avg;
}

int main() {
    cout << "JUMLAH : " <<  tambah(9, 11) << endl;
    cout << "KURANG: " << kurang(9, 7) << endl;
    int myArr[] = {19, 37, 66 ,12 };
    cout << "JUMLAH ARRAY: " << jumlah(myArr, 4) << endl;
    cout << "RATA RATA DARI NILAI ARRAY: " << rerata(myArr, 4);
    return 0;}