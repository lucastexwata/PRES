#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2, numero3, resultadoPreliminar, resultadoFinal;
    cout << "Esse programa faz a soma de 3 n�meros. \n";
    cout << "Digite o primeiro n�mero a ser somado: \n";
    cin >> numero1;
    cout << "Digite o segundo n�mero a ser somado: \n";
    cin >> numero2;
    resultadoPreliminar = numero1 + numero2;
    cout << "Digite o terceiro n�mero a ser somado: \n";
    cin >> numero3;
    resultadoFinal = resultadoPreliminar + numero3;
    cout << "O valor da soma �: " << resultadoFinal;


    return 0;
}
