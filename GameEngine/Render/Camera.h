#pragma once
#include "CustomPoint.h"
class Camera
{
public :
	CustomPoint* position;
	Vector* direction;
		
public:
	Camera();
	~Camera();
};

