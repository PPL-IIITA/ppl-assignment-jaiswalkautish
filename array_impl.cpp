#include "array_impl.h"

using namespace std;

	void array_impl::search(couple cp[], int nc, string list[], int n){	//** function to get the boy's girlfriend using normal array inplementation  */
		int i,f;
		FILE *fp;
		fp = fopen("Boy-girl_1(q7).txt","w+");
		fprintf(fp, "Boy_name   Girlfriend\n");
		for(i=0;i<n;i++){
			int j;
			f = 0;
			for(j=0;j<nc;j++){
				if(cp[j].b.name == list[i]){
					f = 1;
					break;
				}
			}
			if(f == 1)
				fprintf(fp,"%s   %s\n",cp[j].b.name, cp[j].g.name);
			else
				fprintf(fp,"%s   No girlfriend\n",list[i].c_str());				
		}
		fclose(fp);
	}
