#include <stdio.h>

int main(){
	
	float pi = 3.14;
	
	printf("Sekil seciniz:");
	char secim;
	scanf("%c",&secim);
	
	float kenar;
	float r;
	float k_kenar;
	float u_kenar;
	switch(secim){
		
		case 'k': case 'K':;
			//kare
			
			printf("kenar uzunlugunu girinz:");
			scanf("%f",&kenar);
			
			printf("karenin alani:%.2f\nkarenin cevresi:%.2f",kenar*kenar,kenar*4);
			break;
			
		case 'c': case 'C':
			//çember
			
			printf("yaricap giriniz:");
			scanf("%f",&r);
			
			printf("cemberin alani:%.2f\nCemberin cevresi:%.2f",pi*r*r,2*pi*r);
			break;
		
		case 'd': case 'D':
			//dikdörtgen	
		
			printf("Uzun kenari giriniz:");
			scanf("%f",&u_kenar);
			printf("kisa kenari giriniz:");
			scanf("f",&k_kenar);
			
			printf("Dikdortgenin alani:%.2f\nDikdortgenin cevresi:%.2f",u_kenar*k_kenar,((u_kenar*2)+(k_kenar*2)));
			break;
	}
	
	
	return 0;
}
