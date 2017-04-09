#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "initialize.h"
#include "couple.h"

using namespace std;

int main()
{
	/** the main function that does everything as asked in question 4 using inheritance  */
	boy bb[100];
	girl gg[100];
	couple cp[100];
	gifts *gfts[200];
	initialize obj;
	couple cpl;
	gifts gft;
	int n_gfts;
	obj.initi(bb,gg);
	int n_cpl = 0;
	cpl.form_couples(cp,bb,gg,obj.nb,obj.ng,&n_cpl,1);
	cpl.print_couples(cp,n_cpl,1);
	gft.init(gfts,&n_gfts);
	gft.sorting(gfts,n_gfts);
	cpl.allocate_gift(cp,n_cpl,gfts,n_gfts);
	cpl.grl_hpp(cp,n_cpl);
	srand(time(NULL));
	int k = rand()%30 + 1;
	cpl.sort_comp(cp,n_cpl,k);
	cpl.sort_happ(cp,n_cpl,k);
	cpl.print_cpl_gifts(cp,n_cpl);
	cpl.print_couples(cp,n_cpl,5);
	srand(time(NULL));
	int z = rand()%10 + 1;
	cpl.breakup(bb,gg,cp,n_cpl,z,&n_cpl);
	cpl.form_couples(cp,bb,gg,obj.nb,obj.ng,&n_cpl,2);
	cpl.print_couples(cp,n_cpl,4);
	return 0;
}