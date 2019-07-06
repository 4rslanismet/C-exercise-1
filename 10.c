#include <stdio.h>

//dikdörtgenin çevresini ve alanını hesaplayan program

int main (){
	
	int kisaKenar ,uzunKenar;
	printf("kısa kenar uzunluğunu giriniz:\n");
	scanf("%d",&kisaKenar);
	printf("uzun kenar uzunluğunu giriniz:\n");
	scanf("%d",&uzunKenar);
	printf("çevre:%d\nalan:%d\n",((kisaKenar*2)+(uzunKenar*2)),(uzunKenar*kisaKenar));
	
	
	}
