//===============================================
//Archivo: ecuaciones3incogThreads.cc
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
using namespace std;
#include "SieveEratosthenes.h"
#include "execThreads.h"
#include "SieveEratosthenesThread.h"

void SieveEratosthenesThreads::exec(void)
{
    // Corre el código para encontrar los números primos.
    run();
    // Muestra los números primos calculados.
    show();
}//___________________________________________________
