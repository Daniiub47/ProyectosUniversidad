//===============================================
//Archivo: GaussJordanEcuaciones.cc
//===============================================
// Curso de programación en C/C++
// Profesor: Freddy Rojas.
// Material de curso licencia GPL version 2.0
//===============================================
// No se admiten responsabilidades por el
// uso del material que no sea el planteado
// inicialmente para material didactico.
//===============================================
#include <iostream>
#include <limits>
using namespace std;
#include "SieveEratosthenes.h"


// Se llama a el acceso mutex:
mutex SieveEratosthenes::accesso;

// Aquí se define el algoritmo por medio de run y se crea el método show.
SieveEratosthenes::SieveEratosthenes(int limite_sup) : limite_sup(limite_sup) {}

void SieveEratosthenes::run() {
    set<int> s;
    for (int m = 2; m <= limite_sup; ++m) {
        s.insert(m);
    }
    for (int m = 2; m * m <= limite_sup; ++m) {
        if (s.find(m) != s.end()) {
            for (int i = 2 * m; i <= limite_sup; i += m) {
                s.erase(i);
            }
        }
    }
    primes = s; // Se guardan los números primos en primes.
}

void SieveEratosthenes::show() { // Método show.
    lock_guard<mutex> guard(accesso); // Se controla el acceso de una forma distinta, un solo thread a la vez.
    for (const auto& prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
    cout << endl;
}


