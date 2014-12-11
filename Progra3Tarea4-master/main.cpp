#include "Evaluador.h"
#include <fstream>
#include <math.h>
#include <iostream>
using namespace std;

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo de texto
void escribirNumeroTexto(string nombre_archivo, int num)
{
    ofstream out(nombre_archivo.c_str());
  // while(!out.eof()) {
     out<<num;
   //}

    out.close();


}
int leerNumeroTexto(string nombre_archivo)
{
 ifstream in(nombre_archivo.c_str());

    int num;
    while((in>>num) != NULL)
    {
        return num;

    }
    in.close();
    return -1;

}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo de texto
void escribirStringTexto(string nombre_archivo, string str)
{
     ofstream out(nombre_archivo.c_str());
     out<<str;
}
string leerStringTexto(string nombre_archivo)
{
   ifstream in(nombre_archivo.c_str());

    string num;
    while(in>>num)
    {
        in>>num;
        return num;

    }
    in.close();
    return "";
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente un numero ubicado al inicio de un archivo binario
void escribirNumeroBinario(string nombre_archivo, int num)
{
}
int leerNumeroBinario(string nombre_archivo)
{
    return -1;
}

//Las siguientes funciones escribir y leer ingresan y leen respectivamente una cadena ubicada al inicio de un archivo binario
void escribirStringBinario(string nombre_archivo, string str)
{
}
string leerStringBinario(string nombre_archivo)
{
    return "";
}

//Devuelve true si encuentra str (dada) en un archivo dado el nombre
bool existe(string nombre_archivo, string str)
{
    return false;
}

//Devuelve el numero mayor dado el nombre de un archivo binario
int obtenerMayor(string nombre)
{
    return -1;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
