#include<iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main ()
{
    system("git pull"); 
    system("cd img");
    system("git pull");
    system("cd .."); 
    system("npm run build:sw:prod");
    system("start http://localhost:8224");   
    system("py -m http.server 8224");
    

}
