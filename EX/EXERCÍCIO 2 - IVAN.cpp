#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    float salario = 1000;
    float comissao = 5;
    float valorVendas, salarioFinal;
    cout << "Digite o valor total de venda no mês: ";
    cin >> valorVendas;
    salarioFinal = salario + ((valorVendas * comissao) / 100);
    cout << "O slário final é: \n" << salarioFinal << " Reais. ";
     return 0;
}
