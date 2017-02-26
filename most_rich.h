#ifndef MOST_RICH_H
#define MOST_RICH_H
#include "hboy.h"
#include "hgirl.h"
using namespace std;

class most_rich/*! \brief class most_rich.
 *        
 *
 *  class that has a method to find the most intelligent boy for as per the criteria
 */{
public:
	/** a member function that returns the index of the most rich single boy for the girl   */
	int find_couple(boy bb[], girl gg[], int i, int nb);

};
#endif