#include <iostream>

using namespace std;

void trabalhando(int diaDaSemana, int hora);

int main() {
    int d, h;

    cin >> d >> h;

    trabalhando(d,h);

    return 0;
}

void trabalhando(int diaDaSemana, int hora){

    if(diaDaSemana==1){
        cout << "NÃO" << endl;
    }else{
        if(diaDaSemana==7){
            if(8<=hora>=11){
                cout << "SIM" << endl ;
            }else{
                cout << "NÃO" << endl;
            }
        }else{
            if(8<=hora>=11||14<=hora>=17){
                cout << "SIM" << endl;
            }else{
                cout << "NÃO" << endl;
            }
        }
    }

}