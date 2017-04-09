#ifndef GIFT_SELECTER_m2_H
#define GIFT_SELECTER_m2_H
#include "gift_selecter.h"
#include <stdio.h>
#include <stdlib.h>
#include "couple.h"
#include "gifts.h"

using namespace std;

class gift_selecter_m2 : public gift_selecter/*! \brief class gift_selecter_2.
 *        
 *
 *  the derived class for the gifts allocation by second mechanism
 */{
	public:
	/** member function that allocates the gifts to the couples as per the type of boy and the girl  */
	void allocate_gift(couple cp[], int nc, gifts* gfts[], int n_gfts);
};
#endif