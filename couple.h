#ifndef COUPLE_H
#define COUPLE_H
#include <string.h>
#include <math.h>
#include <stdio.h>
#include "hboy.h"
#include "hgirl.h"
#include "most_attr.h"
#include "most_rich.h"
#include "most_intl.h"
#include "most_attr_girl.h"
#include "gifts.h"

using namespace std;

class couple : public most_attr, public most_rich, public most_intl/*! \brief class Couple
 *        
 *
 *  class that has various methods and data members related to the formed couples
 */{
public:
	/** girl type object to that contains all the attributes of the girl  */
	girl g;
	/** boy type object that contains all the attributes of the boy  */ 
	boy b;
	/** data member to store the compatibility of the couple  */	
	int comp;
	/** data member to store the happiness of the couple  */	
	int happ;
	/** collection of gifts object as a basket of gifts that boy gifts to the girl  */	
	gifts* basket[200];
	/** data member to store the number of gifts in the basket  */	
	int num_g;	
	/** member function that sets up the couple and updates the status of committed girls and boys  */
	void set_couple(couple cp[],boy bb[], girl gg[], int i, int pos, int x);	
	/** member function to form couples as per the different citeria  */
	void form_couples(couple cp[], boy bb[],girl gg[], int nb, int ng, int *x, int ch);		
	/** member functions that allocates the gifts to the couples as per the type of boy and the girl  */
	void allocate_gift(couple cp[], int nc, gifts* gfts[], int n_gfts);
	/** function that computes girl's happiness  */
	void grl_hpp(couple cp[], int n);
	/** member function to print the formed couples into a file couples.txt  */
	void print_couples(couple cp[], int x, int ch);
	/** member function to print the k most compatible couples into a file sorted_compatibility.txt  */
	void sort_comp(couple cp[], int n, int k);
	/** member function to print the k most happiest couples into a file sorted_happiness.txt  */
	void sort_happ(couple cp[], int n, int k);
	/** member function to print the gifts exchanged between the couples into a file gift_exchange.txt  */
	void print_cpl_gifts(couple cp[], int n);
	/** member function to perform the breakup of k least happiest couples */
	void breakup(boy bb[], girl gg[], couple cp[], int n, int k, int *x);
	/** member function to form couples as per the question 5  */
	void form_couples_q5(couple cp[], boy bb[],girl gg[], int nb, int ng, int *x);			
};
#endif