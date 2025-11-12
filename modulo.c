#include "modulo.h"

int modulo(int a, int b){
    if(b == 0){
        return 0;
    }
    else{
        int r = a % b;
        return r;
    }
}