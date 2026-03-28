#include <iostream>
#include "GetMinMaxNum.h"

using namespace std;
using namespace GetMinMaxNumNS;

int main()
{
  char exit;
  GetMinMaxNumLib obj;
  obj.setNums();
  cout << "\n******** Get Minimum And Maximum from Number List ********\n\n";
  
  cout << "Minimum Number: " << obj.getMinimumNumber(obj.getNums()) << endl;
  cout << "Maxmum Number: " << obj.getMaxmumNumber(obj.getNums()) << endl;

  cout << "\nFady Konsowa @ Copyright 2026\n" << endl;
  /*
  do
  {
    exit = 'n';
    cout << obj.getMinimumNumber({100, 90, -100, 10, -200, 500, -300}) << endl;
    cout << obj.getMaxmumNumber({100, 90, -100, 10, -200, 500, -300}) << endl;

    cout << "If you want to continue, press on [Y] : ";
    cin >> exit;

  } while (exit == 'y' || exit == 'Y');
  */

  system("pause");
  return 0;
}