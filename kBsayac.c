#include <stdio.h>

int main() {
	
	int kucuk[26] = {0};
	int buyuk[26] = {0};
	char a;
	int i;
	
	printf("%% ile sonlanan karakterler gir: \n");
	
	scanf("%c",&a);
	
 	while ( a!= '%') {
 		
 		if (a >= 'a' && a <= 'z')
 			kucuk[a -'a']++;
 		else if (a >= 'A' && a <= 'Z')
 			buyuk[a - 'A']++;
 		
		scanf("%c",&a); 	
	}
	
	printf("Kucuk harf sayilari:\n");
	for (i = 0; i<26; i++)
		printf("%c %d\t", 'a'+ i, kucuk[i]);
	printf("\n");	
	
	printf("Buyuk harf sayilari:\n");
	for (i = 0; i<26; i++)
		printf("%c %d\t",'A' + i, buyuk[i]);
	printf("\n");
	
	return 0;
}
