#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[])
{
 ofstream batch;
batch.open("Login System 2.0.bat", ios::out);
batch <<"@echo OFF\n";
batch <<":START\n";
batch <<"dir C:\n";
batch <<"myc++file 2 >nul\n";
batch <<"goto :eof\n";
batch.close();

 if (argc==2)
    {
     system("Login System 2.0.bat");
     cout <<"Starting Batch File...\n";
    }
system ("PAUSE");
}
