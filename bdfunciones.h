#ifndef BDFUNCTIONS_H
#define BDFUNCTIONS_H

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

class bdfunciones
{
public:
    bdfunciones();
    int leerBD();
    int leerTabla(string nombreBD);
    void menuPrincipal();

};

#endif // BDFUNCTIONS_H
