#include <iostream>
using namespace std;

int main(){
    int qtdPecas = 0;
    cin >> qtdPecas;
    int vetorPecas[qtdPecas - 1];
    // aloca as entradas em um vetor
    for(int i = 0; i < qtdPecas - 1; i++){
        cin >> vetorPecas[i];
    }
    // cria um vetor com todas as casas completas e ordenadas
    int vetorAux[qtdPecas];
    for(int j = 1; j <= qtdPecas; j++)
        vetorAux[j-1] = j;
    //ordena vetor
    int ord = 0;
    for(int x = 0; x < qtdPecas - 1; x++){
        for(int y = x; y < qtdPecas - 1; y++){
             if (vetorPecas[x] > vetorPecas[y]){
                ord = vetorPecas[x];
                vetorPecas[x] = vetorPecas[y];
                vetorPecas[y] = ord;
             }
        }
    }
    //acha a resposta
    for(int k = 0; k < qtdPecas; k++){
        if(vetorPecas[k] != vetorAux[k]){
            cout << vetorAux[k] << endl;
            break;
        }
    }
    return 0;
}
