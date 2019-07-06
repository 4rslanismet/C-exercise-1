#include<stdio.h>

//kürenin alanını ve hacmini hesaplayan program

int main(){ 
	float Pi=3.14;
	int yaricap;
	printf("kürenin yarıçapını giriniz:\n");
	scanf("%d",&yaricap);
	float hacim=4*Pi*(yaricap*yaricap*yaricap)/3;
	float alan=4*Pi*(yaricap*yaricap);
	printf("hacim:%f\nalan:%f\n",hacim ,alan);
	
	}
