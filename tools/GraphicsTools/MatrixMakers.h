#include "Matrix.h"
#include "Vector.h"

Matrix* modelMatrix(Matrix* r, Vector3* p);
Matrix* viewMatrix(Vector3* P, Vector3* N, Vector3* V);
Matrix* rotateMatrix(float thetaDeg, char axis);
Matrix* translateMatrix(float x, float y, float z);
Matrix* perspectiveMatrix();
Matrix* viewportMatrix();