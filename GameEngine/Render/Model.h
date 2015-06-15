#pragma once
#include "Triangle.h"
class Model
{
private:
	Triangle ** triangles;
public:
	Model();
	void Load(wchar_t str);
	void DefaultSetup();
};

