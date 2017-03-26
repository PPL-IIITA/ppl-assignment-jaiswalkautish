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
		}
		fclose(fp);
		fp = fopen("data_girl.txt","r");
		fscanf(fp,"%d",&ng);
		for(i=0;i<ng;i++){
			fscanf(fp,"%s %d %d %d %d %d\n",gg[i].name, &gg[i].attractiveness, &gg[i].intelligence_level, &gg[i].maintainance_budget, &gg[i].type, &gg[i].criteria);
			gg[i].status = 0;
		}
		fclose(fp);
	}