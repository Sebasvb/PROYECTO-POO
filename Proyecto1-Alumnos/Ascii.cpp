
#include "Ascii.h"

#include "ascii.h"
char ** loadASCII(const char* dir, size_t &height, size_t &width)
{char **matriz;

  getSize(dir, height, width);

  ifstream file(dir);
  string line;
  matriz = new char*[height];
  for (int i = 0; getline( file, line ); ++i){
    matriz[i] = new char[width];
    for (int j = 0; j < width; ++j) matriz[i][j] = ' ';
    for (int j = 0; j < line.size(); ++j){
      matriz[i][j] = line[j];
    }
  }
  file.close();
  return matriz;
}
void getSize(const char* dir, size_t &height, size_t &width){
  ifstream file(dir);
  height = width = 0;
  for( std::string line; getline( file, line ); ){
    if( line.size() > width) width = line.size();
    height++;
  }
  file.close();
}

void deleteASCII(char **&matriz, size_t &height, size_t &width){
  for (int i = 0; i < height; ++i)
    delete [] matriz[i];
  delete [] matriz;
}

//---------------------------------------------------------------------------
void original(char **&matriz, size_t alto, size_t ancho)
{
    for (int i = 0; i < alto; ++i)
    {
        for (int j = 0; j < ancho; ++j)
        {
            cout << matriz[i][j];
        }
        cout << '\n';
    }
}
void  inverso(char **&matriz, size_t alto, size_t ancho)
{
    for (int i = 0; i < alto; ++i)
    {
        for (int j = 0; j < ancho; ++j)
        {
            if (matriz[i][j] == 32)
                matriz[i][j] = 64;
            if (matriz[i][j] != 64)
                matriz[i][j]=0;
        }

    }
    for (int i = 0; i < alto; ++i)
    {
        for (int j = 0; j < ancho; ++j)
            cout << matriz[i][j];
        cout << '\n';
    }
}

void Reflejo_hacia_abajo(char **&matriz, size_t alto, size_t ancho)
{
    for (size_t i =alto-1;0 < i; --i)
    {
        for (int j = 0 ; j< ancho; ++j)
        {
            cout << matriz[i][j];
        }
        cout << '\n';
    }


}
void Reflejo_hacia_un_costado(char **&matriz, size_t alto, size_t ancho)
{
    for (size_t i =0;i < alto; ++i)
    {
        for (int j = ancho-1 ; 0 <= j; --j)
        {
            cout << matriz[i][j];
        }
        cout << '\n';
    }
}

void  Rotar_180_grados(char **&matriz, size_t alto, size_t ancho)
{
    for (int i =alto-1;0 <= i; --i)
    {
        for (int j = ancho-1 ; 0 <= j; --j)
        {
            cout << matriz[i][j];
        }
        cout << '\n';
    }
}
void  Girar_90_grados(char **&matriz, size_t alto, size_t ancho)
{
    for (int j = 0 ; j < ancho; ++j)
    {
        for (int i = 0;i < alto; ++i)
        {
            cout << matriz[i][j];
        }
        cout << '\n';

    }
}

