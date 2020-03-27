#include <iostream>
using namespace std;

int main()
{
  int t, n;
  cin >> t;

  while(t--)
   {

	cin >> n ;

    int a[n];

    int i, j, count = 1;
	for( i=0; i<n; i++)

	{
	     cin >> a[i];
	}
	for( i=1; i<n; i++)

	{
	    if( i-5 < 0)
	    j = 0;

	    else
	    j = i-5;

	    for(j; j < i; j++)
	    {
	        if (a[i] >= a[j])
	        break;

	       if(j == i-1)
	       count++;
	    }
	}

			 cout << count << endl;
  }
	return 0;
}
