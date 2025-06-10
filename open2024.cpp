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
    system("npm i");
    system("npm audit fix");
    system("git fetch upstream");
    system("git merge upstream/main");    
    system("start http://localhost:8224");   
    system("py -m http.server 8224");
    

}
