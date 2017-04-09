#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "initialize.h"
#include "couple.h"
#include "gift_selecter.h"
#include "gift_selecter_m1.h"
#include "gift_selecter_m2.h"


using namespace std;

int main()
{
	/** the main function that does everything as asked in question 8 using inheritance  */
	boy bb[100];
	girl gg[100];
	couple cp[100];
	gifts *gfts[200];
	initialize obj;
	couple cpl;
	gifts gft;
	int n_gfts;
	int t;
	obj.initi(bb,gg);
	int n_cpl = 0;
	cpl.form_couples(cp,bb,gg,obj.nb,obj.ng,&n_cpl,1);
	cpl.print_couples(cp,n_cpl,1);
	gft.init(gfts,&n_gfts);
	gift_selecter* gs;
	srand(time(NULL));
	int choice = rand()%2+1;
	choice = 2;
	if(choice == 1){
		gift_selecter_m1* gs1 = (gift_selecter_m1*)(gs);
		gs1->allocate_gift(cp,n_cpl,gfts,n_gfts);	
	}
	else if(choice == 2){
		gift_selecter_m2* gs2 = (gift_selecter_m2*)(gs);
		gs2->allocate_gift(cp,n_cpl,gfts,n_gfts);
	}
	else{
		gs->allocate_gift(cp,n_cpl,gfts,n_gfts);	
	}
	cpl.print_cpl_gifts(cp,n_cpl);
	return 0;
}