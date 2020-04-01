#include <float.h>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <cmath>
#include <cstdint>
#include <iomanip>
#include <ctime>
#include <direct.h>

#ifdef  USE_FLOAT128
    typedef __float128  long_double_t;
#else
    typedef long double long_double_t;
#endif

using namespace std;

void error()
{
    cin.clear();
    cin.ignore(DBL_MAX, '\n');
    cout<<endl<<" you can only enter numbers: ";
}

long_double_t decimal(long_double_t x)
{
  x -= (long long int) x;
  return x;
}

using namespace std;

int main()
{
    long long int num, sum=0;

            for(int i=0; i<n; i++)
                {
                cout<<" TIME INSTANCE "<<i+1<<": ";
                cin>>num[i];
                while(cin.fail()){error(); cin>>num[i];}
                sum+=num[i];
                }
}

































