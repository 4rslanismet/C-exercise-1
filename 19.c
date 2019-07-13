#include <stdio.h>

// klavyeden girilen taban ve üs kuvveti değerlerine göre üs alıp sonucu ekrana yazan program


int main(){
		int taban,kuvvet;
		int sonuc=1;
		printf("taban giriniz:\n");
		scanf("%d",&taban);
		printf("kuvvet giriniz:\n");
		scanf("%d",&kuvvet);
		for(int i=1;i<=kuvvet;i++){
			sonuc*=taban;
			}
			printf("sonuc=%d",sonuc);
	}

