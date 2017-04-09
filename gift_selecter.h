#ifndef GIFT_SELECTER_H
#define GIFT_SELECTER_H
#include <stdio.h>
#include <stdlib.h>
#include "couple.h"
#include "gifts.h"
using namespace std;

class gift_selecter/*! \brief class gift_selecter.
 *        
 *
 *  the base class for the gifts allocation that contain the default allocation mechanism
 */{
	public:
	/** member function that allocates the gifts to the couples as per the type of boy and the girl  */
	void allocate_gift(couple cp[], int nc, gifts* gfts[], int n_gfts);
};
#endif