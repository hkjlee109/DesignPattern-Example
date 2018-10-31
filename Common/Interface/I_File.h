#ifndef I_FILE_H
#define I_FILE_H

#include <string>

struct I_File
{
  virtual ~I_File() {};
  virtual void Write(const std::string &fileName, const void* data) = 0;
};

#endif
