#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double t = 0, aplicacoes = 0, produzidos = 0;
    
    cin >> aplicacoes;
    while (aplicacoes != -1){
        cout << "Teste " << ++t << endl;
        produzidos = pow((1 + pow(2, aplicacoes)), 2);
        cout << fixed << setprecision(0);
        cout << produzidos << endl << endl;
        cin >> aplicacoes;
    }
    return 0;
}
