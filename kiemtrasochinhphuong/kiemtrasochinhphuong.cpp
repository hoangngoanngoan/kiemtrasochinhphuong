// kiemtrasochinhphuong.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

bool kiemtra(int so) {
    if ((int)sqrt(so) == sqrt(so)) return true;
    return false;
}
int main()
{
    //Khai bao mang
    int arr[5];
    //Nhap du lieu vao mang
    for (int i = 0; i < 5; i++) {
        cout << "Nhap phan tu thu " << i << " ";
        cin >> arr[i];
    }
    //Hien mang
    for (int i : arr) {
        cout << i << " ";
    }
    cout << "\n";
    //kiem tra
    for (int i = 0; i < 5; i++) {
        if (kiemtra(arr[i])) cout << arr[i] << " ";
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
