#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

void abrir_archivo();
int main(){
	
	abrir_archivo();
	return 0;
}

void abrir_archivo(){
	ifstream archivo;
	string contenido;
	archivo.open("archivo.txt",ios::in);
	
	
	if (archivo.fail()){
	cout<<"No se pudo abrir el archivo";
	exit(1);
	}else{
		do{
			getline(archivo,contenido);
			cout<<contenido<<endl;
		} while(archivo.eof()==false);
	}
	
	archivo.close();
}
