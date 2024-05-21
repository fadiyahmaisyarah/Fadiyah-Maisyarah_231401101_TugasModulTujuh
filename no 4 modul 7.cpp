#include <iostream>
using namespace std;
void penjumlahan(int *n1, int *n2, int *hasil);
void pengurangan(int *n1, int *n2, int *hasil);
void perkalian(int *n1, int *n2, int *hasil);
void pembagian(int *n1, int *n2, int *hasil);

void penjumlahan(int *n1, int *n2, int *hasil) {
    *hasil = *n1 + *n2;
}

void pengurangan(int *n1, int *n2, int *hasil) {
    *hasil = *n1 - *n2;
}

void perkalian(int *n1, int *n2, int *hasil) {
    *hasil = *n1 * *n2;
}

void pembagian(int *n1, int *n2, int *hasil) {
    if (*n2 != 0) {
        *hasil = *n1 / *n2;
    } else {
       cout << "Error" << endl;
        *hasil = 0;
    }
}

int main() {
    int n1, n2, hasil;

    cout << "angka pertama: ";
    cin >> n1;
  cout << "angka kedua: ";
  cin >> n2;

    penjumlahan(&n1, &n2, &hasil);
    cout << "penjumlahan: " << hasil << endl;

    pengurangan(&n1, &n2, &hasil);
    cout << "pengurangan: " << hasil << endl;

    perkalian(&n1, &n2, &hasil);
    cout << "perkalian: " << hasil << endl;

    pembagian(&n1, &n2, &hasil);
   cout << "pembagian: " << hasil <<endl;

    return 0;
}