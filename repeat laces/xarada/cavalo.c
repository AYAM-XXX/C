// Um fazendeiro deseja saber qual o valor de compra de um bode, porém o vendedor de bodes ao invés de informar o  valor do 
// animal, envia uma xarada para o fazendeiro, que para descobrir o 
// valor de cada bode terá que resolver o desafio:

// - 1 cavalo 1500,00

// - 1 cavalo equivale ao valor de  20 coelhos

// -  5 coelhos equivalem ao valor de 5 patos

// - 20 patos equivalem ao valor de 2 bodes

//  O fazendeiro, então resolveu desenvolver um programa em C para 
//  resolver a xarada. A saída do programa será o valor de um bode.
#include <stdio.h>
int main (){
    int cavalo = 1500;
    int coelho_cavalo = 20;
    int pato_galinha = 5;
    int pato_bode = 2;
    printf("valor do bode: %d", cavalo/ coelho_cavalo * pato_galinha * pato_bode);

}