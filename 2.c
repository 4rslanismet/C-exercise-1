//girilen sayıyı kare matris olarak alan ortadaki durumda 0 diğer yerlerde * basan
 #include<stdio.h>

 int main (){
   int sayi;
   printf("bir sayi giriniz:");
   scanf("%d",&sayi);
   for(int i=0;i<sayi;i++){
     for(int j=0;j<sayi;j++){
       if(i==sayi/2||j==sayi/2||(sayi%2==0&&(j==sayi/2-1||i==sayi/2-1)))
       printf("0");
       else
       printf("*");

     }
     printf("\n");
   }

 }
