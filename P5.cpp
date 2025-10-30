#include <iostream>
#include <string>
#include <cctype>   
#include <map>      

using namespace std;


string normalizarTexto(const string& texto)
{
    
    map<char, char> reemplazos; 
    
   
    reemplazos['�'] = 'a'; reemplazos['�'] = 'e'; reemplazos['�'] = 'i';
    reemplazos['�'] = 'o'; reemplazos['�'] = 'u';
    reemplazos['�'] = 'a'; reemplazos['�'] = 'e'; reemplazos['�'] = 'i';
    reemplazos['�'] = 'o'; reemplazos['�'] = 'u';
    reemplazos['�'] = 'n'; reemplazos['�'] = 'n';

    string textoLimpio = "";

    
    for (size_t i = 0; i < texto.length(); ++i)
    {
        char c = texto[i];
        c = tolower(c); 

        
        if (reemplazos.count(c))
            textoLimpio += reemplazos[c];
        else if (isalnum(c)) 
            textoLimpio += c;
    }

    return textoLimpio;
}

int main()
{
    string texto;
    cout << "Ingrese un texto para normalizar: ";
    getline(cin, texto);

    string resultado = normalizarTexto(texto);

    cout << "Texto normalizado: " << resultado << endl;

    return 0;
}

