#include <iostream>
#include <cmath>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define max 5000
void fuerza(char a[max] , char b[max] , int n , int m);
using namespace std;
int main() {
  int i , j , n , m;
  double t , inicio , fin;
  char a[max] , b[max];
  cout<<"****Conteo****"<<endl;
  cout<<"Ingrese la cadena: ";
  gets(a);
  cout<<"Ingrese la cadena que quiere buscar: ";
  cin>>b;
  n= strlen(a);
  m= strlen(b);

  fuerza(a , b , n , m);
}

void fuerza(char a[max] , char b[max] , int n , int m){
int k , i , j ,  band=0;
for (i=0 ; i<=n ; i++){
k=i; 
j=0;
while(a[k]==b[j] && j<=n ){
k++; j++;
if(j>n-1){
cout<<"Se encuentra en la posicion: "<<i+1<<endl;band=1;
}
else {
band=0;
}
}
}
}


