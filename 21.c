#include <stdio.h>

//girilen sayının asal olup olmadığını kontrol eden program

int main (){
	int sayi , t=0;
	printf("bir sayi giriiniz:\n");
	scanf("%d",&sayi);
	for(int i=0;i<sayi;i++){
	
		if (sayi%i==0){
			t++;}
		}
		if (t==2){
			printf("girilen sayı asaldır");}
		else{
		printf("girilen sayi asal değildir");
		}
	}
