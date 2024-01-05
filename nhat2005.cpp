#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 // yeu cau 1 
int main()
   { FILE * FP;
    char filename[67], ch;
    printf ("Filename: " );
    gets (filename);
   if(( fp = fopen (filename, "w")) == NULL )
    { printf ("create file error \n");
     exit (1);
    }
  while (( ch = getche() ) != '\r')
      putc ( ch, fp );
   fclose ( fp );
   return 0;
   }
   // yeu cau 2 
   int main()
   { FILE * fp;
   char filename[67],ch;
   printf ( "filename: " );
   gets ( filename );
   if ((fp = fopen(filename,"r")) == NULL)
   { printf ("Open file eror \n");
   exit(1);
   } 
   while (( ch = getc(fp)) !=EOF )
   printf ( "%c ",ch);
   fclose ( fp);
   return 0;
   }
   //yêu cau 3 
   int main ()
    { int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=3;
    FILE *fp;
    char path[50];
    
    printf("\nnhap duong dan:");
    fflush(sdtin);
    gets(path);
    fp=fopen(path,"wt");
    if (fp=NULL)
    { 
      printf("\nloi mo file";
      exit(0);
      }
    else 
    { 
      fprintf(fp,"so dong,cot la %d\n",m);
      for (int i=0;i<m;i++)
      { 
        for (int j=0;j<m;j++)
        { 
          fprintf(fp,"%3d",a[i][j]);
         }
        fprintf(fp,"\n");
        }
       fclose(fp);
       }
   }
   //yeu cau 4 
   typedef struct 
   { 
     char Ma[10];
     char HoTen[40];
    } SinhVien;
    void ReadFile(char *Filename);
    void WriteFile(char *filename);
    void Search(char *Filename);
    
    int main()
    { 
      int c;
      for(;;)
      { 
       printf("\n \t8-")
    
   
