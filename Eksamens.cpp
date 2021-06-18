#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
	char atbilde;
	int n=0, v=0, j1=0, j2=0, j3=0, j4=0, j5=0, j6=0, j7=0, j8=0, j9=0, j10=0;
	
	//1.Jautajums
	cout<<"1.jautajums\n\n";
	cout<<"Kurs ir ievada kontroles loops?\n\n";
		
	//Atbilzu varianti
	cout<<"a) For loop\n";
	cout<<"b) If loop\n";
	cout<<"c) While loop\n";
	cout<<"d) Do-while loop\n\n";
	
	//nosaka vai ir atbildets pareizi vai nepareizi
	while(n == 0){
		cout<<"atbilde: "; 	cin>>atbilde;
	switch(atbilde) {
  		case 'a':case 'A':case 'c':case 'C':
    	cout<<"pareizi"; 	getch();
		n++;
		v++;
    	break;
  		case 'b':case 'B':case 'd':case 'D':
    	cout<<"nepareizi"; 	getch();
		n++;
		j1++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
		}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//2.Jautajums
	cout<<"2.jautajums\n\n";
	cout<<"Kada veida loops eksiste?\n\n";
	
	//Atbilzu varianti
	cout<<"a) Arejas kontroles\n";
	cout<<"b) Videjas kontroles\n";
	cout<<"c) Exit kontroles\n";
	cout<<"d) Ievada kontroles\n\n";
	
	//nosaka vai ir atbildets pareizi vai nepareizi
	while(n == 0){
		cout<<"atbilde: "; 	cin>>atbilde;
	switch(atbilde) {
  		case 'c':case 'C':case 'd':case 'D':
    	cout<<"pareizi"; 	getch();
		n++;
		v++;
    	break;
  		case 'b':case 'B':case 'a':case 'A':
    	cout<<"nepareizi"; 	getch();
		n++;
		j2++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
		}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//3.Jautajums
	cout<<"3.jautajums\n\n";
	cout<<"Kam janotiek lai saktos <Endless loop>?\n\n";
		
	//Atbilzu varianti
	cout<<"a) Nav noteikts izbeigsanas nosacijums\n";
	cout<<"b) Tiek izveidots <Endless loop>\n";
	cout<<"c) Nepareizais ievaddats tika ievadits\n";
	cout<<"d) Noraditie nosacijumi nekad neatbilst\n\n";
	
	//nosaka vai ir atbildets pareizi vai nepareizi
	while(n == 0){
		cout<<"atbilde: "; 	cin>>atbilde;
	switch(atbilde) {
  		case 'a':case 'A':case 'd':case 'D':
    	cout<<"pareizi"; 	getch();
		n++;
		v++;
    	break;
  		case 'b':case 'B':case 'c':case 'C':
    	cout<<"nepareizi"; 	getch();
		n++;
		j3++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
		}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//4.Jautajums
	cout<<"4.jautajums\n\n";
	cout<<"Kas ir <Entry control loop>?\n\n";
		
	//Atbilzu varianti
	cout<<"a) Kas parbauda pirms loop izpildes\n";
	cout<<"b) Ieprieks parbaudes cilpa\n";
	cout<<"c) Pec parbaudes cilpa\n";
	cout<<"d) Kas parbauda pec loop izpildes\n\n";
	
	//nosaka vai ir atbildets pareizi vai nepareizi
	while(n == 0){
		cout<<"atbilde: "; 	cin>>atbilde;
	switch(atbilde) {
  		case 'a':case 'A':case 'b':case 'B':
    	cout<<"pareizi"; 	getch();
		n++;
		v++;
    	break;
  		case 'c':case 'C':case 'd':case 'D':
    	cout<<"nepareizi"; 	getch();
		n++;
		j4++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
		}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//5.Jautajums
	cout<<"5.jautajums\n\n";
	cout<<"Kas ir <Exit control loop>?\n\n";
		
	//Atbilzu varianti
	cout<<"a) Ieprieks parbaudes cilpa\n";
	cout<<"b) Kas parbauda pec loop izpildes\n";
	cout<<"c) Kas parbauda pirms loop izpildes\n";
	cout<<"d) Pec parbaudes cilpa\n\n";
	
	//nosaka vai ir atbildets pareizi vai nepareizi
	while(n == 0){
		cout<<"atbilde: "; 	cin>>atbilde;
	switch(atbilde) {
  		case 'b':case 'B':case 'd':case 'D':
    	cout<<"pareizi"; 	getch();
		n++;
		v++;
    	break;
  		case 'a':case 'A':case 'c':case 'C':
    	cout<<"nepareizi"; 	getch();
		n++;
		j5++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
		}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//6.Jautajums
	cout<<"6.jautajums\n\n";
	cout<<"Kas notiek kad nosacijus klust <True>?\n\n";
		
	//Atbilzu varianti
	cout<<"a) Kods sak loopu pa jaunu\n";
	cout<<"b) Kods dodas talak\n";
	cout<<"c) Dodas uz loop sakumu\n";
	cout<<"d) Veidojas <Enless loop>\n\n";
	
	//nosaka vai ir atbildets pareizi vai nepareizi
	while(n == 0){
		cout<<"atbilde: "; 	cin>>atbilde;
	switch(atbilde) {
  		case 'a':case 'A':case 'c':case 'C':
    	cout<<"pareizi"; 	getch();
		n++;
		v++;
    	break;
  		case 'b':case 'B':case 'd':case 'D':
    	cout<<"nepareizi"; 	getch();
		n++;
		j6++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
		}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//7.Jautajums
	cout<<"7.jautajums\n\n";
	cout<<"Kas notiek kad nosacijus klust <False>?\n\n";
		
	//Atbilzu varianti
	cout<<"a) Kods apstajas\n";
	cout<<"b) Loops apstajas\n";
	cout<<"c) Dodas uz nakamo koda dalu\n";
	cout<<"d) Sak loop pa jaunu\n\n";
	
	//nosaka vai ir atbildets pareizi vai nepareizi
	while(n == 0){
		cout<<"atbilde: "; 	cin>>atbilde;
	switch(atbilde) {
  		case 'b':case 'B':case 'c':case 'C':
    	cout<<"pareizi"; 	getch();
		n++;
		v++;
    	break;
  		case 'a':case 'A':case 'd':case 'D':
    	cout<<"nepareizi"; 	getch();
		n++;
		j7++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
		}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//8.Jautajums
	cout<<"8.jautajums\n\n";
	cout<<"<While loops> atkartoti izpilda ciklu kamer nosacijums ir?\n\n";
		
	//Atbilzu varianti
	cout<<"a) Paties\n";
	cout<<"b) False\n";
	cout<<"c) Nepaties\n";
	cout<<"d) True\n\n";
	
	//nosaka vai ir atbildets pareizi vai nepareizi
	while(n == 0){
		cout<<"atbilde: "; 	cin>>atbilde;
	switch(atbilde) {
  		case 'a':case 'A':case 'd':case 'D':
    	cout<<"pareizi"; 	getch();
		n++;
		v++;
    	break;
  		case 'b':case 'B':case 'c':case 'C':
    	cout<<"nepareizi"; 	getch();
		n++;
		j8++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
		}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//9.Jautajums
	cout<<"9.jautajums\n\n";
	cout<<"Kurs loops ir kontrolets ar stavokli?\n\n";
		
	//Atbilzu varianti
	cout<<"a) For loop\n";
	cout<<"b) While loop\n";
	cout<<"c) If loop\n";
	cout<<"d) Do-while loop\n\n";
	
	//nosaka vai ir atbildets pareizi vai nepareizi
	while(n == 0){
		cout<<"atbilde: "; 	cin>>atbilde;
	switch(atbilde) {
  		case 'b':case 'B':case 'd':case 'D':
    	cout<<"pareizi"; 	getch();
		n++;
		v++;
    	break;
  		case 'a':case 'A':case 'c':case 'C':
    	cout<<"nepareizi"; 	getch();
		n++;
		j9++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
		}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//10.Jautajums
	cout<<"10.jautajums\n\n";
	cout<<"Kurs loops cikla beigas parbauda nosacijumu?\n\n";
		
	//Atbilzu varianti
	cout<<"a) For loop\n";
	cout<<"b) Do-while loop\n";
	cout<<"c) While loop\n";
	cout<<"d) If loop\n\n";
	
	//nosaka vai ir atbildets pareizi vai nepareizi
	while(n == 0){
		cout<<"atbilde: "; 	cin>>atbilde;
	switch(atbilde) {
  		case 'b':case 'B':case 'c':case 'C':
    	cout<<"pareizi"; 	getch();
		n++;
		v++;
    	break;
  		case 'a':case 'A':case 'd':case 'D':
    	cout<<"nepareizi"; 	getch();
		n++;
		j10++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
		}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	cout<<"Jus esat atbildejusi uz visiem jautajumiem! \n\n";
		switch(v) {
		case 10:
		cout<<"Vertejums "<<v<<" no 10 / Izcili!\n";
    	break;
  		case 9:case 8:
		cout<<"Vertejums "<<v<<" no 10 / Loti labi!\n\n";
		cout<<"Zem si teksta jus varat redzet uz visiem jautajumiem kurus jus atbildejat nepareizi\nKopa ar visam pareizam atbildem, prieks tiem jautajumiem\n\n";
    	break;
    	case 7:case 6:
		cout<<"Vertejums "<<v<<" no 10 / Labi!\n\n";
		cout<<"Zem si teksta jus varat redzet uz visiem jautajumiem kurus jus atbildejat nepareizi\nKopa ar visam pareizam atbildem, prieks tiem jautajumiem\n\n";
    	break;
    	case 5:case 4:
		cout<<"Vertejums "<<v<<" no 10 / Pienemami!\n\n";
		cout<<"Zem si teksta jus varat redzet uz visiem jautajumiem kurus jus atbildejat nepareizi\nKopa ar visam pareizam atbildem, prieks tiem jautajumiem\n\n";
    	break;
  		case 3:case 2:case 1:case 0:
		cout<<"Vertejums "<<v<<" no 10 / Svaki!\n\n";
		cout<<"Zem si teksta jus varat redzet uz visiem jautajumiem kurus jus atbildejat nepareizi\nKopa ar visam pareizam atbildem, prieks tiem jautajumiem\n\n";
    	break;
	}
	
	
	while(j1 == 1){
	cout<<"1.jautajums\n\n";
	cout<<"Kurs ir ievada kontroles loops?\n\n";
	
	cout<<"[+] a) For loop\n";
	cout<<"[-] b) If loop\n";
	cout<<"[+] c) While loop\n";
	cout<<"[-] d) Do-while loop\n\n";
		j1--;
	}
	while(j2 == 1){
	cout<<"2.jautajums\n\n";
	cout<<"Kada veida loops eksiste?\n\n";
	
	cout<<"[-] a) Arejas kontroles\n";
	cout<<"[-] b) Videjas kontroles\n";
	cout<<"[+] c) Exit kontroles\n";
	cout<<"[+] d) Ievada kontroles\n\n";
		j2--;
	}
	while(j3 == 1){
	cout<<"3.jautajums\n\n";
	cout<<"Kam janotiek lai saktos <Endless loop>?\n\n";
	
	cout<<"[+] a) Nav noteikts izbeigsanas nosacijums\n";
	cout<<"[-] b) Tiek izveidots <Endless loop>\n";
	cout<<"[-] c) Nepareizais ievaddats tika ievadits\n";
	cout<<"[+] d) Noraditie nosacijumi nekad neatbilst\n\n";
		j3--;
	}
	while(j4 == 1){
	cout<<"4.jautajums\n\n";
	cout<<"Kas ir <Entry control loop>?\n\n";
	
	cout<<"[+] a) Kas parbauda pirms loop izpildes\n";
	cout<<"[+] b) Ieprieks parbaudes cilpa\n";
	cout<<"[-] c) Pec parbaudes cilpa\n";
	cout<<"[-] d) Kas parbauda pec loop izpildes\n\n";
		j4--;
	}
	while(j5 == 1){
	cout<<"5.jautajums\n\n";
	cout<<"Kas ir <Exit control loop>?\n\n";
	
	cout<<"[-] a) Ieprieks parbaudes cilpa\n";
	cout<<"[+] b) Kas parbauda pec loop izpildes\n";
	cout<<"[-] c) Kas parbauda pirms loop izpildes\n";
	cout<<"[+] d) Pec parbaudes cilpa\n\n";
		j5--;
	}
	while(j6 == 1){
	cout<<"6.jautajums\n\n";
	cout<<"Kas notiek kad nosacijus klust <True>?\n\n";
	
	cout<<"[+] a) Kods sak loopu pa jaunu\n";
	cout<<"[-] b) Kods dodas talak\n";
	cout<<"[+] c) Dodas uz loop sakumu\n";
	cout<<"[-] d) Veidojas <Enless loop>\n\n";
		j6--;
	}
	while(j7 == 1){
	cout<<"7.jautajums\n\n";
	cout<<"Kas notiek kad nosacijus klust <False>?\n\n";
	
	cout<<"[-] a) Kods apstajas\n";
	cout<<"[+] b) Loops apstajas\n";
	cout<<"[+] c) Dodas uz nakamo koda dalu\n";
	cout<<"[-] d) Sak loop pa jaunu\n\n";
		j7--;
	}
	while(j8 == 1){
	cout<<"8.jautajums\n\n";
	cout<<"<While loops> atkartoti izpilda ciklu kamer nosacijums ir?\n\n";
	
	cout<<"[+] a) Paties\n";
	cout<<"[-] b) False\n";
	cout<<"[-] c) Nepaties\n";
	cout<<"[+] d) True\n\n";
		j8--;
	}
	while(j9 == 1){
	cout<<"9.jautajums\n\n";
	cout<<"Kurs loops ir kontrolets ar stavokli?\n\n";
	
	cout<<"[-] a) For loop\n";
	cout<<"[+] b) While loop\n";
	cout<<"[-] c) If loop\n";
	cout<<"[+] d) Do-while loop\n\n";
		j9--;
	}
	while(j10 == 1){
	cout<<"10.jautajums\n\n";
	cout<<"Kurs loops cikla beigas parbauda nosacijumu?\n\n";
	
	cout<<"[-] a) For loop\n";
	cout<<"[+] b) Do-while loop\n";
	cout<<"[+] c) While loop\n";
	cout<<"[-] d) If loop\n\n";
		j10--;
	}
}
