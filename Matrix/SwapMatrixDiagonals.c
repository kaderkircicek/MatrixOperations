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

// Köşegenleri değiştir
    for(int i=0;i<n;i++) {
        int temp = matris[i][i];
        matris[i][i] = matris[i][n-i-1];
        matris[i][n-i-1] = temp;
    }

    printf("Matrisin koşegenleri degistirilmis hali:\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ", matris[i][j]);
        }
        printf("\n");
    }

return 0;

}
