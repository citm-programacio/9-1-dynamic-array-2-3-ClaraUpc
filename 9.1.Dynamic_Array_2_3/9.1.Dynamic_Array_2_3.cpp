// 9.1.Dynamic_Array_2_3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.


//Write a program that asks for numbers from the user, one by one.
//Every time a number is entered, it is added to an array.But the array must always keep the numbers in order.
//
//189 ->[189]
//59 ->[59, 189]
//111 ->[59, 111, 189]
//
//Print the complete array every time a new number is entered.
//You must not declare a static array with arbitrary length!
//Create a new dynamic array bigger every time, deleting the old one.



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    std::vector<int*> numeros;
    int* num = 0;
    int secuencia;

    while (true) {
        cout << "Ingresa un numero: ";
        cin >> secuencia;

        num = new int(secuencia);
        numeros.push_back(num);

        sort(numeros.begin(), numeros.end(), [](int* a, int* b) {
            return *a < *b;
            });

        cout << "Numeros ordenados: ";
        for (int* ptr : numeros) {
            std::cout << *ptr << " ";
        }
        cout << std::endl;
    }

    for (int* ptr : numeros) {
        delete ptr;
    }

    return 0;
}



