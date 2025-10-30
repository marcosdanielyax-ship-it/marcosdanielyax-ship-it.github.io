#include <iostream>
using namespace std;

int main() {
    
    for (int i = 1; i <= 100; ++i) {
        
        
        bool imprimio_texto = false;
        
        //multipllo de 3 y 5
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "fizzbuzz";
            imprimio_texto = true;
        } 
        
        //Múltiplo de 3
        else if (i % 3 == 0) {
            cout << "fizz";
            imprimio_texto = true;
        } 
        
        //Múltiplo de 5
        else if (i % 5 == 0) {
            cout << "buzz";
            imprimio_texto = true;
        } 
        
        // no texto, dar numero
        if (!imprimio_texto) {
            cout << i;
        }
        
        // Dar salto
        cout << endl; 
    }
    
    return 0;
}
