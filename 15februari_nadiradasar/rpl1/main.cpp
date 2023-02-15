#include <iostream>

using namespace std;

int main()
{
    int i;
   string xiirpl[] = {"rega", "saipul", "hendra", "fajar", "iqbal"};
   cout << "Yang paling cakep di XII RPL 1 adalah " <<xiirpl[1] <<endl;
   cout << "diantara: ";

   for(i=0; i<5; i++){
    cout << xiirpl[i] << ",";
   }
    return 0;
}
