#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){
	char atbilde;
	int n=0, v=0, j1=0, j2=0, j3=0, j4=0, j5=0, j6=0, j7=0, j8=0, j9=0, j10=0;
	
	//1.Jautajums
	cout<<"1.jautajums 						\n\n";
	cout<<"Kura sporta veida izmanto bumbu? \n\n";
	
	//Atbilzu varianti
	cout<<"a) Basketbols	\n";
	cout<<"b) Dailslidosana	\n";
	cout<<"c) Futbols		\n";
	cout<<"d) hokejs		\n\n";
	
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
	cout<<"2.jautajums \n\n";
	cout<<"Kuru gramatu sarakstija Anna Sakse? \n\n";
	
	//Atbilzu varianti
	cout<<"a) Suna ciema Zeni\n";
	cout<<"b) Kauja pie knipskas\n";
	cout<<"c) Lidojums uz meness\n";
	cout<<"d) Pasaka par ziediem\n\n";
	
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
		j1++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//3.Jautajums
	cout<<"3.jautajums 					\n\n";
	cout<<"Kura ir ""Livu"" dziesma?	\n\n";
	
	//Atbilzu varianti
	cout<<"a) Zilite\n";
	cout<<"b) Disnejlenda\n";
	cout<<"c) Ziemelmeitas\n";
	cout<<"d) Cetri balti krekli\n\n";
	
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
		j1++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//4.Jautajums
	cout<<"4.jautajums 									\n\n";
	cout<<"Kurs ir bijis latvijas valsts prezidents?	\n\n";
	
	//Atbilzu varianti
	cout<<"a) Karlis Caks		\n";
	cout<<"b) Alberts kviesis	\n";
	cout<<"c) Viktors zemgalis	\n";
	cout<<"d) Imants Ziedonis	\n\n";
	
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
		j1++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//5.Jautajums
	cout<<"5.jautajums 						\n\n";
	cout<<"Kura sporta veida izmanto nujas? \n\n";
	
	//Atbilzu varianti
	cout<<"a) Polo	\n";
	cout<<"b) Hokejs \n";
	cout<<"c) Regbijs\n";
	cout<<"d) Novuss \n\n";
	
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
		j1++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//6.Jautajums
	cout<<"6.jautajums 					\n\n";
	cout<<"Kurs ir Liepajas diktors? 	\n\n";
	
	//Atbilzu varianti
	cout<<"a) Arnis Krauze			\n";
	cout<<"b) Valters Krauze		\n";
	cout<<"c) Ansis Bogustovs		\n";
	cout<<"d) Kristaps Porzingis	\n\n";
	
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
	
	//7.Jautajums
	cout<<"7.jautajums 					\n\n";
	cout<<"Kurs ir liepajas aktieris? 	\n\n";
	
	//Atbilzu varianti
	cout<<"a) Gints Gravelis 		\n";
	cout<<"b) Katrina Tatarinova	\n";
	cout<<"c) Rezija Kalnina		\n";
	cout<<"d) Girts Kesters			\n\n";
	
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
		j1++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//8.Jautajums
	cout<<"8.jautajums 							\n\n";
	cout<<"Kurs ir eiropas savienibas valsts? 	\n\n";
	
	//Atbilzu varianti
	cout<<"a) Italija	\n";
	cout<<"b) Gvatemala	\n";
	cout<<"c) Gana		\n";
	cout<<"d) Latvija	\n\n";
	
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
		j1++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//9.Jautajums
	cout<<"9.jautajums 				\n\n";
	cout<<"Kura ir Latvijas upe? 	\n\n";
	
	//Atbilzu varianti
	cout<<"a) Nila 	\n";
	cout<<"b) Abava			\n";
	cout<<"c) Ieniseja		\n";
	cout<<"d) Kaulinujute			\n\n";
	
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
		j1++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	//10.Jautajums
	cout<<"10.jautajums 						\n\n";
	cout<<"Kura Latvijas pilseta ir tramvajs? 	\n\n";
	
	//Atbilzu varianti
	cout<<"a) Rezekne		\n";
	cout<<"b) Liepaja		\n";
	cout<<"c) Daugavpils	\n";
	cout<<"d) Saldus		\n\n";
	
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
		j1++;
    	break;
  		default:
    	cout<<"\ndriks tikkai atbildet ar a,b,c vai d \n\n";
}
	}
	n=0;
	//iztira ekranu
	system("CLS");
	
	cout<<"Jus esat atbildejusi uz visiem jautajumiem! \n\n";
	if(v == 10){
		cout<<"Vertejums "<<v<<" no 10 / Izcili!\n";
	}else if(v == 9 || 8){
		cout<<"Vertejums "<<v<<" no 10 / Loti labi!\n";
	}else if(v == 7 || 6){
		cout<<"Vertejums "<<v<<" no 10 / Labi!\n";
	}else if(v == 5 || 4){
		cout<<"Vertejums "<<v<<" no 10 / Pienemami!\n";
	}else if(v == 3 || 2 || 1 || 0){
		cout<<"Vertejums "<<v<<" no 10 / Svaki!\n";
	}
	
	while(j1 == 1){
	cout<<"1.jautajums 						\n\n";
	cout<<"Kura sporta veida izmanto bumbu? \n\n";
	
	cout<<"[+] a) Basketbols	\n";
	cout<<"[-] b) Dailslidosana	\n";
	cout<<"[+] c) Futbols		\n";
	cout<<"[-] d) hokejs		\n\n";
		j1--;
	}
	while(j2 == 1){
	cout<<"2.jautajums \n\n";
	cout<<"Kuru gramatu sarakstija Anna Sakse? \n\n";
	
	cout<<"[+] a) Pasaka par ziediem\n";
	cout<<"[-] b) Kauja pie knipskas\n";
	cout<<"[+] c) Lidojums uz meness\n";
	cout<<"[-] d) Suna ciema Zeni\n\n";
		j2--;
	}
	while(j3 == 1){
	cout<<"3.jautajums 					\n\n";
	cout<<"Kura ir ""Livu"" dziesma?	\n\n";
	
	cout<<"[+] a) Zilite				\n";
	cout<<"[-] b) Disnejlenda			\n";
	cout<<"[+] c) Cetri balti krekli	\n";
	cout<<"[-] d) Ziemelmeitas			\n\n";
		j3--;
	}
	while(j4 == 1){
	cout<<"4.jautajums 									\n\n";
	cout<<"Kurs ir bijis latvijas valsts prezidents?	\n\n";
	
	cout<<"[+] a) Karlis Caks		\n";
	cout<<"[+] b) Alberts kviesis	\n";
	cout<<"[-] c) Viktors zemgalis	\n";
	cout<<"[-] d) Imants Ziedonis	\n\n";
		j4--;
	}
	while(j5 == 1){
	cout<<"5.jautajums 						\n\n";
	cout<<"Kura sporta veida izmanto nujas? \n\n";
	
	cout<<"[+] a) Hokejs	\n";
	cout<<"[-] b) Polo		\n";
	cout<<"[+] c) Regbijs	\n";
	cout<<"[-] d) Novuss	\n\n";
		j5--;
	}
	while(j6 == 1){
	cout<<"6.jautajums 					\n\n";
	cout<<"Kurs ir Liepajas diktors? 	\n\n";
	
	cout<<"[+] a) Arnis Krauze			\n";
	cout<<"[-] b) Valters Krauze		\n";
	cout<<"[+] c) Ansis Bogustovs		\n";
	cout<<"[-] d) Kristaps Porzingis	\n\n";
		j6--;
	}
	while(j7 == 1){
	cout<<"7.jautajums 					\n\n";
	cout<<"Kurs ir liepajas aktieris? 	\n\n";
	
	cout<<"[+] a) Rezija Kalnina		\n";
	cout<<"[+] b) Katrina Tatarinova	\n";
	cout<<"[-] c) Gints Gravelis		\n";
	cout<<"[-] d) Girts Kesters			\n\n";
		j7--;
	}
	while(j8 == 1){
	cout<<"8.jautajums 							\n\n";
	cout<<"Kurs ir eiropas savienibas valsts? 	\n\n";
	
	cout<<"[+] a) Italija	\n";
	cout<<"[-] b) Gvatemala	\n";
	cout<<"[-] c) Gana		\n";
	cout<<"[+] d) Latvija	\n\n";
		j8--;
	}
	while(j9 == 1){
	cout<<"9.jautajums 				\n\n";
	cout<<"Kura ir Latvijas upe? 	\n\n";
	
	cout<<"[+] a) Kaulinujute	\n";
	cout<<"[+] b) Abava			\n";
	cout<<"[-] c) Ieniseja		\n";
	cout<<"[-] d) Nila			\n\n";
		j9--;
	}
	while(j10 == 1){
	cout<<"10.jautajums 						\n\n";
	cout<<"Kura Latvijas pilseta ir tramvajs? 	\n\n";
	
	cout<<"[-] a) Rezekne		\n";
	cout<<"[+] b) Liepaja		\n";
	cout<<"[+] c) Daugavpils	\n";
	cout<<"[-] d) Saldus		\n\n";
		j10--;
	}
	
}
