//
//

#pragma once

#include <chrono>
#include <iostream>
#include <string>

class TimeUtil
{
public:
	TimeUtil()
    {
		begin();
	}

	inline void begin()
    {
		start_ = std::chrono::high_resolution_clock::now();
	}

	inline void end()
    {
		end_ =	std::chrono::high_resolution_clock::now();
	}


	// in ms
	inline	double getTime()
    {
		return (double)(std::chrono::duration_cast<std::chrono::nanoseconds>(end_ - start_).count() / 1e6);
	}

	// in ms
	inline	void printTime(std::string name)
    {
		std::cout << "[" << name << "]" << " " << getTime() << " ms" << std::endl;
	}


private:
	std::chrono::high_resolution_clock::time_point start_;
	std::chrono::high_resolution_clock::time_point end_;

};
