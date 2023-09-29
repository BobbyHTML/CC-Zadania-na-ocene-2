#include <iostream>
using namespace std;
int main() {
    int suma = 0;
    int liczba;
    
    while (suma < 200){
        cout << "Podaj liczbe: ";
        cin >> liczba;
        suma += liczba;
    }
    cout << "Suma jest 200 lub wiecej" << endl;
}
