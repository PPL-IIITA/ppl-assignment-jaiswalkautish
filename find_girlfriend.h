#ifndef FIND_GIRLFRIEND_H
#define FIND_GIRLFRIEND_H
#include "hboy.h"
#include "hgirl.h"

using namespace std;

class find_girlfriend/*! \brief class find_girlfriend.
 *        
 *
 *  base class to find the girlfriend of the boys in the given list
 */{
public:
	/** function to get the boy's id by his name   */
	int boy_id(boy bb[], int nb, string str);
};
#endif