#include <stdio.h>

// faktöriyel hesaplayan program 
int faktoriyel (int a);
int main (){
	int sayi;
	
	printf("faktöriyeli alınacak sayıyı giriniz:\n");
	scanf("%d",&sayi);
	
	printf("faktoriyel : %d",faktoriyel(sayi));
}

int faktoriyel ( int a){
	int sonuc=1;
	for(int i=1; i <= a;i++){
		sonuc*=i;}
		return sonuc;
	}
