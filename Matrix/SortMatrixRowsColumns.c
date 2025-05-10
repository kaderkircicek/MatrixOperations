#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void MatrisYazdir(int n,int A[][n])
{

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

}

void MatrisSatirSirala(int n,int A[][n])
{
  for(int s=0 ; s<n ; s++)
  {

   for (int i=0 ; i< n-1 ; i++)
    {
      for (int j=0 ; j<n-1 ; j++)
 {
      if (A[s][j]>A[s][j+1])
      {
          int temp=A[s][j];
          A[s][j]=A[s][j+1];
          A[s][j+1]=temp;
      }

 }
 }
 }
}

void MatrisSutunSirala(int n,int A[][n])
{
  for(int s=0 ; s<n ; s++)
  {

   for (int i=0 ; i< n-1 ; i++)
    {
      for (int j=0 ; j<n-1 ; j++)
 {
      if (A[j][s]>A[j+1][s])
      {
          int temp=A[j][s];
          A[j][s]=A[j+1][s];
          A[j+1][s]=temp;
      }

 }
 }
 }
}

void MatrisDiziGibiTamSirala(int n, int A[])
{
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=0 ; j<n-1-i ; j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;

           }
       }
    }

}



 int main()
 {
     int N;
     srand(time(NULL));
      printf("Lutfen kare matrisin boyutunu giriniz!\n");
      scanf("%d",&N);
      int matris[N][N];

      printf("Rastgele atanan matris:");

    for(int i=0 ; i<N ; i++)
   {
    for(int j=0 ; j<N ; j++)
    {
        matris[i][j]=rand()%10;
    }
    printf("\n");
   }


   MatrisYazdir(N,matris);
   printf("Matriste satirlarin siralanmis hali:\n");
   MatrisSatirSirala(N,matris);
   MatrisYazdir(N,matris);
    printf("Matriste sutunlarin siralanmis hali:\n");
   MatrisSutunSirala(N,matris);
   MatrisYazdir(N,matris);
   MatrisDiziGibiTamSirala(N*N,matris);
   printf("Matrisin tam olarak siralanmis hali:\n");
   MatrisYazdir(N,matris);


return 0;
 }
