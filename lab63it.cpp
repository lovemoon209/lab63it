#include <iostream>
using namespace std;
void Input(int* a, const int size)
{
for (int i=0; i<size; i++)
{
cout << "a[" << i << "] = ";
cin >> a[i];
}
cout << endl;
}
int negative(int *a, const int size) {
      int negative = 0;
  for (int i = 0; i < size; ++i) {
    if (a[i] < 0) {
      negative++;
    }
  } return negative;
}

int main(){
const int n = 5;
int a[n];
Input(a, n);
int num = negative(a, n);
cout << "кількість відʼємних чилел масиву:  " << num << endl;
return 0;
}