//iki boyutlu fibonacci serisini yazan program
#include<stdio.h>
int main (){
  int a,b=1;
  int sayi;
  printf("bir sayi giriniz:\n");
  scanf("%d",&sayi);

  for(int i=0;i<sayi;i++){
    int p=a;
    int q=b;
    for(int j=0;j<sayi;j++){
      int r =p+q;
      printf("%d",p);
      p=q;
      q=r;
    }
    printf("\n");
    int c=a+b;
    a=b;
    b=c;

  }

}
