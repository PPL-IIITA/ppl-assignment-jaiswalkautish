#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
/** to generate random data about boys ...   */
{
	srand(time(NULL));
	FILE *fp;
	fp = fopen("data_boy.txt","w+");
	int j,i;
	char name[10];
	int n = 100;
	fprintf(fp,"%d\n",n);
	for(i=0;i<n;i++){
		for(j=0;j<7;j++)
			name[j] = (rand()%25)+65;
		name[7] = '\0';
		fprintf(fp,"%s %d %d %d %d %d\n",name,rand()%1000,rand()%1000,rand()%1000,rand()%1000,rand()%3+1);
	}
	fclose(fp);
	return 0;
}