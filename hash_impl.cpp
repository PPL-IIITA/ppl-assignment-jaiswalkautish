#include "hash_impl.h"
#include <map>

using namespace std;

	void hash_impl::search(couple cp[], int nc, string list[], int n){	//** function to get the boy's girlfriend using hashing  */
		int i,f;
		FILE *fp;
		fp = fopen("Boy-girl_3(q7).txt","w+");
		fprintf(fp, "Boy_name   Girlfriend\n");
		map<string,string> hash;
		for(i=0;i<nc;i++){
			hash[cp[i].b.name] = cp[i].g.name;
		}
		map<string,string>::iterator it;
		for(i=0;i<n;i++){
			it = hash.find(list[i]);
			if(it != hash.end())
				fprintf(fp,"%s   %s\n",(it->first).c_str(), (it->second).c_str());
			else
				fprintf(fp,"%s   No girlfriend\n",list[i].c_str());
		}
		fclose(fp);
	}
