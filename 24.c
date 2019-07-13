#include <stdio.h>

// permütasyon heaplayan program 

int faktoriyel(int sayi);
int main () {
	
	int elemanSayisi , secimSayisi;
	printf("eleman sayısı giriniz:\n");
	scanf("%d",& elemanSayisi);
	printf("secim sayısı giriniz:\n");
	scanf("%d",& secimSayisi);
	int sonuc =faktoriyel(secimSayisi)/faktoriyel(secimSayisi-elemanSayisi);
	printf("permütasyon:%d",sonuc);
	}
	
int faktoriyel(int sayi){
	int sonuc=1;
	for(int i=1;i<=sayi;i++){
		sonuc*=i;
		}
		return sonuc;
	}	
