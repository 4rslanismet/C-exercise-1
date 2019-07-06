#include<stdio.h>
#include<math.h>
// bir üçgenin pisagor teoremi ile hipotenüsünün hesaplayan program

int main(){
	int kenar1,kenar2;
	printf("dik kenar giriniz:\n");
	scanf("%d",&kenar1);
	printf("dik kenar giriniz:\n");
	scanf("%d",&kenar2);
	float hipo=(kenar1*kenar1 + kenar2*kenar2);
	printf("hipotenüs:%f",hipo);
}
