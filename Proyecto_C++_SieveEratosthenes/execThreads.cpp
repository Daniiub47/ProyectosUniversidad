//===============================================
//Archivo: execThreads.cc
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
#include<vector>
#include<pthread.h>
#include<limits>
#include<cmath>
using namespace std;
#include "execThreads.h"

void* Execute::startup(void *ptr_this)
{
    Execute* This = (Execute*) ptr_this;
    This->exec();
    return NULL;
}///____________________________________________________________________

void Execute::start()
{
    pthread_create(&thread_id, NULL, &startup, this);
}///____________________________________________________________________

// Nota: este archivo no se cambia, lo mantendré igual.
