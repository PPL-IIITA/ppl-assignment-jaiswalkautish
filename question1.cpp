#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "initialize.h"
#include "couple.h"

using namespace std;

int main()
{
	/** the main function that does everything as asked in question 1 using inheritance  */
	boy bb[100];
	girl gg[100];
	couple cp[100];
	initialize obj;
	couple cpl;
	obj.initi(bb,gg);
	int n_cpl = 0;
	cpl.form_couples(cp,bb,gg,obj.nb,obj.ng,&n_cpl,1);
	cpl.print_couples(cp,n_cpl,1);
	return 0;
}