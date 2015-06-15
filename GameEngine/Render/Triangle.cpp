#include "stdafx.h"
#include "Triangle.h"


Triangle::Triangle()
{
	points = new CustomPoint*[3];
}

Triangle::Triangle(CustomPoint* pointOne, CustomPoint* pointTwo, CustomPoint* pointThree)
{
	points = new CustomPoint*[3];
	points[0] = pointOne;
	points[1] = pointTwo;
	points[2] = pointThree;
}
