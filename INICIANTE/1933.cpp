#include <iostream>
using namespace std;

int main(){
    int carta1, carta2;
    cin >> carta1 >> carta2;
    if (carta1 == carta2)
        cout << carta1 << endl;
    else{
        if (carta1 < carta2)
            carta1 = carta2;
        cout << carta1 << endl;
    }
    return 0;
}
