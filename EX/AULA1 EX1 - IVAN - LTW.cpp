#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2, numero3, resultadoPreliminar, resultadoFinal;
    cout << "Esse programa faz a soma de 3 números. \n";
    cout << "Digite o primeiro número a ser somado: \n";
    cin >> numero1;
    cout << "Digite o segundo número a ser somado: \n";
    cin >> numero2;
    resultadoPreliminar = numero1 + numero2;
    cout << "Digite o terceiro número a ser somado: \n";
    cin >> numero3;
    resultadoFinal = resultadoPreliminar + numero3;
    cout << "O valor da soma é: " << resultadoFinal;


    return 0;
}
