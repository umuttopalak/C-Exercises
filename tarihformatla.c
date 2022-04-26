#include <stdio.h>

int main() {
	
	int gun, ay, yil;
	
	printf("Tarih gir: ");
	scanf("%d%d%d",&gun,&ay,&yil);
	
	if (ay<1 || ay >12) {
		printf("Hatali ay\n");
		return -1;
	}
	
	if (gun < 1 || gun > 31) {
		printf("Hatali gun\n");
		return -1;
	}
	
	switch (ay) {
		case 2:
			if ((yil % 4 != 0 || (yil % 100 == 0 && yil % 400 != 0)) && (gun > 28)) {
				printf("Hatali gun");
				return -1;
			}
			else  if (gun > 29) {
				printf("Hatali gun");
				return -1;
			}
			break;
		case 4: case 6: case 9: case 11:
			if (gun > 30) {
				printf("Hatali gun");
				return -1;
			}
		default:
			if (gun >31) {
				printf("Hatali gun");
				return -1;
		}
	}
	
	switch (ay) {
		case 1:
			printf("%d/ocak/%d\n",gun,yil);
			break;
		case 2:
			printf("%d/subat/%d\n",gun,yil);
			break;
		case 3:
			printf("%d/mart/%d\n",gun,yil);
			break;
		case 4:
			printf("%d/nisan/%d\n",gun,yil);
			break;
		case 5:
			printf("%d/mayis/%d\n",gun,yil);
			break;
		case 6:
			printf("%d/haziran/%d\n",gun,yil);
			break;
		case 7:
			printf("%d/temmuz/%d\n",gun,yil);
			break;
		case 8:
			printf("%d/agustos/%d\n",gun,yil);
			break;
		case 9:
			printf("%d/eylul/%d\n",gun,yil);
			break;
		case 10:
			printf("%d/ekim/%d\n",gun,yil);
			break;
		case 11:
			printf("%d/kasim/%d\n",gun,yil);
			break;
		case 12:
			printf("%d/aralik/%d\n",gun,yil);
			break;
		default:
			break;
			
	}
	
	return 0;
}
