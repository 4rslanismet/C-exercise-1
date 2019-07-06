#include<stdio.h>

//girilen sayıların harmonik ortalamasını hesaplayan program

int main(){
	int say=0;
	double ort=0,sayi=0;
	do{
	printf("bir sayı giriniz / çıkmak için 0 giriniz:\n");
	scanf("%le",&sayi);
	if(sayi!=0){
	ort+=1.0/sayi;
	say++;
	}
}
	while(sayi!=0);
		ort=((double)say)/ort;
		printf("harmonik ortalama:%le",ort);
	
	
}
