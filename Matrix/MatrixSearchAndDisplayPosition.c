#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void MatrisYazdir(int n,int A[][n])
{
    int i,j;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            printf("%d\t",A[i][j]);
        }
        printf("\n");
    }

}

void MatristeAra(int n,int A[][n],int aranan)
{

   for (int i=0 ; i< n ; i++)
    {
      for (int j=0 ; j<n ; j++)
 {
      if (A[i][j]==aranan)
      { printf("%d sayisi matriste %d .satir %d. sutundadir\n",aranan,i,j);
        break;
      }
 }
 }
 }

 int main()
 {
     int N,i,j;
     srand(time(NULL));
      printf("Lutfen kare matrisin boyutunu giriniz!\n");
      scanf("%d",&N);
      int matris[N][N];

      printf("Rastgele atanan matris:\n");
      
    for(int i=0 ; i<N ; i++)
   {
    for(int j=0 ; j<N ; j++)
    {
        matris[i][j]=rand()%10;
    }
    printf("\n");
   }


   MatrisYazdir(N,matris);
   int ara ;
   printf("Matriste aradiginiz degeri giriniz:\n");
   scanf("%d",&ara);
   MatristeAra(N,matris,ara);


return 0;
 }

