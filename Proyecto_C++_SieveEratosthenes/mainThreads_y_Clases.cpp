//===============================================
//Archivo: mainThreds.cpp
//===============================================
// Curso de programación en C/C++
// Profesor: Freddy Rojas.
// Estudiante: Daniela Ulloa Baarboza.
// Material de curso licencia GPL version 2.0
//===============================================
// No se admiten responsabilidades por el
// uso del material que no sea el planteado
// inicialmente para material didactico.
//===============================================
#include <unistd.h>
#include <iostream>
#include <vector>
#include <pthread.h>
#include <limits>
#include <cmath>
#include <random> // Librería para poder generar números aleatorios.

using namespace std;

#include "SieveEratosthenesThread.h"


int main()
{
    cout << "Bienvenido a la competencia de Threads para obtener números primos!" << endl;
    cout << "Se definen 20 números alteatorios entre 1200 y 4000, estos son los límites de cada thread." << endl;
    cout << "Los threads de números primos con su límite establecido aleatoriamente son los siguientes:" << endl;
    cout << endl;
    const int thread_count = 20;
    vector<SieveEratosthenesThreads*> sieve_objects;
    vector<int> random_numbers(thread_count);

    // Forma de generar números random entre 1200 y 4000, el 1200 no cuenta porque deben ser mayores.
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1201, 4000);

    for (int i = 0; i < thread_count; ++i) {
        random_numbers[i] = dis(gen); // Se guardan los números aleatorios.
    }

    // Se crean y se inician los threads.
    for (int i = 0; i < thread_count; ++i) {
        SieveEratosthenesThreads* sieve = new SieveEratosthenesThreads(random_numbers[i]);
        sieve_objects.push_back(sieve);
        sieve->start(); // Inicia el thread usando la clase Execute (pthread)
    }

    // Para cada thread se espera a que termine.
    for (auto& sieve : sieve_objects) {
        pthread_join(sieve->thread_id, NULL); // Se espera a que termine cada thread.
    }

    // Se libera la memoria.
    for (auto& sieve : sieve_objects) {
        delete sieve;
    }

    return 0;
}///____________________________________________________________________________
