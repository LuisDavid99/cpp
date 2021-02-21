#include <iostream>
#include "startShip.h"
#include "snake.h"
#include <string>

using namespace std;

string juegos [2][2] = {
    {"1", "starShip()"},
    {"2", "snake()"},
};

int main(int argc, char const *argv[])
{
    int numero = 0;

    while (true) {
        
        system ("cls");

        cout << endl;
        cout << "**************" << endl;
        cout << "MENU DE JUEGOS" << endl;
        cout << "**************" << endl;
        cout << endl;
        cout << "1 - starShip" << endl;
        cout << "2 - snake" << endl;
        cout << endl;
        cout << "Ingrese un numero del menu para seleccionar un juego: ";
        cin >> numero;
        
        switch (numero)
        {
        case 1:
            starShip();
            break;
        
        case 2:
            snake();
            break;
         
        default:
        break;
        }

        system ("pause");
        cout << endl;
        if (numero == 0)
        {
            break;
        }
    }

    return 0;
}