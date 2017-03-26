#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "q3.h"

using namespace std;

int main()
{
	/** the main function that does everything using the property of inhetitance*/
	boy bb[100];
	girl gg[100];
	couple cp[100];
	gifts gfts[200];
	q3 obj;
	int n_gfts;
	obj.initi(bb,gg);
	int n_cpl = 0;
	obj.form_couples(cp,bb,gg,obj.nb,obj.ng,&n_cpl);
	obj.print_couples(cp,n_cpl);
	obj.init(gfts,&n_gfts);
	obj.sorting(gfts,n_gfts);
	obj.allocate_gift(cp,n_cpl,gfts,n_gfts);
	obj.grl_hpp(cp,n_cpl);
	srand(time(NULL));
	int k = rand()%30 + 1;
	obj.sort_comp(cp,n_cpl,k);
	obj.sort_happ(cp,n_cpl,k);
	obj.print_cpl_gifts(cp,n_cpl);
	return 0;
}