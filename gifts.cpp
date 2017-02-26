#include "gifts.h"
using namespace std;

		void gifts::init(gifts gfts[], int *n){//** function to initialise the gifts array from the text file  */		
			FILE *fp;
			fp = fopen("gifts.txt","r");
			int k;
			fscanf(fp,"%d",&k);
			*n = k;
			int i;
			for(i=0;i<k;i++){
				fscanf(fp,"%d %d %d %d %d\n",&gfts[i].type, &gfts[i].price, &gfts[i].value, &gfts[i].vall1, &gfts[i].vall2);
			}
			fclose(fp);
		}

		void gifts::sorting(gifts gfts[], int n_gfts){//** function that performs sorting of the gifts as per the price  */ 		
			int i,j;
			gifts temp;
			for(i=0;i<n_gfts;i++){
				for(j=0;j<n_gfts-1-i;j++){
					if(gfts[j].price > gfts[j+1].price){
						temp = gfts[j];
						gfts[j] = gfts[j+1];
						gfts[j+1] = temp;
					}
				}
			}
		}

		void gifts::print_gfts(gifts gfts[], int n){//** function that prints the gifts along with its all attributes  */
			int i;
			for(i=0;i<n;i++){
				printf("%d %d %d %d %d\n",gfts[i].type, gfts[i].price, gfts[i].value, gfts[i].vall1, gfts[i].vall2);
			}
		}