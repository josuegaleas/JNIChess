/*
 * Author: Josue Galeas
 * Last Edit: 2018.08.02
 */

#include "Move.hpp"
#include <cassert>

Move::Move(int *i, int *f)
{
	assert(i);
	assert(f);

	init[0] = i[0];
	init[1] = i[1];
	fin[0] = f[0];
	fin[1] = f[1];
}

Move::~Move()
{
	delete[] init;
	delete[] fin;
}
