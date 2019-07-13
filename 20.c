#include <stdio.h>

// klavyeden girilen bir sayının basamklarını toplayarak ekrana yazdıran program

int main(){
	int sayi,toplam=0;
	printf("sayi giriniz:\n");
	scanf("%d",&sayi);
	while(sayi !=0){
		toplam+=sayi%10;
		sayi/=10;
		}
	printf("toplam=%d",toplam);
	
	}
