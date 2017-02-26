#include "most_intl.h"
using namespace std;

	int most_intl::find_couple(boy bb[], girl gg[], int i, int nb){//** a member function that returns the index of the most intelligent single boy for the girl   */
		int maxpos = -1;
		int j;
		int intl = 0;
		for(j=0;j<nb;j++){
			if((bb[j].status == 0) && (bb[j].budget > gg[i].maintainance_budget) && (gg[i].attractiveness >= bb[j].min_att) && bb[j].intelligence > intl){
					intl = bb[j].intelligence;
					maxpos = j;
			}
		}
		return maxpos;
	}
