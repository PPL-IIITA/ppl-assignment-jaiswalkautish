#include "most_attr_girl.h"
using namespace std;

	int most_attr_girl::find_couple(boy bb[], girl gg[], int i, int ng){//** a member function that returns the index of the most attractive single girl for the boy   */
		int maxpos = -1;
		int j;
		int attr = 0;
		for(j=0;j<ng;j++) {
			if((bb[i].exgf != j) && (gg[j].status == 0) && (bb[i].budget > gg[j].maintainance_budget) && (gg[j].attractiveness >= bb[i].min_att) && gg[j].attractiveness > attr){
				attr = gg[j].attractiveness;
				maxpos = j;
			}
		}
		return maxpos;
	}