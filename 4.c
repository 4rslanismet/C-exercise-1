//girilen sayının 2 tabanında logirtmasını bulan program
#include<stdio.h>
int main(){
  int sayi , say;

  printf("bir sayı giriniz:\n");
  scanf("%d",sayi);
  say=0;
  for(int i=1;i<sayi;i*2){
    say++;
 }
  printf("%d",say);
}
