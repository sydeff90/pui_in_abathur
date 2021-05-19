#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>

using namespace std;

void logError(string s);
void logError(char* s);
void logError(string s, int errorCode);
void logError(char* s, int errorCode);
void logOutput(string s);
void logOutput(char* s);
void logOutput(string s, int errorCode);
void logOutput(char* s, int errorCode);

#endif