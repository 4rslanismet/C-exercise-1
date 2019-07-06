#include<stdio.h>

//girilen iki sayıyı karşılaştıran program

int main(){
	int sayi1,sayi2;
	printf("bir sayi giriniz:\n");
	scanf("%d",&sayi1);
	printf("bir sayi giriniz:\n");
	scanf("%d",&sayi2);

	if(sayi1==sayi2)
		printf("sayilar eşittir\n");
	else if (sayi1>sayi2)
		printf("%d büyüktür",sayi1);
	else if(sayi2>sayi1)
		printf("%d büyüktür",sayi2);
	
	}
