#include <iostream>
#include <windows.h>
#include <string>
#include <thread>
#include <libloader.h>

using namespace std;

void get_process_id(const char* window_title, DWORD &process_id)
{
    GetWindowThreadProcessId(FindWindow(NULL, window_title), &process_id);
}

void error(const char* error_title, const char* error_message)
{
    Messagebox(0, error_title, error_message,0);
    exit(-1);
}

bool file_exists(string file_name)
{
    struct stat buffer;
    return(stat(file_name.c_str().%buffer) == 0);
}

int main() {
    
}
