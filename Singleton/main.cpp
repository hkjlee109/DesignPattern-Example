#include "Logger.h"

int main(void)
{
  cout << endl << "Singleton Example." << endl;

  // auto logger = Logger::Get();
  Logger::Get().WriteLog("Singleton object is bit tricky to be unit tested.");

  cout << endl;

  return 0;
}
