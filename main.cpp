#include "nums.h"

int main()
{
    cout << "#1:" << endl;
    srand(time(0));
    int n1;
    cin >> n1;
    double* arr1 = nullptr;
    arr1 = create1(arr1, n1);
    full1(arr1, n1);
    print1(arr1, n1);
    del1(arr1);

    cout << endl << "#2:" << endl;

    int n2 = 12;
    int* arr2 = new int[n2];
    for (int i = 0; i < n2; i++) {
        arr2[i] = i + 1;
    }
    print2(arr2, n2);
    replace2(arr2, n2);
    print2(arr2, n2);
    delete[] arr2;

    cout << endl << "#3:" << endl;

    int str, stl;
    cin >> str >> stl;
    int** arr3 = new int* [str];
    for (int i = 0; i < str; i++) {
        arr3[i] = new int[stl];
    }
    full3(arr3, str, stl);
    print3(arr3, str, stl);

    for (int i = 0; i < str; i++) {
        delete[] arr3[i];
    }
    delete[] arr3;
}