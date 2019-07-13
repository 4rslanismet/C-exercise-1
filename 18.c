#include <stdio.h>
// klavyeden başlangıç , bitiş ve adım miktarı sayılarını alan , başlangıç ve bitiş değerlerinin arasında kalan sayılar adım miktarına uygun şekilde toplayarak ekrana yazdıran program

int main (){
	int baslangic,bitis,adim,toplam;
	printf("baslangic degeri giriniz:\n");
	scanf("%d",&baslangic);
	printf("bitis degeri:\n");
	scanf("%d",&bitis);
	printf("adim degerini giriniz:\n");
	scanf("%d",&adim);
	toplam=0;
	for(int i=baslangic;i<=bitis;i+=adim){
		toplam+=i;
		}
	printf("toplam=%d",toplam);
	}
