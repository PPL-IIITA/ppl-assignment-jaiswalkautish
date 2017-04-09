#include "gift_selecter_m2.h"

using namespace std;

		void gift_selecter_m2::allocate_gift(couple cp[], int nc, gifts* gfts[], int n_gfts){/** member function that allocates the gifts to the couples as per the type of boy and the girl  */
			gift_selecter::allocate_gift(cp,nc,gfts,n_gfts);
			int c_ess = 0;
			int c_utl = 0;
			int c_lux = 0;
			int i;
			for(i=0;i<nc;i++){
				int j;
				for(j=0;j<cp[i].num_g;j++){
					if(cp[i].basket[j]->type == 1)
						c_ess += 1;
					else if(cp[i].basket[j]->type == 2)
						c_utl += 1;
					else
						c_lux += 1;
				}
				if(c_ess == 0){
					for(j=0;j<n_gfts;j++){
						if(gfts[j]->type == 1){
							cp[i].basket[cp[i].num_g] = gfts[j];
							cp[i].num_g += 1;
							break;
						}
					}
				}
				if(c_lux == 0){
					for(j=0;j<n_gfts;j++){
						if(gfts[j]->type == 2){
							cp[i].basket[cp[i].num_g] = gfts[j];
							cp[i].num_g += 1;
							break;
						}
					}
				}
				if(c_utl == 0){
					for(j=0;j<n_gfts;j++){
						if(gfts[j]->type == 3){
							cp[i].basket[cp[i].num_g] = gfts[j];
							cp[i].num_g += 1;
							break;
						}
					}
				}
			}
		}