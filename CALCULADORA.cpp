#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void factorial();
void suma();
void resta();
void multiplicacion();
void division();

int main (){
	int op;
	

	cout<<"\n----------------------------------------";
	cout<<"\nBIENVENIDO A LA CALCULADORA VIRTUAL?";
	cout<<"\n----------------------------------------";
	cout<<"\n1) SUMA + :";
	cout<<"\n2) RESTA - :";
	cout<<"\n3) FACTORIAL ! :";
	cout<<"\n4) MULTIPLICACION *:";
	cout<<"\n5) DIVISION /:";
	cout<<"\n----------------------------------------";
	cout<<"\n ELIJA UNA OPCION:"; 
	cout<<">>>>>>>>>";cin>>op;
	
	
	switch(op) {
	case 1: suma();
	break;
		case 2: resta();
		break;
			case 3: factorial();
			break;
				case 4: multiplicacion();
				break;
					case 5:	division();
					break;
						
	}
return 0;
}


void factorial() {
	int numero, factorial =1;
	cout<<"Digite un numero:"; cin >>numero;

	for(int i=1;i<=numero;i++){
factorial = factorial * i;
}
	cout<<"El factorial del numero es:" <<factorial<<endl;
	system("pause");
}
void suma(){
int n1, n2, suma=0;
cout<<"Digite un numero:"; cin>>n1;
cout<<"Digite otro numero:"; cin>>n2;
suma= n1 + n2;
cout<<"\nLa Suma es:"<<suma<<endl;
}
void resta(){
int n1, n2, resta=0;
cout<<"Digite un numero:"; cin>>n1;
cout<<"Digite otro numero:"; cin>>n2;
resta= n1 - n2;
cout<<"\nLa Resta es:"<<resta<<endl;
}

void multiplicacion(){
int n1, n2, multiplicacion=0;
cout<<"Digite un numero:"; cin>>n1;
cout<<"Digite otro numero:"; cin>>n2;
multiplicacion= n1 * n2;
cout<<"\nLa Multiplicacion es:"<<multiplicacion<<endl;
}

void division(){
int n1, n2, div=0;
cout<<"Digite un numero:"; cin>>n1;
cout<<"Digite otro numero:"; cin>>n2;
div= n1 / n2;
cout<<"\nLa Division es:"<<div<<endl;
}


