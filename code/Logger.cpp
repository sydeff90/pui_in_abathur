#include "Logger.h"

// TODO: try to write these in a different folder
ofstream* errorFStream = new ofstream("error.log");
ofstream* outputFStream = new ofstream("output.log");

void logError(string s)
{
    *errorFStream << s << endl;
}

void logError(char* s)
{
    *errorFStream << s << endl;
}

void logError(string s, int errorCode)
{
    *errorFStream << s << errorCode << endl;
}

void logError(char* s, int errorCode)
{
    *errorFStream << s << errorCode << endl;
}

void logOutput(string s)
{
    *outputFStream << s << endl;
}

void logOutput(char* s)
{
    *outputFStream << s << endl;
}

void logOutput(string s, int errorCode)
{
    *outputFStream << s << errorCode << endl;
}

void logOutput(char* s, int errorCode)
{
    *outputFStream << s << errorCode << endl;
}