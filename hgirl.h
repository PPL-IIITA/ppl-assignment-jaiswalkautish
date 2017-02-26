#ifndef HGIRL_H
#define HGIRL_H
#include <iostream>
#include <time.h>

using namespace std;

class girl/*! \brief class girl
 *        
 *
 *  class to define various attributes of girls
 */{
public:
	/** name of the girl */
	char name[10];	
	/** attractiveness of the girl  */			
	int attractiveness;		
	/** intelligence of the girl */
	int intelligence_level;		
	/** maintainance budget of the girl*/
	int maintainance_budget;	
	/** type of the girl: 1-choosy 2-normal 3-desperate */
	int type;	
	/** criteria of the girl to choose bf: 1-most attractive 2-most rich 3-most intelligent */
	int criteria;	
	/** status of the girl: 0-single 1-committed */
	int status;	
	/** happiness of the girl with her bf */
	int happiness;	

};
#endif


