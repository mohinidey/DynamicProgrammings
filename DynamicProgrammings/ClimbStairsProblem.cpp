/*
Climbing Stairs Problem - Same pattern as Fibonacci Series
Input : n = 2
Output : 2
There are two ways : (1, 1) and (2)
Input : n = 4
Output : 5
(1, 1, 1, 1), (1, 1, 2), (2, 1, 1), (1, 2, 1), (2, 2)
*/
#include <iostream>

class ClimbStairsProblem
{
public:
	void Method(int n)
	{
		//using Recursion
		//O(2^n)
		std::cout << "Number of ways to climb stairs using Recursion " << RecFib(n);

		//using DP
		//O(n)
		std::cout << "Number of ways to climb stairs using DP " << DPFib(n);
	}
	int RecFib(int n)
	{
		if (n <= 1)
			return 1;
		else
			return RecFib(n - 1) + RecFib(n - 2);
	}
	int DPFib(int n)
	{
		int c1 = 0;
		int c2 = 1;
		int res;
		for (int i = 1;i <= n;i++)
		{
			res = c1 + c2;
			c1 = c2;
			c2 = res;
		}
		return res;
	}

};

