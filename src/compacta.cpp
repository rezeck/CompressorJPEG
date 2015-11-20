/*
 * compacta.cpp
 *
 *  Created on: 17/09/2015
 *      Author: rezeck
 *      Email: rezeck@dcc.ufmg.br
 */

# include <iostream>

#include "compressor.h"

int main(int argc, char** argv){

	Compressor c;
	c.compress(argv[1]);

	return 0;
}




