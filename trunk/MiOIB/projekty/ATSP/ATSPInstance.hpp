/*
 * ATSPInstance.hpp
 *
 *  Created on: 2011-10-12
 *      Author: jawora
 */

#ifndef ATSP_INSTANCE_HPP_
#define ATSP_INSTANCE_HPP_

class ATSPInstance{
private:
	unsigned int length;
	unsigned int *instance;

	void swap(unsigned int x, unsigned int y);

public:
	ATSPInstance(unsigned int length);
	void show();
	void randomize();
};

#endif /* INSTANCE_HPP_ */