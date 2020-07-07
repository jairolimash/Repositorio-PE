#include <iostream>
using namespace std;
int main()
{
    int numero=0, suma=0;
    string respuesta;
    do
    {
        suma=suma+numero;
        numero++;
        cout << "Desea seguir? S/N ";
        cin >> respuesta;
    } while (respuesta == "S" || respuesta == "s");
    //while (numero < 10);
    cout << "La suma es " << suma << endl;
    return 0;
}