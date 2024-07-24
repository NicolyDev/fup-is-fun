#include <iostream>

using namespace std;

int main() {
    int wifi, login, adm;

    cin >> wifi >> login >> adm;


    if(!wifi){
        cout << "you must connect to wifi\n";
    } else if(!login){
        cout << "you need to login first\n";
    } else if(!adm){
        cout << "you must to login as admin\n";
    }else{
        cout << "done\n";
    }

    return 0;
}