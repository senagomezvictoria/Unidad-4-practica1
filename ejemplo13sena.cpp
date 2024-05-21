#include <iostream>
#include <cstring>
using namespace std;

{
float aux, numeros[10];
int i,j,n=10;
for (i=0;i<n;i++){
 cout<<"Escriba un número"<<endl;
 cin>>"%f",&numeros[i];
 }
for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
 {
 if(numeros[i]<numeros[j])
 {
 aux=numeros[i];
 numeros[i]=numeros[j];
 numeros[j]=aux;
 }
 }
}
for (i=n-1;i>=0;i--){
 cout<<"%f\n",numeros[i]<<endl;
}
 
system("PAUSE"); 
 return 0;
}

