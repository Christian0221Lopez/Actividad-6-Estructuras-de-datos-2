#include <iostream>
#include <string>
#include <stdio.h>
#include "Prototipo.h"


void CD::Agregar()
{
    //system("cls");


        //cout << "Dime el nombre del artista: " << cont << endl;
        std::getline(cin,this[cont].Artista);
        //cout << "Titulo del disco: " << cont << endl;
        std::getline(cin,this[cont].Titulo);
        //cout << "Genero del artista: " << cont << endl;
        std::getline(cin,this[cont].Genero);
        //cout << "Fecha de lanzamiento: " << cont << endl;
        std::getline(cin,this[cont].FechaL);
        //cout << "Codigo: " << cont << endl;
        cin >>this[cont].Codigo;
getchar();
        cont++;

}

void CD::Mostrar()
{
    int i = 0;
    system("cls");

    for (i=0; i<cont; i++)
    {
         cout << "Nombre: " << this[i].Artista<<endl;
         cout << "Titulo: " << this[i].Titulo<<endl;
         cout << "Genero: " << this[i].Genero<<endl;
         cout << "Fecha de Lanzamiento: " << this[i].FechaL<<endl;
         cout << "Codigo: " << this[i].Codigo<<endl;
    }

}

void CD::Consulta()
{
    int i = 0;
    int reg = 0;
    int bandera = 0;
    CD aux;

    cout<<"Que registro deseas buscar: "<<endl;
    cin >>aux.Codigo;

    if(cont > 0)
    {
        for(i=0; i<cont; i++)
        {
            if(this[i].Codigo == aux.Codigo)
            {
                cout << "Nombre: " << this[i].Artista<<endl;
                cout << "Titulo: " << this[i].Titulo<<endl;
                cout << "Genero: " << this[i].Genero<<endl;
                cout << "Fecha de Lanzamiento: " << this[i].FechaL<<endl;
                cout << "Codigo: " << this[i].Codigo<<endl;
                bandera = 1 ;
                break;
            }
        }
    }

    else
    {
        cout<<"\n\tRegistro vacio..!";
    }

    if(bandera==0)
    {
        cout<<"\n\n\tEl Disco no fue encontrado..! :S"<<endl;

    }

}

void CD::Eliminar()
{
    int i = 0;
    int reg = 0;
    int bandera = 0;
    CD aux;

    system("cls");
    cout<<"Ingresa el codigo del registro a eliminar: "<<endl;
    cin >>aux.Codigo;

    if(cont>0)
    {
        for(int i=aux.Codigo; i<cont-1; i++)
            this[i] = this[i+1];

        cont--;
    }
    else
    {
        cout<<"\n\tRegistro vacio..!";
    }

    cout <<"Registro Eliminado"<<endl;

    }




int Lista::Menu()
{
    int op = 0;
    int salir = 0;

Inicio->Agregar();
Inicio->Agregar();
Inicio->Agregar();
//Inicio->Agregar();
Inicio->Mostrar();

    //do
      //  {
            //system("cls");
    cout <<"\tSOFTWARE REGISTRO DE CD´S"<<endl;

    cout <<"Menu de Opciones"<<endl;
    cout <<"1.- Agregar"<<endl;
    cout <<"2.- Mostrar"<<endl;
    cout <<"3.- Consulta especifica"<<endl;
    cout <<"4.- Eliminar"<<endl;
    cout <<"5.- Salir"<<endl;
    cout <<"Ingresa opcion: ";
    cin >>op;
    getchar();

    switch(op)
    {
    case 1:
        Inicio->Agregar();
        break;
    case 2:
        Inicio->Mostrar();
        break;
    case 3:
        Inicio->Consulta();
        break;
    case 4:
        Inicio->Eliminar();
        break;
    case 5:
        exit(-1);
        break;
    }

    cout <<"Deseas Salir?... 1.-Si/2.-No: "<<endl;
    cin >>salir;
//system("pause");
   // }while(salir != 1);

    return salir;
}
