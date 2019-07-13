#include <stdio.h>

//girilen bir sayıyı tersten yazdıran program

int main (){
	int sayi ;
	printf("bir sayi giriniz:\n");
	scanf("%d",&sayi);
	while(sayi !=0){
		printf("%d",(sayi%10));
		sayi/=10;
		}
	}
