#pragma once

#include <string>

class StudentRecord
{
public:
	StudentRecord(std::string Name,
		std::string College,
		std::string Attendance,
		std::string Physics,
		std::string Chemistry,
		std::string Maths) : mName{ Name }, mCollege{ College }, mAttendance{ Attendance },mPhysics{ Physics }, mChemistry{ Chemistry }, mMaths{ Maths }
	{
	}

	void print() const;

private:
	std::string mName;
	std::string mCollege;
	std::string mAttendance;
	std::string mPhysics;
	std::string mChemistry;
	std::string mMaths;
};
