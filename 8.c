#include <stdio.h>
// girilen sayının tek mi çift mi olduğunu bulan program
int main(){
	int sayi;
	printf("bir sayi girniz:\n");
	scanf("%d",&sayi);
	
	if(sayi%2==0)
		printf("girilen sayi çift");
	else 
			printf("girilen sayı tek");
	
}
