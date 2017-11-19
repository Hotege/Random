#ifndef _RANDOM_H_
#define _RANDOM_H_

class Random
{
public:
	Random(bool useSysRand = true);
	~Random();

	void init(const unsigned int seed);
	unsigned int random();
private:
	unsigned int m_Seed;
	bool m_UseSysRand;
};

#endif