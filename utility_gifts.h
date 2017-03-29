#ifndef UTILITY_GIFTS_H
#define UTILITY_GIFTS_H
#include <stdio.h>
#include <stdlib.h>
#include "gifts.h"
using namespace std;

class utility_gifts : public gifts/*! \brief class utility gifts.
 *        
 *
 *  class that has various data members that deals with the utility type gifts of the couples
 */{
	public:
		/** the utility value of the gift  */	
		int util_val;
		/** the utility class of the gift  */ 
		int util_class;	
};
#endif