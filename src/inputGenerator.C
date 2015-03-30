#include <string>
#include <iostream>
#include <math.h>
#include <ctime>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <algorithm>

int main( int argc, char** argv )
{
	std::string solverType = std::string(argv[1]);
	if ( solverType == "1D+1D" )
	{
		#include "1D+1D.H"
	}
	else if ( solverType == "ASALI" )
	{
		#include "ASALI.H"
	}

	return 0;
}
