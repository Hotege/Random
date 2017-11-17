#include "Random.h"

#define RANDOM_A 6147023
#define RANDOM_B 89633
#define RANDOM_MAX 0xFFFFFFFF

Random::Random()
{
	m_Seed = 0;
}

Random::~Random()
{

}

void Random::srand(const unsigned int seed)
{
	m_Seed = seed;
}

unsigned int Random::rand()
{
	m_Seed = m_Seed * RANDOM_A + RANDOM_B;
	return (m_Seed & RANDOM_MAX);
}