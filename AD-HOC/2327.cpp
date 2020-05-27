#include <iostream>
using namespace std;

int main(){
    int tamLinha = 0, parametro = 0;
    bool okLinha = true, okColuna = true, okDiagonal = true;
    cin >> tamLinha;
    int matriz[tamLinha][tamLinha];

    int aux = 0, somaDiagonal1 = 0, somaDiagonal2 = 0;
    for(int i = 0; i < tamLinha; i++){
        //cria a matriz quadrada
        for(int j = 0; j < tamLinha; j++)
            cin >> matriz[i][j];

        //cria o parametro comparador, ou seja a soma de uma linha
        parametro += matriz[0][i];

        //cria a soma da diagonal esquerda > direita
        somaDiagonal1 += matriz[i][i];
    }
    //cria a soma da diagonal direita > esquerda
    for(int d = (tamLinha - 1); d > -1; d--){
        somaDiagonal2 += matriz[d][aux];
        aux += 1;
    }
    if(somaDiagonal1 != parametro || somaDiagonal2 != parametro)
        okDiagonal = false;
    //comparar parametro com a soma das linhas e colunas
    for(int l = 0; l < tamLinha; l++){
        int somaLinha = 0, somaColuna = 0;
        for(int c = 0; c < tamLinha; c++){
            somaLinha += matriz[l][c];
            somaColuna += matriz[c][l];
        }
        if (somaLinha != parametro){
            okLinha = false;
            break;
        }
        if (somaColuna != parametro){
            okColuna = false;
            break;
        }
    }
    if(okLinha && okColuna && okDiagonal)
        cout << parametro << endl;
    else
        cout << "-1" << endl;
    return 0;
}
