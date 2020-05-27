#include <iostream>
using namespace std;

int main(){
    int t = 0, aldo = 0, beto = 0, controlador = 0;

    cin >> controlador;
    while (controlador != 0){
        int tAldo = 0, tBeto = 0;
        cout << "Teste " << ++t << endl;
        for (int i = 0; i < controlador; i++){
            cin >> aldo >> beto;
            tAldo += aldo;
            tBeto += beto;
        }
        if (tAldo > tBeto)
            cout << "Aldo" << endl << endl;
        else
            cout << "Beto" << endl << endl;
        cin >> controlador;
    }
    return 0;
}
