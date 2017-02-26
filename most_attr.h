#ifndef MOST_ATTR_H
#define MOST_ATTR_H
#include "hboy.h"
#include "hgirl.h"
using namespace std;

class most_attr/*! \brief class most_attr.
 *        
 *
 *  class that has a method to find the most attractive boy for the particular girl as per the criteria
 */{
public:
	/** a member function that returns the index of the most attractive single boy for the girl   */
	int find_couple(boy bb[], girl gg[], int i, int nb);

};
#endif