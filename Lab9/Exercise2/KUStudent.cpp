#include "KUStudent.h"

void KUStudent::setName(std::string fname, std::string lname)
{
  m_firstName = fname;
  m_lastName = lname;
}

void KUStudent::setKUInfo(std::string kuid, std::string dpt)
{
  m_id = kuid;
  m_department = dpt;
}

std::string KUStudent::getFirstName() const
{
  return(m_firstName);
}

std::string KUStudent::getLastName() const
{
  return(m_lastName);
}

std::string KUStudent::getID() const
{
  return(m_id);
}

std::string KUStudent::getDept()const
{
  return(m_department);
}
