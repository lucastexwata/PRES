#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    float salario = 1000;
    float comissao = 5;
    float valorVendas, salarioFinal;
    cout << "Digite o valor total de venda no m�s: ";
    cin >> valorVendas;
    salarioFinal = salario + ((valorVendas * comissao) / 100);
    cout << "O sl�rio final �: \n" << salarioFinal << " Reais. ";
     return 0;
}
