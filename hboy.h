#ifndef HBOY_H
#define HBOY_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

class boy/*! \brief class boy.
 *        
 *
 *  class to define various attributes of boys
 */{
public:
	/** name of the boy */
	char name[10];
	/** his attractiveness */ 
	int attractiveness;
	/** intelligence of the boy */ 
	int intelligence;
	/** budget of the boy */	
	int budget;
	/** type of the boy: 1-miser 2-generous 3-geeky */	
	int type;
	/** status of the boy: 0-single 1-committed*/	
	int status;
	/** happiness of the boy when committed*/	
	int happiness;
	/** minimum attraction of the girl for the boy*/	
	int min_att;
	/** id of the boy*/
	int id;
	/** id of the present gf of the boy*/
	int psgf;
	/** id of the ex-gf of the boy*/
	int exgf;
};
#endif
