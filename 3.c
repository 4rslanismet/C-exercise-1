//parametre olarak bir sayı alan ve bu sayıdan küçük en büyük asal sayıyı bulan program
#include<stdio.h>
int main(){
  int sayi;
  printf("bir sayı giriniz:\n");
  scanf("%d",&sayi);

  for(int i=sayi;i>=2;i--){
    int asal=1;
    for(int j=2;j<i;j++){
      if(i%j==0){
        asal=0;
      }
    }
      if(asal==1){
        printf("%d",i);
        break;
      }
  }
}
