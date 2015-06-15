#pragma once
#include "CustomPoint.h"

class Triangle
{
protected:
	CustomPoint** points;
public:
	Triangle();
	Triangle(CustomPoint* pointOne, CustomPoint* pointTwo, CustomPoint* pointThree);
};

