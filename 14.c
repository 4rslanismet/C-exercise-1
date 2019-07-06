#include<stdio.h>

// taban ve yüksekliği bilinen üçgenin alanını hesaplayan program

int main(){
	
	float taban,yukseklik;
	printf("taban giriniz:\n");
	scanf("%f",&taban);
	
	printf("yüksekliği giriniz:\n");
	scanf("%f",&yukseklik);
	
	float alan=taban*yukseklik/2;
	printf("üçgenin alalnı:%f",alan);
	

}
