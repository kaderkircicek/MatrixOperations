#include <stdio.h>
#include <stdlib.h>

int fonk (int N,int matris3[][N])
{  int tek=0;
   int cift=0;

    for(int i=0 ; i<N ; i++)
    {
        for(int j=0 ; j<N ; j++)
        {
            if(matris3[i][j]%2==0)
                cift=cift+1;
            else
                tek=tek+1;
        }
    }

    printf("Tek sayilarin sayisi: %d\n",tek);
    printf("Cift sayilarin sayisi: %d\n",cift);

    return 0;

}

int main()
{   int n;
    printf("Lutfen kare matrisin boyutunu giriniz!\n");
    scanf("%d",&n);
    while(n<2)
    {
        printf("Hatalı giris yaptınız.\n");
        printf("Lutfen kare matrisin boyutunu tekrar giriniz!\n");
        scanf("%d",&n);
    }

    int matris[n][n];
    printf("Matrisin degerlerini giriniz:\n");
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
            {scanf("%d",&matris[i][j]);}
    }



    printf("Olusturdugunuz matris:\n");
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
            {printf("%d\t",matris[i][j]);}

            printf("\n");
}



  int kose_carpim = matris[0][0]*matris[n-1][0]*matris[0][n-1]*matris[n-1][n-1];

  printf("Matrisin koselerindeki sayilarin carpimi %d'dir.\n",kose_carpim);
  printf("Yeni matrisin olusturulabilmesi islemi icin:\n");

  int matris2[n][n];

       for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
            {printf("%d-%d\t",kose_carpim,matris[i][j]);}
        printf("\n");
   }


   for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
         { matris2[i][j]=kose_carpim-matris[i][j];

             if(matris2[i][j]<0)
            {
             matris2[i][j]=matris[i][j];
            }

         }

    }


   printf("Yeni matris:\n");


 for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
            {printf("%d\t",matris2[i][j]);}

            printf("\n");
     }

     fonk( n,matris2);


    return 0;
}
