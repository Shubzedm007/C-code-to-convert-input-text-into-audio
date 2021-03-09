#include <iostream>
#include<string>
#include<windows.h>


int main(){
std::string phrase="hello world Shubham ";
std::string command ="espeak -v +f3  \""+phrase+"\"";
const char* charCommand=command.c_str();
system(charCommand);
}
