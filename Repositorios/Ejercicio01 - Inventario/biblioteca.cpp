#include <iostream>
#include <algorithm>
#include <time.h>

using namespace std;

string libros[39][3];

void cargarLibros(){
    // Arreglo con categoria y descripcion
	libros[0][0] = "Algoritmos"; 
    libros[0][1] = "Algoritmos y Programacion (Guia para docentes)";
    libros[0][2] = "Bill Gates";

	libros[1][0] = "Algoritmos"; 
    libros[1][1] = "Apuntes de Algoritmos y Estructuras de Datos";
    libros[1][2] = "Steve Jobs";

	libros[2][0] = "Algoritmos"; 
    libros[2][1] = "Breves Notas sobre Analisis de Algoritmos";
    libros[2][2] = "Larry Page";

	libros[3][0] = "Economia"; 
    libros[3][1] = "Macroeconomia";
    libros[3][2] = "Michael Parkin";

	libros[4][0] = "Administracion"; 
    libros[4][1] = "Fundamentos de Administracion";
    libros[4][2] = "Stephens Robbins";

	libros[5][0] = "Contabilidad"; 
    libros[5][1] = "Contabilidad General";
	libros[5][2] = "Jesus Garcia";

}


int main(int argc, char const *argv[])
{
    cargarLibros();

    srand (time(NULL));
    
    bool salir = false;

    while (salir == false)
    {
        string buscar = "";
        system("cls");
        cout << "Ingrese la descripcion del libro que busca: ";
        cin >> buscar;

        // busqueda
        for (int i = 0; i < 6; i++)
        {
            string libro = libros[i][1];
            string autor = libros[i][2];
            string libroEnminuscula = libro;
            string autorEnminuscula = autor;
            // transformamos a minuscula los string buscar y libro
            transform(libroEnminuscula.begin(), libroEnminuscula.end(), libroEnminuscula.begin(), ::tolower);
            transform(autorEnminuscula.begin(), autorEnminuscula.end(), autorEnminuscula.begin(), ::tolower);
            transform(buscar.begin(), buscar.end(), buscar.begin(), ::tolower);

            if (libroEnminuscula.find(buscar) != string::npos || autorEnminuscula.find(buscar) != string::npos){
               cout << "Libro encontrado: " << libro << endl;

                cout << "Tambien te sugerimos estos libros: " << endl;

                int sugerencia1 = rand() % 5 + 1;
                int sugerencia2 = rand() % 5 + 1;
                int sugerencia3 = rand() % 5 + 1;

                cout << " Sugerencia 1: " << libros[sugerencia1][1] << endl;
                cout << " Sugerencia 2: " << libros[sugerencia2][1] << endl;
                cout << " Sugerencia 3: " << libros[sugerencia3][1] << endl;

               salir = true; 
               break;   
            }
        }
        

        if (salir == false) {
            char continuar = 'n'; 
            
            while (true){
                system("cls");
                cout << "No se encontro el libro que busca. Desea continuar? s/n ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S'){
                    break;
                } else if (continuar == 'n' || continuar == 'N'){
                    salir = true;
                    break;
                }
            }
        }
    }
    
    
    return 0;
}


