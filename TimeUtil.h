//
//

#pragma once

#include <chrono>
#include <iostream>

class TimeUtil
{
public:
	TimeUtil()
    {
		begin();
	}

	inline void begin()
    {
		start_ = std::chrono::system_clock::now();
	}

	inline void end()
    {
		end_ =	std::chrono::system_clock::now();
	}


	// in ms
	inline	double getTime()
    {
		return (double)(std::chrono::duration<double>(end_ - start_).count() * 1000);
	}


private:
	std::chrono::system_clock::time_point start_;
	std::chrono::system_clock::time_point end_;

};
