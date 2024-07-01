#include<iostream>
using namespace std;

int main(){
	float s, cc, n , pv;
	int i = 0;
	s = 0;
	cc = 0;
	cout<<"Ingrese la cantidad de datos: "; cin>>n;
	float A[30];
	for(i=0; i<n; i++){
		cout<<"Ingrese el elemento #"<<i+1<<endl; cin>> A[i];
		s = s + A[i];
		if(A[i] == 0){
			cc++;
		}
	}
	pv = (cc/n)*100;
	cout<<"La sumatoria de datos es : "<<s<<endl<<"Porcentajes de valor cero: "<<pv<<"%"<<endl;
	
	return 0;
	
}