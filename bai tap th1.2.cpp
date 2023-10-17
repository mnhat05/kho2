 #include<stdio.h>	
 #include<conio.h>

  int main()
{
int Max=0, i;
int a[5]={ 23,4,8,91,7 };
 for (i=0; i<5; i++); 
 {
   if (a[i]>=Max)
   Max=a[i];
}
   printf(" Gia tri lon nhat la =%d",Max);
   getch();
   
 int tong=0, tich=1, dem=0;
  for( i=0;i<5;i++)
  {tong= tong+a[i];
  tich= tich*a[i];
  dem=dem+1;
  }
  printf("\n Tong mang=%d",tong);
  printf("\n Tich mang=%d",tich);
  printf("\n So phan tu=%d",dem);
  getch();
} 
    
