#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
int n;
printf("Kare matrisin boyutuunu giriniz:");
scanf("%d",&n);
int matris[n][n];
srand(time(NULL));

for(int i=0 ; i<n ; i++)
{
    for(int j=0 ; j<n ; j++)
    {
       matris[i][j] = rand()%10;
    }
}

printf("Rastgele atanan matris:\n");
for(int i=0 ; i<n ; i++)
{
    for(int j=0 ; j<n ; j++)
    {
      printf("%d\t",matris[i][j]);
    }
    printf("\n");
}

printf("Sutun ortalamalari:\n");

    for (int j = 0; j < n; j++) {
        float toplam = 0.0;
        for ( int i = 0; i < n; i++) {
            toplam=toplam+ matris[i][j];
        }
        float ort = toplam / n;
        printf("%.2f ", ort);
    }
    printf("\n");


    printf("Satir ortalamalari:\n");
    for (int i = 0; i < n; i++) {
        float toplam1 = 0.0;
        for ( int j = 0; j < n; j++) {
            toplam1=toplam1+ matris[i][j];
        }
        float ort = toplam1 / n;
        printf("%.2f ", ort);
    }

    printf("\nMatristeki tum elemanlarin ortalamasi:\n");
    float toplam2;
    for(int i=0 ; i<n ; i++)
        {
        for ( int j = 0; j < n; j++) {
            toplam2=toplam2+ matris[i][j];
        }
        }
        float ort = toplam2 / (n*n);
        printf("%.2f ", ort);
    return 0;
}