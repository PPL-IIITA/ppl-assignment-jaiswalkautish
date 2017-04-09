#ifndef SORTED_ARRAY_IMPL_H
#define SORTED_ARRAY_IMPL_H
#include "hboy.h"
#include "hgirl.h"
#include "couple.h"
#include "find_girlfriend.h"

using namespace std;

class sorted_array_impl : public find_girlfriend /*! \brief class sorted_array_impl.
 *        
 *
 *  class that has a method to find the girlfriend of the boys in the given list using the sorted array inplementation
 */{
public:
	/** function to get the boy's girlfriend using binary search */
	void search(couple cp[], int nc, boy bb[], int nb, string list[], int n);
};
#endif