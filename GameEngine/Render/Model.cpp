#include "stdafx.h"
#include "Model.h"


Model::Model()
{

}

void Model::Load(wchar_t str){}

void Model::DefaultSetup()
{
	CustomPoint* point1 = new CustomPoint(-1, -1, -1);
	CustomPoint* point2 = new CustomPoint(1, -1, -1);
	CustomPoint* point3 = new CustomPoint(1, 1, -1);
	CustomPoint* point4 = new CustomPoint(-1, 1, -1);
	CustomPoint* point5 = new CustomPoint(-1, -1, 1);
	CustomPoint* point6 = new CustomPoint(1, -1, 1);
	CustomPoint* point7 = new CustomPoint(1, 1, 1);
	CustomPoint* point8 = new CustomPoint(-1, 1, 1);

	triangles = new Triangle*[16];

	triangles[0] = new Triangle(point1, point2, point3);
	triangles[1] = new Triangle(point3, point4, point1);
	triangles[2] = new Triangle(point1, point2, point5);
	triangles[3] = new Triangle(point5, point2, point6);
	triangles[4] = new Triangle(point3, point2, point6);
	triangles[5] = new Triangle(point6, point7, point3);
	triangles[6] = new Triangle(point4, point8, point3);
	triangles[7] = new Triangle(point3, point8, point7);
	triangles[8] = new Triangle(point1, point5, point8);
	triangles[9] = new Triangle(point8, point4, point1);
	triangles[10] = new Triangle(point5, point6, point7);
	triangles[11] = new Triangle(point7, point8, point5);
}
