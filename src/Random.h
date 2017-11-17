#ifndef _RANDOM_H_
#define _RANDOM_H_

class Random
{
public:
	Random();
	~Random();

	void srand(const unsigned int seed);
	unsigned int rand();
private:
	unsigned int m_Seed;
};

#endif