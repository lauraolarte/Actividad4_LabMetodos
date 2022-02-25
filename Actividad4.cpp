#include <iostream>
#include <math.h>
using namespace std;
//PUNTO 1-----------------------------------------------------------------------
double suma(int a, double b[]){
        double sumar=0;
	for(int i=0;i<a;i++){
	sum+=b[i];
}
	cout<<"El resultado de la suma es:" <<sumar<<endl;
	return sumar;
}
//PUNTO 2-----------------------------------------------------------------------
double cuadrados(int a, double b[]){
        double suma_cuadrados=0;
	for(int i=0;i<a;i++){
		sum+=pow(b[i],2);
	}
	cout<<"El resultado de la suma de los cuadrados es: "<<suma_cuadrados<<endl;
	return suma_cuadrados;
}
//PUNTO 3-----------------------------------------------------------------------
int binario(int a){
    if(a>1) 
    binario(a/2);
    cout<<a%2;
}
int main(){
    int a;
    do{
        cout<<"aIngrese un número: ";
        cin>>a;
            if(a<0) cout<<"\aIngrese un múmero entero y positivo";
    }
    while(a<0);
    cout<<endl;
    cout<<"\aNumero:"<<a<<endl;
    cout<<"\a Binario:";
    binario(a);
 
    return 0;
}
//PUNTO 4-----------------------------------------------------------------------
int main()
{
    int a[20];
    int entero;
    int residuo; 
    int rta, i = 0;

    cout << "Introduce un numero entero : " << endl;
    cin >> entero;

    do
    {
        residuo = entero % 16;
        rta = entero / 16;
        a[i] = residuo;
        entero = rta;
        i++;
    } while (rta > 15);

    a[i] = rta;

    cout << "El número hexadecimal es: ";

    for (int b = i; b >= 0; b--)
    {
        if (a[b] == 10)
        {
            cout << "A";
        }
        else if (a[b] == 11)
        {
            cout << "B";
        }
        else if (a[b] == 12)
        {
            cout << "C";
        }
        else if (a[b] == 13)
        {
            cout << "D";
        }
        else if (a[b] == 14)
        {
            cout << "E";
        }
        else if (a[b] == 15)
        {
            cout << "F";
        }
        else
        {
            cout << a[b];
        }   
    }
    cout << endl;
    
}
//PUNTO 5-----------------------------------------------------------------------
int main()
{
    int minimo=1000, maximo=0;
    float a;
     
    cout<< "Introduce 10 numeros: ";
    for(int i=0; i < 10; i++) {
        cin>> a;
         
        if(a <= minimo)
            minimo = a;
        if(a >= maximo)
            maximo = a;
         
    }
     
    cout<<"\nEl minimo es: "<<minimo;
    cout<<"\nEl maximo es: "<<maximo;
    return 0;
}

//PUNTO 6-----------------------------------------------------------------------
int factorial(int n){
	int m=1;
	for(int i=1;i<=n;i++)
		m*=i;
	cout<<"Factorial: "<<m<<endl; //muestra en pantall el factorial
	return m;
}
int fibonacci( int a )
{
    if(a==0 || a==1)
       return a;
    else
       return fibonacci(a - 2) + fibonacci(a - 1);
}
 
int main()
{
    int a;
    int b = 0, i = 0;;
    std::cout << "\aIngrese un numero: "; std::cin >> a;
    std::cout<<"\aLa serie de Fibonacci es: ";
 
    while( fibonacci(i) <= a ) {
        if( fibonacci(i) != 0 )
          std::cout << ", ";
 
        std::cout << fibonacci(i);
        i++;
    }
 
    std::cout << std::endl;
 
    return 0;
}
int main(){
	int n;
	cout<<"Ingrese la cantidad de números: ";cin>>n;
	double a[n]; //={1,2,3};
	a[0]=0;

	for (int i=0;i<n;i++){
		cout<<"Ingrese valor "<<i<<" ";cin>>a[i];
	}
	//Llama a la suma de números
	suma(n,a);
	//Llama a la función factorial
	factorial(5); //calcula 5!
	return 0;
}
//PUNTO 7-----------------------------------------------------------------------
int main() {
    int a, suma = 0, entero;
    cout << "Ingrese un numero entero: ";
    cin >> entero;
    while(entero != 0) {
        a = entero % 10;
        entero /= 10;
        suma += a;
    }
    cout << "La suma de los digitos es: " << suma << endl;
    return 0;
}

