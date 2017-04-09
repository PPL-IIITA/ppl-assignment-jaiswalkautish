#ifndef INITIALIZE_H
#define INITIALIZE_H
#include "hboy.h"
#include "hgirl.h"
#include <time.h>
using namespace std;

class initialize/*! \brief class initilalize.
 *        
 *
 *  class that has a method to initialise the boy and the girl array with the data of the randomly gelerated text files
 */{
public:
	/** the number of boys */
	int nb;
	/** the number of girls */
	int ng;
	/** function to initialize the boy's and girl's data from text files   */
	void initi(boy bb[], girl gg[]);			
	/** function to sort the boy's list by his attractiveness   */
	void sort_boy(boy bb[]);
	/** function to sort the girl's list by her maintainance cost   */
	void sort_girl(girl gg[]);
	/** function to mark the days when gifting is to be done   */
	void get_gdays(int gdays[], int *t);
	/** function to get the list of the boys as in question 7   */
	void get_boyslist(boy bb[], string list[], int nb, int *n);			
};
#endif