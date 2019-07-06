#include <stdio.h>

// iki sayı üzeirinde temel dört matematiksel işlem yapan porgram
int main()
{	int sayi1=0 ;
	int sayi2=0;
	int toplam=0;
	int carpim;
	float bolum,kalan;
	printf("bir sayi giriniz:\n");
	scanf("%d",&sayi1);
	printf("bir sayi giriniz:\n");
	scanf("%d",&sayi2);
	toplam=sayi1+sayi2;
	carpim=sayi1*sayi2;
	bolum=sayi1/sayi2;
	kalan=sayi1-sayi2;
	printf("toplam:%d\nkalan:%f\ncarpim:%d\nbolum:%f\n",toplam,kalan,carpim,bolum);
}
