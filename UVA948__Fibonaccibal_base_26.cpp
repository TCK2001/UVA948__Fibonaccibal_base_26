/*
Sample Input
10
1
2
3
4
5
6
7
8
9
10
Sample Output
1 = 1 (fib)
2 = 10 (fib)
3 = 100 (fib)
4 = 101 (fib)
5 = 1000 (fib)
6 = 1001 (fib)
7 = 1010 (fib)
8 = 10000 (fib)
9 = 10001 (fib)
10 = 10010 (fib)
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int fib[39],i,j;
	fib[0]=0;
	fib[1]=1;
	for(i=2;i<39;i++)
	{
		fib[i]=fib[i-1]+fib[i-2]; //피보나치; 
	}
	int n,input; 
	cin>>n;
	while(n--) //횟수; 
	{
		cin>>input; //값 입력; 
		cout<<input<<" = ";
		int flag=0;
		for(i=38;i>=2;i--) //잴 큰거부터 비교 시작;  
		{
			if(input-fib[i]>=0) //呼 0보다 크거나 같으면 1 출력; 
			{
				cout<<"1";
				input-=fib[i];
				flag=1;
			}
			else if(flag==1) //출력하고 0 출력; 
			{
				cout<<"0";
			}
		}
		cout<<" (fib)"<<endl;
	}
		
	

return 0;
}

