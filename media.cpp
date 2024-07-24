#include <iostream>

using namespace std;

string media(int nota1, int nota2, int notaFinal);

int main() {
    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    string resultado = media(n1, n2, n3);

    cout << resultado<< endl;

    return 0;
}

string media(int nota1, int nota2, int notaFinal){

    int media = (nota1 + nota2)/2;

    if(media>=7){
        return "aprovado";
    }else if(media<4){
        return "reprovado";
    }else{
        int mediaFinal = (media+notaFinal)/2;
        if(mediaFinal>=5){
            return "aprovado na final";
        }else{
            return "reprovado na final";
        }
    }


}