#include "potencia.h"

int potencia(int a, int b)
{
    if (b < 0){
        return 0; // potência negativa não é tratada
    }
    if (b == 0){
        return 1; // qualquer número elevado a 0 é 1
    }
    else{
        int resultado = 1;
        for (int i = 0; i < b; ++i) {
            resultado *= a;
        }
        return resultado;
    }
}