#include "gifts.h"
#include "essential_gifts.h"
#include "luxury_gifts.h"
#include "utility_gifts.h"
using namespace std;

		void gifts::init(gifts* gfts[], int *n){//** function to initialise the gifts array from the text file  */		
			FILE *fp;
			fp = fopen("gifts.txt","r");
			int k;
			fscanf(fp,"%d",&k);
			*n = k;
			int i;
			int temp;
			for(i=0;i<k;i++){
				fscanf(fp,"%d",&temp);
				if(temp == 1){
					essential_gifts* obj = new essential_gifts();
					int t1,t2;
					fscanf(fp,"%d %d %d %d\n",&obj->price, &obj->value, &t1, &t2);
					obj->type = 1;
					gfts[i] = obj;	
				}
				else if(temp == 2){
					luxury_gifts* obj = new luxury_gifts();
					fscanf(fp,"%d %d %d %d\n",&obj->price, &obj->value, &obj->rating, &obj->diff);
					obj->type = 2;
					gfts[i] = obj;	
				}
				else{
					utility_gifts* obj = new utility_gifts();
					fscanf(fp,"%d %d %d %d\n",&obj->price, &obj->value, &obj->util_val, &obj->util_class);
					obj->type = 3;
					gfts[i] = obj;	
				}
			}
			fclose(fp);
		}

		void gifts::sorting(gifts* gfts[], int n_gfts){//** function that performs sorting of the gifts as per the price  */ 		
			int i,j;
			gifts temp;
			for(i=0;i<n_gfts;i++){
				for(j=0;j<n_gfts-1-i;j++){
					if((*gfts[j]).price > (*gfts[j+1]).price){
						temp = *gfts[j];
						*gfts[j] = *gfts[j+1];
						*gfts[j+1] = temp;
					}
				}
			}
		}

		void gifts::print_gfts(gifts* gfts[], int n){//** function that prints the gifts along with its all attributes  */
			int i;
			for(i=0;i<n;i++){
				if((*gfts[i]).type == 1)
					printf("%d %d %d\n",(*gfts[i]).type, (*gfts[i]).price, (*gfts[i]).value);
				else if((*gfts[i]).type == 2){
					luxury_gifts* obj = (luxury_gifts*)(gfts[i]);
					printf("%d %d %d %d %d\n",obj->type, obj->price, obj->value, obj->rating, obj->diff);
				}
				else{
					utility_gifts* obj = (utility_gifts*)(gfts[i]);
					printf("%d %d %d %d %d\n",obj->type, obj->price, obj->value, obj->util_val, obj->util_class);	
				}
			}
		}