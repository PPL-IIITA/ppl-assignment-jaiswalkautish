#ifndef LUXURY_GIFTS_H
#define LUXURY_GIFTS_H
#include <stdio.h>
#include <stdlib.h>
#include "gifts.h"
using namespace std;

class luxury_gifts : public gifts/*! \brief class luxury_gifts.
 *        
 *
 *  class that has various data members that deals with the luxury type gifts of the couples
 */{
	public:
		/** the luxury rating of the gift */ 
		int rating;
		/** the difficulty to obtain the gift */
		int diff;
};
#endif