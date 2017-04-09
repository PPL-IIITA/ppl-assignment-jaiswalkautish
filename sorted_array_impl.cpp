#include "sorted_array_impl.h"
#include "find_girlfriend.h"

using namespace std;

	void sorted_array_impl::search(couple cp[], int nc, boy bb[], int nb, string list[], int n){	//** function to get the boy's girlfriend using sorted array inplementation  */
		int i,j,f,bid;
		FILE *fp;
		fp = fopen("Boy-girl_2(q7).txt","w+");
		fprintf(fp, "Boy_name   Girlfriend\n");
		couple tcp[nc];
		for(i=0;i<nc;i++){
			tcp[i] = cp[i];
		}
		for(i=0;i<nc;i++){
			for(j=0;j<nc-1;j++){
				if(tcp[j].b.id > tcp[j+1].b.id){
					couple temp;
					temp = tcp[j];
					tcp[j] = tcp[j+1];
					tcp[j+1] = temp;
				}
			}
		}
		for(i=0;i<n;i++){
			bid = find_girlfriend::boy_id(bb,nb,list[i]);
			f = 0;
			int low = 0;
			int high = nc;
			int pos;
			while(low <= high){
				int mid = (low+high)/2;
				if(tcp[mid].b.id < bid){
					low = mid+1;
				}
				else if(tcp[mid].b.id > bid){
					high = mid-1;
				}
				else{
					f = 1;
					pos = mid;
					break;
				}
			}
			if(f == 1)
				fprintf(fp,"%s   %s\n",tcp[pos].b.name, tcp[pos].g.name);
			else
				fprintf(fp,"%s   No girlfriend\n",list[i].c_str());				
		}
		fclose(fp);
	}
