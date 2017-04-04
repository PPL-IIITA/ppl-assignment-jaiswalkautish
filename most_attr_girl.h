#ifndef MOST_ATTR_GIRL_H
#define MOST_ATTR_GIRL_H
#include "hboy.h"
#include "hgirl.h"
using namespace std;

class most_attr_girl/*! \brief class most_attr_girl.
 *        
 *
 *  class that has a method to find the most attractive available girl for the boy
 */{
public:
	/** a member function that returns the index of the most attractive single girl for the boy   */
	int find_couple(boy bb[], girl gg[], int i, int nb);

};
#endif