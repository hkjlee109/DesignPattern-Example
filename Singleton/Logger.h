#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>
#include "I_File.h"

using namespace std;

class Logger : public I_File
{
  Logger();
  ~Logger();

  const string logFileName = "/var/log/log.txt";
  virtual void Write(const string& fileName, const void* data);

public:
  Logger(Logger const&)         = delete;  // Delete copy constructor.
  void operator=(Logger const&) = delete;  // Delete copy assignment constructor.

  static Logger& Get();
  void WriteLog(string const& message);
};

#endif
