#include "fatorial.h"

int fatorial(int x) {
    if (x < 0) {
        return 0;
    }
    if (x==0){
        return 1;
    }
    else{
        int resultado = 1;
        for (int i = 1; i <= x; ++i) {
            resultado *= i;
        }
        return resultado;
    }
}