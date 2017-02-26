#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
	/** to generate random data about gifts ...   */
	srand(time(NULL));
	FILE *fp;
	fp = fopen("gifts.txt","w+");
	int n = 200;
	fprintf(fp,"%d\n",n);
	int i;
	for(i=0;i<n;i++){
		int t = rand()%3+1;
		if(t == 1){
			fprintf(fp,"%d %d %d %d %d\n", t, rand()%500+1, rand()%600+1, 0, 0);	
		}
		else{
			fprintf(fp,"%d %d %d %d %d\n", t, rand()%500+1, rand()%600+1, rand()%100+1, rand()%100+1);
		}
	}
	return 0;
}