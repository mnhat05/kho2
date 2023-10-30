#include<stdio.h>
#include<conio.h.>
 #include<string.h>
 #include<ctype.h>

    int main ()
    { char s1[50];
      char s2[50];
      //nhap
     printf("nhap vao chuoi s1:");
     gets(s1);
     printf("nhap vao chuois2:");
     gets(s2);
     //xuat
     chuyendoi(s1);
     printf("\n chuoi s1 la: %s",s1);
     chuyendoi(s2);
     printf("\n chuoi s2 la: %s",s2);
    }
 void chuyendoi( char s[]);
    { for ( int i=0;i<strlen(s);i++)
     { if s[i]==0s[i+1]==32

    }if( s[i]>=97&&s[i]<=122)
    s[i]=s[i]-32;
} else{ 
if (s [i]>=65&&s[i]<=90)
   s[i]=s[i]+32;
} 

