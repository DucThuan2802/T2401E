#include<stdio.h>
#define MAX 100
void hoanVi(int &a, int&b);
int sapXepGiam(int arr[],int n);
int tongSoLe(int arr[],int n);
int tongSoChan(int arr[],int n);
int tongSoNT(int arr[],int n);
void soLanXuatHien(int arr[],int n);
int tongMang(int arr[],int n);
void XuatMang(int arr[],int n);
bool KTSNT(int x);
int main(){
	int e,kq2,kq3,kq4,n,Array[MAX];
	printf("nhap so phan tu trong mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap phan tu so %d: ",i);	
		scanf("%d",&Array[i]);
	}
	printf("chon tac vu can thuc hien:\n");
	printf("1.Sap xep mang theo chieu giam dan\n");
	printf("2.In ra tong cac so le trong mang\n");
	printf("3.In ra tong cac so chan trong mang\n");
	printf("4.In ra tong cac so nguyen to trong mang\n");
	printf("5.Tim so lan xuat hien trong mang\n");
	printf("6.Tong cac phan tu trong mang\n");
	do{
	scanf("%d",&e);
	}while(e<=0||e>6);
	if(e==1){
		sapXepGiam(Array,n);
		XuatMang(Array,n);
	}
	else if(e==2){
		kq2=tongSoLe(Array,n);
		printf("tong so le la: %d",kq2);
	}
	else if(e==3){
		kq3=tongSoChan(Array,n);
		printf("tong so chan la: %d",kq3);
	}
	else if(e==4){
		kq4=tongSoNT(Array,n);
		printf("tong so nguyen to la: %d",kq4);
	}
	else if(e==5){
		soLanXuatHien(Array,n);
	}
	else if(e==6){
		tongMang(Array,n);
	}
}
void hoanVi(int &a, int &b)
{
	int temp = a;
	a = b; 
	b = temp;
}
int sapXepGiam(int arr[], int n)
{
	for (int i = 0;i<n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
				hoanVi(arr[i], arr[j]);
		}
	}
}
int tongSoLe(int a[], int n)
{
	int i, tong=0, flag=0;
	for(i=0; i<n; i++)
		if(a[i]%2!=0)
		{
			flag=1;
			tong = tong + a[i];
		}
		if(flag==1)
			return tong;
		return -1;		
}
void XuatMang(int arr[], int n)
{
	for(int i=0; i<n; i++)
		printf("phan tu thu %d la: %d\n",i,arr[i]);
}
int tongSoChan(int arr[], int n)
{
	int i, tong=0, flag=0;
	for(i=0; i<n; i++)
		if(arr[i]%2==0)
		{
			flag=1;
			tong = tong + arr[i];
		}
		if(flag==1)
			return tong;
		return -1;		
}
bool KTSNT(int x)
{
	/*int dem=0;
	for(int i=1; i<=x; i++)
		if(x%i==0)
			dem++;
	if(dem==2)
		return true;
	return false;*/

	if(x<2)
		return false;
	for(int i=2; i<=x/2; i++)
		if(x%i==0)
			return false;
	return true;
}

int tongSoNT(int arr[], int n)
{
	int tong=0;
	for(int i=0; i<n; i++)
		if(KTSNT(arr[i])==true)
			tong = tong + arr[i];
		return tong;
	return -1;
}
void soLanXuatHien(int arr[], int n)
{
	int x;
	printf("nhap so can tim: ");
	scanf("%d",&x);
	int DemPTuX=0;
	for(int i=0; i<n; i++)
		if(arr[i]==x)
			DemPTuX = DemPTuX + 1;
	printf("so phan tu %d xuat hien trong mang la: %d",x,DemPTuX);
}
int tongMang(int arr[],int n){
	int x=0;
	for(int i=0;i<n;i++){
		x=x+arr[i];
	}
	printf("tong cac phan tu trong mang la: %d",x);
}

