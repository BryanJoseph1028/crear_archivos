#include<iostream>
#include<stdlib.h>

using namespace std;

main(){
	string continuar;
	cout<<"Desea continuar si/no :";
	cin>>continuar;
	
	if (continuar=="si"){
	cout<<"Gracias.."<<endl;;
	}else{
		exit(1);
	}
	
	system("pause");
	
}
