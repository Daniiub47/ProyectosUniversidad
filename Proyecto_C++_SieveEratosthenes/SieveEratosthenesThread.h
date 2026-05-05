#ifndef SIEVEERATOSTHENESTHREAD_H_INCLUDED
#define SIEVEERATOSTHENESTHREAD_H_INCLUDED
//===============================================
//Archivo: GaussJordanEcuacionesThread.h
//===============================================
// Curso de programación en C/C++
// Profesor: Freddy Rojas.
// Material de curso licencia GPL version 2.0
//===============================================
// No se admiten responsabilidades por el
// uso del material que no sea el planteado
// inicialmente para material didactico.
//===============================================

#include "SieveEratosthenes.h"
#include "execThreads.h"
// Se cambia para que la herencia sea con SieveEratosthenes y no Gauss.

class SieveEratosthenesThreads : public SieveEratosthenes, public Execute{
public:
  // Constructor
  SieveEratosthenesThreads(int limite_sup) : SieveEratosthenes(limite_sup) {}
  void exec(void);
};///________________________________________________________________________


#endif // SIEVEERATOSTHENESTHREAD_H_INCLUDED
