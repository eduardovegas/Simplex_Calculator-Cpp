#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "data/Data.cpp"
#include "simplex/Simplex.cpp"

int main(int argc, char* argv[]){

    Data data1 = Data();

    if(argc < 1)
        return 1;

    if(argc == 1)
        data1.lerUsuario();
    else
        data1.lerArquivo(argv[1]);

    Simplex e1(data1);

    e1.printarTabela();
    e1.calcularSimplex();

    return 0;

}