#include <iostream>
using namespace std;
//Given a string v with N integers, sort its elements in ascending order

int main()
{
  int N, v[100001];
  cin>>N;
  for (int i = 1; i <= N; ++i)
    cin>>v[i];
  /*
   The sorted variable tells us whether we found elements in descending order at the current step.
If we did, then we will need to traverse the array one more time and see if there are any more elements in descending order.
We initialize sorted to 0 because we haven't done any searching yet, so we don't know if the array is sorted.
  */
  int sortat = 0, aux;
  while (sortat == 0) {
     /* We will initialize the "sorted" variable with 0 when we find numbers in descending order.
     If we don't find it, it means the string is sorted and we can stop. */
    sortat = 1;
    for (int i = 1; i < N; ++i)
      if (v[i] > v[i + 1]) {
        sortat = 0;
        // interschimbam pe v[i] cu v[i + 1]
        aux = v[i];
        v[i] = v[i + 1];
        v[i + 1] = aux;
      }
  }
  for (int i = 1; i <= N; ++i)
    cout<<v[i]<<' ';
  return 0;
}

