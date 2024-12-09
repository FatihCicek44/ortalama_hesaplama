#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	printf("** Ortalama Hesaplama **\n\n");
	int dizi[10], i, n;
	float ortalama,  toplam=0;
	
    	 printf("n degerini girin: ");
  		  scanf("%d", &n);
   	 for(i=0; i<n; ++i)
     {
         printf("Gir sayi%d: ",i+1);
          scanf("%d", &dizi[i]);
          toplam += dizi[i];
     }
     ortalama = toplam/n;

     printf("Ortalama = %f", ortalama);
	
	return 0;
}
