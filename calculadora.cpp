#include <iostream>
using namespace std;

int main(){
    float num1, num2, resultado;
    char op;

    cout << "Digite o primeiro número: " << "\n";
    cin >> num1;

    cout << "Digite a operação a ser efetuada [+, -, *, /]:";
    cin >> op;

    cout << "Digite o segundo número: " << "\n";
    cin >> num2;


    if(op == '+')
        resultado = num1 + num2;
    if(op == '-')
        resultado = num1 - num2;
    if (op == '*')
        resultado = num1 * num2;
    if (op == '/' )
        resultado = num1 / num2;
    cout << num1 << op << num2 << " = " << resultado << "\n";

    return 0;
}