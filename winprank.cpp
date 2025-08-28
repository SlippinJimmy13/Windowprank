#include <string>
#include <thread>
#include <windows.h>
#include <chrono>
#include <cstdlib>

using namespace std;

int main(){
    string user = " "; // Enter target name
    string message = "Hi " + user + ",\nDownload trojan.exe?";

    int response = MessageBox(NULL, message.c_str(), "trojan.exe", MB_YESNO | MB_ICONINFORMATION);
    if (response == IDYES){
        MessageBox(NULL, "Really? Ok!\nDownloading...", "trojan.exe", MB_OK | MB_ICONINFORMATION);
        MessageBox(NULL, "Download Complete!", "trojan.exe", MB_OK | MB_ICONINFORMATION);
    }
    else if (response == IDNO){
        MessageBox(NULL, "You have selected yes!\nDownloading...", MB_OK | MB_ICONINFORMATION);
        MessageBox(NULL, "Download Complete!", MB_OK | MB_ICONINFORMATION);
    }
    for (int i=0;i<5;i++){
        system("start cmd /c \"color 4 && echo PC Compromized!! && timeout /t 1 >null\"");
        this_thread::sleep_for(chrono::milliseconds(300));
    }
    system("start cmd /k \"color 4 && echo Trojan Active :3 && title trojan.exe && pause\"");
    return 0;
}