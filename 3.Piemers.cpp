#include <iostream>
using namespace std;
int main(){
	int a = 100, b = 15, i = 1;
	while(a>b){
		a-=5;
		b+=3;
		cout<<i<<"\n";
		i++;
	}
}
