#include "most_attr.h"
using namespace std;

	int most_attr::find_couple(boy bb[], girl gg[], int i, int nb){//** a member function that returns the index of the most attractive single boy for the girl   */
		int maxpos = -1;
		int j;
		int attr = 0;
		for(j=0;j<nb;j++) {
			if((gg[i].exbf != j) && (bb[j].status == 0) && (bb[j].budget > gg[i].maintainance_budget) && (gg[i].attractiveness >= bb[j].min_att) && bb[j].attractiveness > attr){
				attr = bb[j].attractiveness;
				maxpos = j;
			}
		}
		return maxpos;
	}