
#include <iostream>
#include "StudentRecord.h"

void StudentRecord::print() const
{	
	std::cout << "Name:" << mName << "\t\t";
	std::cout << "College:" << mCollege << "\t\t";
	std::cout << "mAttendance :" << mAttendance << "\t\t";
	std::cout << "mPhysics :" << mPhysics << "\t\t";
	std::cout << "mChemistry:" << mChemistry << "\t\t";
	std::cout << "Maths:" << mMaths << "\t\t";
	std::cout << '\n';
}