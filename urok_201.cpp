#include <time.h>
#include <iostream>

using namespace std;

int* Simple_num(int* a, int size);
void out_arr(int* a, int size);
int* third_num(int* a, int size);
int* parni_num(int* a, int size);
bool menu(int* arr, int size, bool start);

int main()
{
     const int size = 5;
     int arr[size];
     arr[0] = 20;
     arr[1] = 33;
     arr[2] = 4;
     arr[3] = 7;
     arr[4] = 77;
     bool start = true;
     while (start) {
         start = menu(arr, size, start);
     }
}

int* Simple_num(int *a, int size) {
    int* primeArr = new int[size];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 != 0 && a[i] % 3 != 0 && a[i] % 5 != 0) {
            //cout << a[i] << endl;
            primeArr[j] = a[i];
            j++;
        }
    }
    int* resizedPrimeArr = new int[j];
    for (int i = 0; i < j; ++i) {
        resizedPrimeArr[i] = primeArr[i];
    }
    delete[] primeArr;
    cout << "proste chislo: \n";
    out_arr(resizedPrimeArr, j);
    cout << endl;
    return resizedPrimeArr;
}
int* third_num(int* a, int size) {
    int* primeArr = new int[size];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 3 == 0) {
            //cout << a[i] << endl;
            primeArr[j] = a[i];
            j++;
        }
    }
    int* resizedPrimeArr = new int[j];
    for (int i = 0; i < j; ++i) {
        resizedPrimeArr[i] = primeArr[i];
    }
    delete[] primeArr;
    cout << "kratni 3: \n";
    out_arr(resizedPrimeArr, j);
    cout << endl;
    return resizedPrimeArr;
}
int* parni_num(int* a, int size) {
    int* primeArr = new int[size];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            //cout << a[i] << endl;
            primeArr[j] = a[i];
            j++;
        }
    }
    int* resizedPrimeArr = new int[j];
    for (int i = 0; i < j; ++i) {
        resizedPrimeArr[i] = primeArr[i];
    }
    delete[] primeArr;
    cout << "parni num: \n";
    out_arr(resizedPrimeArr, j);
    cout << endl;
    return resizedPrimeArr;
}
void out_arr(int* a, int size) {
    for (int i = 0; i < size; ++i) {
        cout << a[i] << '\t';
    }
}
bool menu(int* arr, int size, bool start) {
    cout << "0. EXIT\n1. Simple number\n2. Third number \n3. Parni number\n";
    int user_choice;
    cin >> user_choice;
    if (user_choice == 0) {
        cout << "EXIT." << endl;
        start = false;
        return start;
    }
    if (user_choice == 1) {
        int* primes = Simple_num(arr, size);
        return start;
    }
    if (user_choice == 2) {
        int* primes = third_num(arr, size);
        return start;
    }
    if (user_choice == 3) {
        int* primes = parni_num(arr, size);
        return start;
    }
}