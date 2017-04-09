#ifndef ARRAY_IMPL_H
#define ARRAY_IMPL_H
#include "hboy.h"
#include "hgirl.h"
#include "couple.h"
#include "find_girlfriend.h"

using namespace std;

class array_impl : public find_girlfriend /*! \brief class array_impl.
 *        
 *
 *  class that has a method to find the girlfriend of the boys in the given list using the array inplementation
 */{
public:
	/** function to get the boy's girlfriend using normal array inplementation  */
	void search(couple cp[], int n_cpl, string list[], int n);
};
#endif