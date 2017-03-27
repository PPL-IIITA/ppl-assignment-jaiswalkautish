#include "couple.h"
#include <string.h>
#include <math.h>
#include <stdio.h>
#include "most_attr.h"
#include "most_rich.h"
#include "most_intl.h"
#include "gifts.h"
#include <ctime>

using namespace std;

	void couple::set_couple(couple cp[],boy bb[], girl gg[], int i, int pos, int x){//** member function that sets up the couple and updates the status of committed girls and boys  */	
		bb[pos].status = 1;
		gg[i].status = 1;
		bb[pos].exgf = bb[pos].psgf;
		bb[pos].psgf = i;
		gg[i].exbf = gg[i].psbf;
		gg[i].psbf = pos;
		cp[x].b = bb[pos];
		cp[x].g = gg[i];
	}

	void couple::form_couples(couple cp[], boy bb[],girl gg[], int nb, int ng, int *x, int whn){//** member function to form couples as per the different citeria  */		
		int i,pos;
		if(whn == 1){
			for(i=0;i<ng;i++){
				int ch = gg[i].criteria;
				if(ch == 1){
					most_attr at;
					pos = at.find_couple(bb,gg,i,nb);
				}
				else if(ch == 2){
					most_rich at1;
					pos = at1.find_couple(bb,gg,i,nb);
				}
				else{
					most_intl at2;
					pos = at2.find_couple(bb,gg,i,nb);
				}
				if(pos != -1){
					set_couple(cp,bb,gg,i,pos,*x);
					*x += 1;
				}
			}
		}	
		else{	
		for(i=0;i<ng;i++){
			if(gg[i].brkp == 1){
				int ch = gg[i].criteria;
				if(ch == 1){
					most_attr at;
					pos = at.find_couple(bb,gg,i,nb);
				}
				else if(ch == 2){
					most_rich at1;
					pos = at1.find_couple(bb,gg,i,nb);
				}
				else{
					most_intl at2;
					pos = at2.find_couple(bb,gg,i,nb);
				}
				if(pos != -1){
					set_couple(cp,bb,gg,i,pos,*x);
					*x += 1;
				}
			}
		}}
	}

	void couple::allocate_gift(couple cp[], int nc, gifts gfts[], int n_gfts){//** member functions that allocates the gifts to the couples as per the type of boy and the girl  */
			int i,j;
			for(i=0;i<nc;i++){
				int ch = cp[i].b.type;
				int tc = 0;
				int count = 0;
				if(ch == 1 || ch == 3){
					for(j=0;j<n_gfts;j++){
						if(tc < cp[i].g.maintainance_budget){
							tc += gfts[j].price;
							cp[i].basket[count++] = gfts[j];
						}
						else
							break;
					}
					cp[i].num_g = count;
					if(ch == 1)
						cp[i].b.happiness = cp[i].b.budget - tc;
					else
						cp[i].b.happiness = cp[i].g.intelligence_level;
				}
				else{
					for(j=0;j<n_gfts;j++){
						if(tc + gfts[j].price < cp[i].b.budget){
							tc += gfts[j].price;
							cp[i].basket[count++] = gfts[j];
						}
						else
							break;
					}
					cp[i].num_g = count;
				}
			}
		}

	void couple::grl_hpp(couple cp[], int n){//** function that computes girl's happiness  */
		int i;
		for(i=0;i<n;i++){
			int ch = cp[i].g.type;
			int j,sum=0,sum2=0,sum3=0,val=0;
			for(j=0;j<cp[i].num_g;j++){
				if(cp[i].basket[j].type == 1)
					sum += cp[i].basket[j].price;
				else if(cp[i].basket[j].type == 2)
					sum2 += cp[i].basket[j].price;
				else
					sum3 += cp[i].basket[j].price;
				val += cp[i].basket[j].value;
			}
			
			if(ch == 1){
				double d = log((sum + 2*sum2 + sum3) - cp[i].g.maintainance_budget);
				cp[i].g.happiness = (int)d;
			}
			else if(ch == 2)
				cp[i].g.happiness = sum+sum2+sum3+val;
			else
				cp[i].g.happiness = (sum+sum2+sum3)*log(2);
		}
		for(i=0;i<n;i++){
			int ch = cp[i].g.type;
			if(ch == 2)
				cp[i].b.happiness = cp[i].g.happiness;
			cp[i].happ = cp[i].b.happiness + cp[i].g.happiness;
			cp[i].comp = (cp[i].b.budget - cp[i].g.maintainance_budget) + abs(cp[i].b.attractiveness - cp[i].g.attractiveness) + abs(cp[i].b.intelligence - cp[i].g.intelligence_level);
		}
	}

	void couple::print_couples(couple cp[], int x, int ch){//** member function to print the formed couples into a file couples.txt  */
		int i;
		FILE *fp;
		switch(ch){
			case 1:
			fp = fopen("couples.txt","w+");
			break;
			case 4:
			fp = fopen("updated_couples(q4).txt","w+");
			break;
			case 5:
			fp = fopen("all_sorted_happiness.txt","w+");
			break;
		}
		fprintf(fp,"%d couples formed\n",x);
		for(i=0;i<x;i++){
			fprintf(fp,"boy:%s girl:%s\n",cp[i].b.name,cp[i].g.name);
		}
	}

	void couple::sort_comp(couple cp[], int n, int k){//** member function to print the k most compatible couples into a file sorted_compatibility.txt  */
		int i,j;couple temp;
		for(i=0;i<n;i++){
			for(j=0;j<n-1-i;j++){
				if(cp[j].comp < cp[j+1].comp){
					temp = cp[j];
					cp[j] = cp[j+1];
					cp[j+1] = temp;
				}
			}
		}
		FILE *fp;
		if(n < k)
			k = n;
		fp = fopen("sorted_compatibility.txt","w+");
		fprintf(fp,"Boy  Girl  Compatibility\n");
		for(i=0;i<k;i++){
			fprintf(fp,"%s %s %d\n",cp[i].b.name,cp[i].g.name,cp[i].comp);
		}
		fclose(fp);
	}

	void couple::sort_happ(couple cp[], int n, int k){//** member function to print the k most happiest couples into a file sorted_happiness.txt  */
		int i,j;couple temp;
		for(i=0;i<n;i++){
			for(j=0;j<n-1-i;j++){
				if(cp[j].happ < cp[j+1].happ){
					temp = cp[j];
					cp[j] = cp[j+1];
					cp[j+1] = temp;
				}
			}
		}
		FILE *fp;
		fp = fopen("sorted_happiness.txt","w+");
		if(n < k)
			k = n;
		fprintf(fp,"Boy  Girl  happiness\n");
		for(i=0;i<k;i++){
			fprintf(fp,"%s %s %d\n",cp[i].b.name,cp[i].g.name,cp[i].happ);
		}
		fclose(fp);
	}

	void couple::print_cpl_gifts(couple cp[], int n){//** member function to print the gifts exchanged between the couples into a file gift_exchange.txt  */
		int i;
		FILE *fp;
		fp = fopen("gift_exchange.txt","w+");
		for(i=0;i<n;i++){
			fprintf(fp,"\nboy:%s girl:%s\n",cp[i].b.name,cp[i].g.name);
			fprintf(fp,"\nGifts exchanged\n");
			int j;
			for(j=0;j<cp[i].num_g;j++){
				time_t now = time(0);
				char *kk = ctime(&now);
				fprintf(fp,"type:%d price:%d value:%d %d %d time:%s\n",cp[i].basket[j].type, cp[i].basket[j].price, cp[i].basket[j].value, cp[i].basket[j].vall1, cp[i].basket[j].vall2, kk);
			}

		}
		fclose(fp);
	}

	void couple::breakup(boy bb[], girl gg[], couple cp[], int n, int k, int *x){
		int i;
		for(i=n-1;k > 0;i--){
			*x -= 1;
			bb[cp[i].b.id].status = 0;
			gg[cp[i].g.id].status = 0;
			bb[cp[i].b.id].psgf = -1;
			gg[cp[i].g.id].psbf = -1;
			bb[cp[i].b.id].exgf = cp[i].g.id;
			gg[cp[i].g.id].exbf = cp[i].b.id;
			gg[cp[i].g.id].brkp = 1;
			k--;
		}
	}