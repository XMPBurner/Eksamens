#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	srand(time(0));
	int i = 0, n, x;
	n = rand()%10+1;
	cout<<"Dators ir izdomajis cipari no 1 - 10 \n";
	cout<<"Jums ir tris iespejas lai uzminetu kads ir sis cipars \n";

	while(i<3){
			cout<<"Atbilde : "; cin>>x;
		if(x == n){
			i = 4;
		}else if(x > n){
			cout<<"\n\nCipars ir mazaks\n\n";
		}else if(x < n){
			cout<<"\n\nCipars ir lielaks\n\n";
		}
			i++;
	}
	
	if(x == n){
		cout<<"\n\nJus uzminejat ciparu";
	}else{
		cout<<"\n\nJums nepaveicas uzminet ciparu, kas bija "<<n;
	}
}
