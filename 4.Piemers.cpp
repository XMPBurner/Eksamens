#include <iostream>
#include <string>
using namespace std;
int main(){
	string v;
	cout<<"Ievadiet vardu <code> :"; cin>>v;
	while(v != "code"){
		cout<<"\noops! Izskatas ka nepareizo vardu ierakstijat\n";
		cout<<"Bet jus varat atkartot\n";
		cout<<"\nIevadiet vardu ""code"" :"; cin>>v;
	}
	cout<<"\nJus ievadijat vardu <code> pareizi!";
}
