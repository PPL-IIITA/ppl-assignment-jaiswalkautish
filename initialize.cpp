#include "initialize.h"
#include "hboy.h"
#include "hgirl.h"
using namespace std;

	void initialize::initi(boy bb[], girl gg[]){//** function to initialise the boy's and girl's data from text files   */			
		FILE *fp;
		fp = fopen("data_boy.txt","r");
		fscanf(fp,"%d",&nb);
		int i;
		for(i=0;i<nb;i++){
			fscanf(fp,"%s %d %d %d %d %d\n",bb[i].name, &bb[i].attractiveness, &bb[i].intelligence, &bb[i].budget, &bb[i].min_att, &bb[i].type);
			bb[i].status = 0;
			bb[i].psgf = -1;
			bb[i].exgf = -1;
			bb[i].id = i;
		}
		fclose(fp);
		fp = fopen("data_girl.txt","r");
		fscanf(fp,"%d",&ng);
		for(i=0;i<ng;i++){
			fscanf(fp,"%s %d %d %d %d %d\n",gg[i].name, &gg[i].attractiveness, &gg[i].intelligence_level, &gg[i].maintainance_budget, &gg[i].type, &gg[i].criteria);
			gg[i].status = 0;
			gg[i].psbf = -1;
			gg[i].exbf = -1;
			gg[i].id = i;
			gg[i].brkp = 0;
		}
		fclose(fp);
	}

	void initialize::sort_boy(boy bb[]){/** function to sort the boy's list by his attractiveness   */
		int i,j;
		boy temp;
		for(i=0;i<nb;i++){
			for(j=0;j<nb-1;j++){
				if(bb[j].attractiveness > bb[j+1].attractiveness){
					temp = bb[j];
					bb[j] = bb[j+1];
					bb[j+1] = temp;
				}
			}
		}
	}

	void initialize::sort_girl(girl gg[]){/** function to sort the girl's list by her maintainance cost   */
		int i,j;
		girl temp;
		for(i=0;i<ng;i++){
			for(j=0;j<ng;j++){
				if(gg[j].maintainance_budget > gg[j+1].maintainance_budget){
					temp = gg[j];
					gg[j] = gg[j+1];
					gg[j+1] = temp;
				}
			}
		}
	}

	void initialize::get_gdays(int gdays[], int *t){	/** function to mark the days when gifting is to be done   */
		int i;
		*t = 0;
		srand(time(NULL));
		for(i=0;i<31;i++){
			gdays[i] = rand()%2;
			if(gdays[i] == 1)
				*t += 1;
		}
	} 