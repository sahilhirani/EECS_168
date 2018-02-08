#include <iostream>
#include <string>
#include "KUStudent.h"

void writeOutput(const KUStudent& stu1)//print out all the required info.
{
  std::cout <<"Student: " << stu1.getFirstName() << " " << stu1.getLastName() << "\n";
  std::cout << "KUID: " << stu1.getID() << "\n";
  std::cout << "Department: " << stu1.getDept() << "\n";
}

int main()
{
  std::string fname;
  std::string lname;
  std::string kuid;
  std::string department;
  KUStudent stu;
  std::cout << "Please input the student's name (firstname lastname):\n";
  std::cin >> fname >> lname;
  stu.setName(fname, lname);
  std::cout << "Please input the student's KUID and department:\n";
  std::cin >> kuid >> department;
  stu.setKUInfo(kuid, department);
  std::cout <<"\n";
  writeOutput(stu);
  return(0);
}
