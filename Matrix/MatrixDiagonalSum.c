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
 float toplam1=0.0;
 float toplam2=0.0;

    for(int i = 0; i < n; i++) {
        toplam1= toplam1+matris[i][i];
    }

    for(int i = 0; i < n; i++) {
        toplam2 =toplam2+ matris[i][n-i-1];
    }

    printf("\nMatrisin kosegen elemanlari toplami:%f'dir.", toplam1 + toplam2);

    return 0;
}
