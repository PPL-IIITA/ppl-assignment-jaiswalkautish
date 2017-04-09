#include "gift_selecter.h"

using namespace std;

		void gift_selecter::allocate_gift(couple cp[], int nc, gifts* gfts[], int n_gfts){/** member function that allocates the gifts to the couples as per the type of boy and the girl  */
			gifts gft;
			gft.sorting(gfts,n_gfts);
			int i,j;
			for(i=0;i<nc;i++){
				int ch = cp[i].b.type;
				int tc = 0;
				int count = 0;
				if(ch == 1 || ch == 3){
					for(j=0;j<n_gfts;j++){
						if(tc < cp[i].g.maintainance_budget){
							tc += (*gfts[j]).price;
							cp[i].basket[count++] = gfts[j];
						}
						else
							break;
					}
					cp[i].num_g = count;
					if(ch == 1)
						cp[i].b.happiness = cp[i].b.budget - tc;
					else
						cp[i].b.happiness = cp[i].g.intelligence_level;
				}
				else{
					for(j=0;j<n_gfts;j++){
						if(tc + (*gfts[j]).price < cp[i].b.budget){
							tc += (*gfts[j]).price;
							cp[i].basket[count++] = gfts[j];
						}
						else
							break;
					}
					cp[i].num_g = count;
				}
			}
		}