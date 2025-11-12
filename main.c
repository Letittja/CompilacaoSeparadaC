#include <stdio.h>
#include "soma.h"
#include "subtrai.h"
#include "multiplica.h"
#include "divisao.h"
#include "modulo.h"
#include "potencia.h"
#include "fatorial.h"
#include "maximo.h"
#include "minimo.h"
#include "absoluto.h"

int main(void){
    printf("------ Testando as funcoes ------\n");
    printf("------ Teste Sequencial ------\n");
    int s;
    s = soma(4, 6);
    s = subtrai(s, 7);
    s = multiplica(s, 3);
    s = divisao(s, 5);
    printf("------ Resultado de teste sequencial ------\n ");
    printf("s = %d\n", s);

    printf("------ Teste Individual ------\n");
    printf("soma(10, 5) = %d\n", soma(10, 5));             
    printf("subtrai(10, 5) = %d\n", subtrai(10, 5));       
    printf("multiplica(10, 5) = %d\n", multiplica(10, 5)); 
    printf("divisao(10, 5) = %d\n", divisao(10, 5));       
    printf("modulo(10, 3) = %d\n", modulo(10, 3));         
    printf("potencia(2, 5) = %d\n", potencia(2, 5));
    printf("maximo(10, 5) = %d\n", maximo(10, 5));         
    printf("minimo(-5, 7) = %d\n", minimo(-5, 7));         
    printf("absoluto(-9) = %d\n", absoluto(-9));           
    printf("minimo(%d, %d) = %d\n", -5, 7, minimo(-5, 7));
    printf("absoluto(%d) = %d\n", -9, absoluto(-9));

    printf("------ Teste Fatorial ------\n");
    printf("fatorial(5) = %d\n", fatorial(5));
    printf("fatorial(0) = %d\n", fatorial(0));
    printf("fatorial(-1) = %d\n", fatorial(-1));

    printf("------ Fim dos Testes ------\n");
    return 0;
}