//girilen sayı kadar asal sayı yazdıran program
#include<stdio.h>
int main (){

  int sayi;
  printf("kaç tane asal sayı yazdırmak istioyrsunuz:\n");
  scanf("%d",&sayi);

  int sayac=0;
  int n=2;

  while(sayac<sayi){
    int asal=1;
    for(int i=2;i<sayi;i++){
      if(n%i==0){
        asal=0;
      }
    }
    if(asal==1){
      printf("%d",n);
      sayac++;
    }
    n++;
  }
}
