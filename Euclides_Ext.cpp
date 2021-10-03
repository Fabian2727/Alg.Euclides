#include <iostream>
using namespace std;

int modulo (int a,int n)
{
	//a = q*n + r  //0 =< r < n
	int q, r;

	if (r<0)
	{
		q = q-1;
		r = a -(a / n) * n;
	}
	else
	{
		q = a / n;
		r = a - (q * n);
	}
        return r;
}
int euclides (int x, int y) //Algoritmo de Euclides, para hallar el gcd(x,y)
{
	int q,r;
	q = x/y;
	r = modulo(x,y);

	while (r!=0)
	{
		x = y;
		y = r;
		q = x/y;
		r = modulo(x,y);
		x = q*y + r;
	}
	return y;
}
int euclidesext(int a, int b) //Algoritmo extendido de Euclides, para hallar los valores de X y Y que cumplan la expresion d = a*x + b*y
{
	int r1,r2,s1,s2,t1,t2,d;
	r1 = a;
	r2 = b;
	s1 = 1;
	s2 = 0;
	t1 = 0;
	t2 = 1;
	d = euclides(a,b);
	int r, s, t;

	while (r2>0)
	{
		int q ;
		q = r1 / r2;
		r = r1 - (q*r2);
		r1 = r2;
		r2 = r;

		s = s1 - (q*s2);
		s1 = s2;
		s2 = s;

		t = t1 - (q*t2);
		t1 = t2;
		t2 = t;
	}
	cout<<d<<"="<<a<<"*"<<s1<<"+"<<b<<"*"<<t1<<endl;
	cout<<"x = "<<s1<<endl;
	cout<<"y = "<<t1<<endl;
	return s1;
}

int main(){

    int a,b,c,d;
	

	cout<<"Ingrese los números A y B:"<<endl;
	
	cout<<"a: "; cin>>a; 
	cout<<"b: "; cin>>b;
	d = euclides(a,b);
	
	cout<<"gcd(a,b): "<<d<<endl;
	
	cout<<"Euclides extendido: "<<endl;
	cout<<d<<" = "<<a<<"*x + "<<b<<"*y"<<endl;
	cout<<"======================================================="<<endl;
	euclidesext(a,b);

}

