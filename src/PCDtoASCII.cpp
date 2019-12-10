#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <vector>
#include <string>
#include<utility>
#include "Point.h"


void pcd_to_ascii(std::string pcd_filename)
{
	std::ifstream input(pcd_filename);
	std::string line;
	do{	
		std::getline(input, line);
	} while (line.compare("DATA ascii\n") != 0);

	// get point coordinates
	double x, y, z;
	std::vector<Point> point_cloud;
	while (input >> x >> y >> z)
	{
		Point p(x, y, z);
		point_cloud.push_back(p);
	}

}