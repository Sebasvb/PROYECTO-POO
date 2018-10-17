#include <iostream>
#include "Ascii.h"
using namespace std;


int main() {
  char **matriz;
  size_t alto, ancho;

  matriz = loadASCII("utec.txt", alto, ancho);

  int opcion = 0;

  cout << "\n\n";
  cout << "  	█████╗ ███████╗ ██████╗██╗██╗ \n"
    "	██╔══██╗██╔════╝██╔════╝██║██║ \n"
    "	███████║███████╗██║     ██║██║ \n"
    "	██╔══██║╚════██║██║     ██║██║ \n"
    "	██║  ██║███████║╚██████╗██║██║ \n"
    "	╚═╝  ╚═╝╚══════╝ ╚═════╝╚═╝╚═╝ \n\n";

   cout << "\n\nImprime la matriz\n\n";

  for (int i = 0; i < alto; ++i) {
    for (int j = 0; j < ancho; ++j) {
      cout << matriz[i][j];
    }
    cout << '\n';
  }
    cout << "\n"
            "1.Figura Original\n"
            "2. Inverso\n"
            "3. Reflejo hacia abajo\n"
            "4. Reflejo hacia un costado\n"
            "5. Rotar 180 grados\n"
            "6. Girar 90 grados\n"
            "7. Salir del programa\n"
            "Ingresa una opcion: ";

    do
    {
        cin >> opcion;
        if (opcion==1)
            original(matriz, alto,ancho);
        if (opcion==2) {
            inverso(matriz, alto, ancho);
            matriz = loadASCII("utec.txt", alto, ancho);
        }
        if (opcion==3)
            Reflejo_hacia_abajo(matriz, alto,ancho);
        if (opcion==4)
            Reflejo_hacia_un_costado(matriz, alto,ancho);
        if (opcion==5)
            Rotar_180_grados(matriz, alto,ancho);
        if (opcion==6)
            Girar_90_grados(matriz, alto,ancho);
        if (opcion==7)
        {
            cout<<"El programa ha finalizado.";
            return 1;
        }
    }while(opcion>0&&opcion<8);

//----------------------------------------------------

//-----------------------------------------------------

  deleteASCII(matriz, alto, ancho);
  return 0;
}