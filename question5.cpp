#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "initialize.h"
#include "couple.h"

using namespace std;

int main()
{
	/** the main function that does everything using inheritance */
	boy bb[100];
	girl gg[100];
	couple cp[100];
	gifts *gfts[200];
	initialize obj;
	couple cpl;
	gifts gft;
	int n_gfts;
	obj.initi(bb,gg);
	obj.sort_boy(bb);
	obj.sort_girl(gg);
	int i;
	int n_cpl = 0;
	int t;
	printf("Enter allotment algorithm 1 or 4\n");
	scanf("%d",&t);
	if(t == 1)
		cpl.form_couples(cp,bb,gg,obj.nb,obj.ng,&n_cpl,1);
	else
		cpl.form_couples_q5(cp,bb,gg,obj.nb,obj.ng,&n_cpl);
	cpl.print_couples(cp,n_cpl,1);
	printf("Couples Allocated\n");
	gft.init(gfts,&n_gfts);
	gft.sorting(gfts,n_gfts);
	cpl.allocate_gift(cp,n_cpl,gfts,n_gfts);
	printf("Gifting Done\nComputing Happiness of the couples\n");
	cpl.grl_hpp(cp,n_cpl);
	srand(time(NULL));
	int k = rand()%30 + 1;
	printf("Printing %d Happiest Couples\n", k);
	cpl.sort_happ(cp,n_cpl,k);
	return 0;
}