#include "most_rich.h"
using namespace std;

	int most_rich::find_couple(boy bb[], girl gg[], int i, int nb){//** a member function that returns the index of the most rich single boy for the girl   */
		int maxpos = -1;
		int j;
		int bud = 0;
		for(j=0;j<nb;j++) {
			if((gg[i].exbf != j) && (bb[j].status == 0) && (bb[j].budget > gg[i].maintainance_budget) && (gg[i].attractiveness >= bb[j].min_att) && bb[j].budget > bud){
				bud = bb[j].budget;
				maxpos = j;
			}
		}
		return maxpos;
	}