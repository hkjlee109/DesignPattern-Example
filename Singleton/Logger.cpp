#include "Logger.h"

Logger::Logger() {}
Logger::~Logger() {}

void Logger::Write(const string& fileName, const void* data)
{
  // File write operation depends on OS.
}

Logger& Logger::Get()
{
  static Logger logger;
  return logger;
}

void Logger::WriteLog(string const& message)
{
  this->Write(this->logFileName, &message);
  cout << "   Message logged: " << message << endl;
}
