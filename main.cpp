#include <iostream>

using namespace std;

int main()
{
    int dias = 0;
    double peso = 0;
    cout << showpos;
    cout << "Insira o número de dias que passaram: ";
    cin >> dias;
    cout << "Insira a diferença de peso nesse período em kg e gramas (com sinal e ponto): ";
    cin >> peso;
    cout << "A quantidade de calorias por dia de excesso ou déficit é: " << (peso * 7700) / dias << endl;
    return 0;
}
