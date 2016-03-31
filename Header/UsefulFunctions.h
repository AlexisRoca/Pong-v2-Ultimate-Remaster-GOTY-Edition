#pragma once
#include <SFML/System/Vector2.hpp>

using namespace sf;

float scalarProduct(const Vector2f & v1, const Vector2f & v2)
{
	return (v1.x * v2.x + v1.y * v2.y);
}

float norm(const Vector2f & v)
{
	return sqrt(v.x*v.x + v.y*v.y);
}

float norm2(const Vector2f & v)
{
	return (norm(v)*norm(v));
}

void normalize(Vector2f & v)
{
	v = v / norm(v);
}