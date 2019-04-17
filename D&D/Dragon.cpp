/*
  Archivo: Dragon.cpp
  Autores:  Ángel García Baños
            Crhistian García Urbano
            Nicolás Jaramillo Mayor
  Email:  nicolas.jaramillo@correounivalle.edu.co
          garcia.crhistian@correounivalle.edu.co
  Fecha creación: 2018-02-28
  Fecha última modificación: 2019-03-23
  Versión: 0.1.1
  Licencia: GPL
*/

#include "Dragon.h"

Dragon::Dragon(int fila_Objeto, int columna_Objeto, string nombre) : Objeto(fila_Objeto, columna_Objeto, nombre)
{
  this-> fila_Objeto = fila_Objeto;
  this-> columna_Objeto = columna_Objeto;
  this-> nombre = nombre;
}


Dragon::~Dragon()
{
  
}


Dragon::void condicionDePaso() //condicion de paso que ocurre cuando el jugador se encuentra con el objeto
{
  Objeto::condicionDePaso();
  cout<<"traerme un tesoro"<<endl;
}
