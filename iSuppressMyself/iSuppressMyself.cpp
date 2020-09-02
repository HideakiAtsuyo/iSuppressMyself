#include <iostream>
#include <fstream>
#include <stdio.h>
#include <direct.h>
#include <chrono>

#define one char* pth = _getcwd(0, 0);
#define two std::string dir(pth);
#define three std::free(pth);
#define four return dir;
#define five clock_t s = clock();
#define six float ah = seconds * CLOCKS_PER_SEC;
#define seven while (clock() < s + ah);
#define eight return;
#define nine std::string pathtoexe = argv[0];
#define ten std::string onebis = "call :dslmao&exit /b";
#define eleven std::string twobis = ":dslmao";
#define twelve std::string threebis = "start /b \"\" cmd /c del " + pathtoexe;
#define thirteen std::string fourbis = "start /b \"\" cmd /c del \"%~f0\"&exit /b";
#define fourteen selfdestruct << onebis << std::endl << twobis << std::endl << threebis << std::endl << fourbis << std::endl;
#define fifteen selfdestruct.close();
#define afterthirteenandbeforefourteen std::ofstream selfdestruct(cd()+"\\destruct.bat");
#define sixteen sleep(0.3);
#define seventeen  system("destruct.bat");
#define returnzerolmao return 0;

std::string cd(){one;two;three;four}
void sleep(float seconds) {five;six;seven;eight;}
int main(int argc, char *argv[]){nine;ten;eleven;twelve;thirteen;afterthirteenandbeforefourteen;if (selfdestruct){fourteen;fifteen;}sixteen;seventeen;returnzerolmao;}