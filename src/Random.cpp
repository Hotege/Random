#include <stdlib.h>
#include "Random.h"

#define RANDOM_A 6147023
#define RANDOM_B 89633
#define RANDOM_MAX 0xFFFFFFFF

Random::Random(bool useSysRand)
{
	m_UseSysRand = useSysRand;
	m_Seed = 0;
}

Random::~Random()
{

}

void Random::init(const unsigned int seed)
{
	if (m_UseSysRand)
		srand(seed);
	m_Seed = seed;
}

unsigned int Random::random()
{
	m_Seed = m_Seed * RANDOM_A + RANDOM_B;
	return m_UseSysRand ? rand() : (m_Seed & RANDOM_MAX);
}