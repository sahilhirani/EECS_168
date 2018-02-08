#ifndef KUSTUDENT_H
#define KUSTUDENT_H
#include <iostream>
#include <string>

class KUStudent
{
public:

  void setName(std::string fname, std::string lname); // Set student's name.
  void setKUInfo(std::string kuid, std::string dpt); // Set student's KUID and Department.
  std::string getFirstName() const; // Get student's first name.
  std::string getLastName() const; // Get student's last name.
  std::string getID() const; // Get student's id.
  std::string getDept() const; // Get Student's Department.

private:

  std::string m_firstName;
  std::string m_lastName;
  std::string m_id;
  std::string m_department;


};

#endif
