#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void crear_archivo();
int main(){
	
	crear_archivo();
	return 0;
}

void crear_archivo(){
	ofstream archivo;
	string nombre;
	archivo.open("archivo.txt",ios::out);
	
	
	if (archivo.fail()){
	cout<<"No se pudo abrir o crear el archivo";
	exit(1);
	}
	else{
	cout<<"cual es tu nombre: ";
	getline(cin,nombre);
	archivo<<nombre<<endl;;
	}
	
		
	archivo.close();
}
