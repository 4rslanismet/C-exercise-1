#include<stdio.h>

// kilometre cinsinden bir uzunluğu mile çeviren program

int main (){
	int km ;
	printf("mile çevirmek istediğiniz uzunluğu giriniz:\n");
	scanf("%d",&km);
	float mil=km*(0.621);
	printf("mil:%f\n",mil);
}
	
