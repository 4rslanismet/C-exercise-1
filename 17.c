#include <stdio.h>
// girilen iki sayının modunu 0 girilene kadar ekrana basan program
int main(){
	
	int sayi1 , sayi2;
	
	do{
	printf("\nbir sayi giriniz / çıkmak için 0 giriniz:\n");
	scanf("%d",&sayi1);
	printf("bir sayi giriniz:\n");
	scanf("%d",&sayi2);
	printf("%d mod %d :%d",sayi1,sayi2,(sayi1%sayi2));
}	while(sayi1 !=0 || sayi2 !=0);
}
