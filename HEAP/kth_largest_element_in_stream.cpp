/*Given an input stream of n integers, find the kth largest element for each element in the stream.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains two lines. The first line of each test case contains two space separated integers k and n . Then in the next line are n space separated values of the array.

Output:
For each test case, in a new line, print the space separated values denoting the kth largest element at each insertion, if the kth largest element at a particular insertion in the stream doesn't exist print -1.

Constraints:
1 <= T <= 100
1 <= K <= n
1 <= n <= 106
1 <= stream[] <= 105

Example:
Input:
2
4 6
1 2 3 4 5 6
1 2
3 4

Output:
-1 -1 -1 1 2 3
3 4
*/
#include<bits/stdc++.h>
using namespace std;
class cmp
{
	public:
		bool operator()(int &A,int &B)
		{
			return A > B;
		}
};
void kthLargest(int k)
{
	priority_queue<int,vector<int>,cmp> H;
	int countt = 0;
	int N;
	int nn;
	cin>>nn;
	for(int i=0;i<nn;i++)
	{
		cin>>N;
		if(H.size() < k)
			H.push(N);
		else
		{
			if(N > H.top())
			{
				H.pop();
				H.push(N);
			}
		}
			if(H.size()<k)
			cout<<-1<<" ";
			else
			cout<<H.top()<<" ";
		count++;

	}
}

int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;

	kthLargest(k);
	cout<<endl;
	}
	return 0;
}
