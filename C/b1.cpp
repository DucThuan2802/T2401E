#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void GiaiPT1(float a,float b);
void GiaiPT2(float a,float b,float c);
int main(){
	float a,b,c;
	int e;
	do{
		printf("Chon 1 trong 2\n");
		printf("Giai PT bac 1 nhap 1\n");
		printf("Giai PT bac 2 nhap 2\n");
		scanf("%d",&e);
	}while(e<0&&e>2);
	if(e==1){
		printf("nhap a: ");
		scanf("%f",&a);
		printf("nhap b: ");
		scanf("%f",&b);
		GiaiPT1(a,b);
	}
	else if(e==2){
		printf("nhap a: ");
		scanf("%f",&a);
		printf("nhap b: ");
		scanf("%f",&b);
		printf("nhap c: ");
		scanf("%f",&c);
		GiaiPT2(a,b,c);
	}
}
void GiaiPT1(float a,float b){
	float x;
	if(a==0&&b!=0){
		printf(" phuong trinh vo nghiem");
	}
	else if(a==0&&b==0){
		printf("phuong trinh vo so nghiem");
	}
	else{
	x=-b/a;
	printf("ax+b is: %f",x);
	}
}
void GiaiPT2(float a,float b,float c){
	int d;
	if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    printf("Phuong trinh co vo so nghiem!");
                else
                    printf("Phuong trinh vo nghiem!");
            }
        else{
        double c=-c;
        double b;
            printf("Phuong trinh co nghiem duy nhat la: %f",-c/b);}
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf("Phuong trinh vo nghiem!!!");
        else if (d==0)
            printf("Phuong trinh co nghiem kep la: %f",-b/(2*a));
        else
            printf("Phuong trinh co 2 nghiem phan biet la: %f,%f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));    
    }    
}
