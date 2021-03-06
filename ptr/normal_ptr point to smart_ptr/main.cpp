#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>
#include <memory>

#define Inf 2147483647
#define Pi acos(-1.0)
#define N 1000000
#define LL long long

inline LL Power(int b, int p) {
  LL ret = 1;
  for (int i = 1; i <= p; i++)
    ret *= b;
  return ret;
}

const int dr[] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dc[] = {0, 1, 1, 1, 0, -1, -1, -1};

#define F(i, a) for (int i = (0); i < (a); i++)
#define Fs(i, sz) for (size_t i = 0; i < sz.size(); i++)
#define Fe(i, x) for (typeof(x.begin()) i = x.begin(); i != x.end(); i++)
#define Set(a, s) memset(a, s, sizeof(a))
#define Max(a, b) (a < b ? b : a)
#define Min(a, b) (a > b ? b : a)

using namespace std;

int main(int argc, const char *argv[]) {

  //time to code
  //
  shared_ptr<int> smart_ptr;
  int *normal_ptr = new int;
  *normal_ptr = 10;
//  smart_ptr = normal_ptr; //not allowed
//  shared_ptr<int> smart_ptr_new = normal_ptr; //not allowed
//  shared_ptr<int> smart_ptr_new(normal_ptr); //allowed
  smart_ptr = shared_ptr<int>(normal_ptr);

  cout << *smart_ptr << endl; //10
  *smart_ptr = 20;
  cout<<*normal_ptr<<endl; //20

  //so here is the situation 10<-normal_ptr<-smart_ptr

  return 0;
}

// @END_OF_SOURCE_CODE
