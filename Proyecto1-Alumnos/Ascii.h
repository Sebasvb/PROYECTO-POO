

#ifndef NUEVO_TERMINADO_ASCII_H
#define NUEVO_TERMINADO_ASCII_H

#include <fstream>
#include <iostream>


using namespace std;
char ** loadASCII(const char* dir, size_t &height, size_t &width);
//void loadASCII(const char* dir, char **&matriz, size_t &height, size_t &width);
void getSize(const char* dir, size_t &height, size_t &width);
void deleteASCII(char **&matriz, size_t &height, size_t &width);
void original(char **&matriz, size_t alto, size_t ancho);
void Reflejo_hacia_abajo(char **&matriz, size_t alto, size_t ancho);
void Reflejo_hacia_un_costado(char **&matriz, size_t alto, size_t ancho);
void  Rotar_180_grados(char **&matriz, size_t alto, size_t ancho);
void  Girar_90_grados(char **&matriz, size_t alto, size_t ancho);
void  inverso(char **&matriz, size_t alto, size_t ancho);


#endif //NUEVO_TERMINADO_ASCII_H
