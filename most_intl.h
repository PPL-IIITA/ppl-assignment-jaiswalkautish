#ifndef MOST_INTL_H
#define MOST_INTL_H
#include "hboy.h"
#include "hgirl.h"
using namespace std;

class most_intl/*! \brief class most_intl.
 *        
 *
 *  class that has a method to find the most intelligent boy for the particular girl as per the criteria
 */{
public:
	/** a member function that returns the index of the most intelligent single boy for the girl   */
	int find_couple(boy bb[], girl gg[], int i, int nb);

};
#endif