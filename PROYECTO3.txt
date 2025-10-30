#include <iostream>
#include <string>
#include <algorithm> 
#include <cctype>    
using namespace std;


bool sonAnagramas(string palabra1, string palabra2)
{
    // Eliminar espacios
    palabra1.erase(remove(palabra1.begin(), palabra1.end(), ' '), palabra1.end());
    palabra2.erase(remove(palabra2.begin(), palabra2.end(), ' '), palabra2.end());

    // Convertir minusculas o mayusculas
    transform(palabra1.begin(), palabra1.end(), palabra1.begin(), ::tolower);
    transform(palabra2.begin(), palabra2.end(), palabra2.begin(), ::tolower);

    if (palabra1 == palabra2)
        return false;

    if (palabra1.length() != palabra2.length())
        return false;

   
    sort(palabra1.begin(), palabra1.end());
    sort(palabra2.begin(), palabra2.end());

    return palabra1 == palabra2;
}

int main()
{
    string palabraA, palabraB;

    cout << "Ingrese primera palabra o frase: ";
    getline(cin, palabraA);

    cout << "Ingrese segunda palabra o frase: ";
    getline(cin, palabraB);

    if (sonAnagramas(palabraA, palabraB))
        cout << "Ambas palabras son anagramas." << endl;
    else
        cout << "Ambas palabras no son anagramas" << endl;

    return 0;
}
