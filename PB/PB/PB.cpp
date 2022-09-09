#include<iostream>
#include<string>

using namespace std;

string nombres[3];
string caracteristicas[3];
string clasificaciones[3];
string descripcion[3];
string genero[3];

int opcion, id = 1, alo;
bool a = true;
float precio, impuesto, total;


void main() {
	while (a) {
		cout << "<<<<<<<<<<Bienvenido a la tienda de manolito>>>>>>>>>>" << endl;
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "--------Menu Principal--------" << endl;
		cout << "\t1-.Agregar Articulo" << endl;
		cout << "\t2-.Modificar Articulo" << endl;
		cout << "\t3-.Eliminar Articulo" << endl;
		cout << "\t4-.Lista de Articulos Vigentes" << endl;
		cout << "\t5-.Limpiar Pantalla" << endl;
		cout << "\t6-.Salir" << endl;
		cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
		cout << "Eliga una opcion: "; cin >> opcion;
		cin.ignore();

		switch (opcion)
		{
		case 1:
		{
			for (int i = 0; i < 3; i++)
			{
				system("cls");
				cout << "Ingresa el nombre del videojuego " << i + 1 << ": ";
				getline(cin, nombres[i]);
				cout << "Ingrese el a" << char (164) << "o de lanzamiento: "; cin >> alo;
				cin.ignore();
				cout << "Ingrese la clasificacion del videojuego: ";
				getline(cin, clasificaciones[i]);
				cout << "Ingresa las caracteristicas: ";
				getline(cin, caracteristicas[i]);
				cout << "Ingresa la descripcion del videojuego: ";
				getline(cin, descripcion[i]);
				cout << "Ingrese el genero: ";
				getline(cin, genero[i]);
				cout << "Ingrese el precio unitario: ";
				cin >> precio;
				cin.ignore();
				cout << "Ingrese el impuesto: ";
				cin >> impuesto;
				total = precio + impuesto;
				cin.ignore();
				cout << "El precio total es: " << total;
				cin.ignore();
			}
			break;
		}
		case 2:
		{
			system("cls");
			cout << "Modificara un articulo..." << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "Eliminara un articulo..." << endl;
			break;
		}
		case 4:
		{
			system("cls");
			cout << "Lista de articulos vigentes: " << endl;
			for (int i = 0; i < 3; i++)
			{
				cout << id + i << ":" << nombres[i] << endl;
			}
			break;
		}
		case 5:
		{
			system("cls");
			break;
		}
		case 6:
		{
			system("cls");
			a = false;
			cout << "Usted esta saliendo...";
			break;
			
		}
		default:
		{
			cout << ">>>>>>>>>Opcion Incorrecta Volver a Intntarlo<<<<<<<<<" << endl;
			break;
		}
		}
	}
	system("pause");
}