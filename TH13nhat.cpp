#include<stdio.h>
#include<conio.h>
#include<string.h>
//yeu cau 1 
 /*int fibonacci(int n){
 	 if (n< 0) { 
 	  return -1;
 	  } else if (n==0 || n ==1){
 	  	return n;
 	  } else { 
 	     return fibonacci(n - 1)+ fibonacci(n - 2);
 	   }
  } 
   int main() { 
   int i;
    printf("10  so dau tien cua day so Fibonacci: \n");
     for (i = 0; i< 10; i++) { 
     printf ("%d", fibonacci (i));
     } 
  }  
  //yeu cau 2
  long tinhGiaithua(int n) { 
  if (n > 0){
  	 return n * tinhGiaithua(n - 1);
  	 } else { 
  	   return 1;
  	 }
  } 
  int main()
   {
   	 int n;
   	 printf("\n Nhap so nguyen duong n:");
   	 scanf("%d",&n);
   	 printf("Giai thua cua %d la: %d \n", n, tinhGiaithua(n));
   	 } */
   	 //yeu cua 3 
   	 int tongN(int n);
   	 
   	 int main() {
   	 	int i,n, tinhtongN;
   	 	
   	 	printf("Nhap mot so nguyen duong: ");
   	 	scanf("%d",&n);
   	 	tinhtongN = tongN(n);
   	 	printf("\n Tong cac so tu 1 toi %d la: %d", n, tinhtongN);
   	 	
   	 	return (0);
   	 } 
   	 int tongN(int n) { 
   	 int tinhtong;
   	 if (n == 1 ) { 
   	  return (1);
   	  } else { 
   	  tinhtong = n + tongN(n - 1);
   	  }
   	  return (tinhtong);
   	  }
   	  
