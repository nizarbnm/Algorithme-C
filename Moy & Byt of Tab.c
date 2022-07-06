#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

//  

int main(){
	
	int tab,i,temp,j;
	double toplam =0;
	
	printf("\n Enter Table Size = ");
	scanf("%d",&tab);
	
	if(tab%2==0){
		tab++;
	}
	
	int dizi[tab];
	
	int *ptr=dizi;
	
	srand(time(NULL));
		
	for(i=0;i<tab;i++){
		
		*(ptr+i)=rand()%25;
		
		printf(" %d ",*(ptr+i));
		
		toplam = toplam+*(ptr+i);
		
	}
	
	int gecici;
	
	for(i=0;i<tab;i++){
    	
		for(j=0;j<tab;j++){
            
			if(*(ptr+i)<*(ptr+j)){
               
			    gecici=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=gecici;
				
				}
            }
        }
	
	printf("\n\n");
	
	
	for(i=0;i<tab;i++){
		printf(" %d ",*(ptr+i));
	}
	
	int byt=tab/2;
	
	
	printf("\n\n  MOY = %lf\n\n  byt = %d",toplam/tab,*(ptr+tab));
	
	
	
	return 0;
}
