#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "initialize.h"
#include "couple.h"
#include "find_girlfriend.h"
#include "array_impl.h"
#include "hash_impl.h"
#include "sorted_array_impl.h"
#include <time.h>

using namespace std;

int main()
{
	/** the main function that does everything using inheritance */
	boy bb[100];
	girl gg[100];
	couple cp[100];
	initialize obj;
	couple cpl;
	obj.initi(bb,gg);
	int n_cpl = 0;
	cpl.form_couples(cp,bb,gg,obj.nb,obj.ng,&n_cpl,1);
	cpl.print_couples(cp,n_cpl,1);
	string list[obj.nb];
	int n;
	obj.get_boyslist(bb,list,obj.ng,&n);
	srand(time(NULL));
	int choice = rand()%3 + 1;
	find_girlfriend* fg;
	if(choice == 2){
		sorted_array_impl* sai = (sorted_array_impl*)(fg);
		sai->search(cp,n_cpl,bb,obj.nb,list,n);
	}
	else if(choice == 3){
		hash_impl* hi = (hash_impl*)(fg);
		hi->search(cp,n_cpl,list,n);
	}
	else{
		array_impl* ai = (array_impl*)(fg);
		ai->search(cp,n_cpl,list,n);
	}
	return 0;
}