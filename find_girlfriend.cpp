#include "find_girlfriend.h"

using namespace std;

	int find_girlfriend::boy_id(boy bb[], int nb, string str){//** function to get the boy's id by his name   */
		int i;
		for(i=0;i<nb;i++){
			if(bb[i].name == str){
				return i;
			}
		}
	}