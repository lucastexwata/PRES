#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, maior;
    maior = 0;

    cout << "Vou identificar o meior entre três números";
    cout << "Digite o Primeiro número: " << endl;
    cin >> num1;
    cout << "Digite o Segundo número: " << endl;
    cin >> num2;
    cout << "Digite o Terceiro número: " << endl;
    cin >> num3;

    if((num1 >= num2) && (num1 >= num3))
        maior = num1;
    else if ((num2 >= num1) && (num2 >= num3))
        maior = num2;
    else if((num3 > num1) && (num3 > num2))
        maior = num3;
    cout << "O maior número é: " << maior << endl;
    return 0;
}
