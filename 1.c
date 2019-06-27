//-1 değeri girilinceye kadar ögrenci yası alan ve ortalamasını bulan program
#include<stdio.h>

int main () {
  int yas=0;
  int toplam=0;
  int say = 0;

  while(yas>=0){
    toplam=toplam+yas;
    say++;
    printf("ogrenci yasini giriniz:\n");
    scanf("%d",&yas);
  }
  say--;
  printf("\n ortalama yas : %f",(float)toplam/(float)say);
}
