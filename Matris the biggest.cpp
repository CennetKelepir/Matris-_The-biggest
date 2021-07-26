#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int dizi[10][10], i, j,eb;
   	srand(time(NULL));
	for(i=0; i<10; i++)	{	
	   for(j=0; j<10; j++){
	
	    dizi[i][j]=rand()%100+1;
	   }
	}
	for(i=0; i<10; i++)	{	
	   for(j=0; j<10; j++){
	
	     printf("%5d",dizi[i][j]);
	   }
	   printf("\n");
	}
	for(i=0; i<10; i++)	{	
	    eb=dizi[i][0];
	   for(j=0; j<10; j++){
	       if(dizi[i][j]>eb)
	          eb=dizi[i][j];
       }
       printf("\n%d . satirin enbuyugu %d : ",(i+1),eb);
	}
}
