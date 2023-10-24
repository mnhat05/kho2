#include<stdio.h>
#include<conio.h.>
 // ham nhap
	void nhap  (int a[][100], int m,int n)
	 {  
	printf("nhap so hang:"); scanf("%d",&m);
	  printf("nhap so cot:"); scanf("%d",&n);
	  if (m<0 && n<0) printf ("nhap lai");
	   for(int i=0;i<m;i++)
	   { 
	   for( int j=0;j<n;j++)
	   printf("a[%d][%d=",i,j);
	   scanf("%d",&a[i][j]);
	   }
     }\
// ham xuat
	void xuat ( int a[][100],int m,int n)
	{  
	for (int i=0;i<m;i++)
	  { 
	  for (int j=0;j<n;j++)
	    { 
	    printf("\n%4d", a[i][j]);
	    }
	   }
     }
// tim max
     void Max( int a[][100],int &m ,int &n)
     {
    int Max;
	Max =a[0][0];
    for(int i=0; i<m;i++)
	 {
        for (int j=0; j<n; j++) 
		{
            if (a[i][j]> Max)
                Max=a[i][j];
        }
     }
     printf("\nGia tri max tren 1 cot cua mang la %5d", Max);
     } 
	 //tim Min        
       void Min( int a[][100],int &m ,int &n)
       {
    int Min;
	Min =a[0][0];
    for (int i=0; i<m;i++)
	 {
        for (int j=0; j<n; j++) 
		{
            if (a[i][j]< Min)
                Min= a[i][j];
             }
         }
     printf("\nGia tri min tren 1 cot cua mang la %5d", Min);
	 }    
    
  int main()
  { 
  int a[100][100];
  int m, int n;
  nhap (a,m,n);
  xuat (a,m,n);
  Max(a,m,n);
  Min(a,m,n);
  return 0; 
  }
	    
