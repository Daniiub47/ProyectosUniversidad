#ifndef SIEVEERATOSTHENES_H
#define SIEVEERATOSTHENES_H

#include <iostream>
#include <set>
#include <mutex>

using namespace std;

class SieveEratosthenes{
private:
    int limite_sup;                 // Límite superior para la búsqueda de números primos.
    set<int> primes;           // Se usa una librería "set" para almacenar los primos(primes).
    static mutex accesso;      // Se crea un acceso para controlar el acceso de los threads.
public:
    // Constructor que recibe el límite de la búsqueda de primos.
    SieveEratosthenes(int limite_sup);

    // Método de Eratosthenes.
    void run();
    // Muestra los números primos por cada thread.
    void show();
};///_____________________________________________________________________________________

#endif // SIEVEERATOSTHENES_H
