#include <iostream>
#include <string>
using namespace std;

struct Personaje_1 {
 string nombre;
 int p_poder;
};

struct Personaje_2 {
 string nombre;
 int p_poder;
};

int main() 
{
	 
	 Personaje_1 p1;
	 Personaje_2 p2;
	 
	 cout<<"Ingrese el nombre del PRIMER personaje"<<"\n";
	 cin>>p1.nombre;
	 cout<<"Ingrese el poder del PRIMER personaje"<<"\n";
	 cin>>p1.p_poder;
	 
	 cout<<"Ingrese el nombre del SEGUNDO personaje"<<"\n";
	 cin>>p2.nombre;
	 cout<<"Ingrese el poder del SEGUNDO personaje"<<"\n";
	 cin>>p2.p_poder;
	 
	  
	  if (p1.p_poder > p2.p_poder)
	  {
	  	cout <<p1.nombre << " :tiene "<<p1.p_poder-p2.p_poder<< " puntos de poder mas"<<" que "<<p2.nombre<<"\n";
	  }
	  else if (p2.p_poder > p1.p_poder)
	  {
	  	cout <<p2.nombre << " :tiene "<<p2.p_poder-p1.p_poder<< " puntos de poder mas"<<" que "<<p1.nombre<<"\n";
	  }else
	  {
	  	cout << "Ambos tienen el mismo poder"<<"\n";
	  }
   
 	return 0;
}


