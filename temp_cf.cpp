#include<iostream>
#include<stack>
using namespace std; 

void solve(stack<int> & input_stack, int x)
{
	if (input_stack.empty())
	{
		input_stack.push(x);
		return;
	}

	int num = input_stack.top();
	input_stack.pop();

	solve(input_stack, x);

	input_stack.push(num);
	
}

stack<int> push_at_bottom_of_the_stack(stack<int> & input_stack, int x)
{
	solve(input_stack, x);
	return input_stack;
}

void reverse_stack_using_recursion(stack<int> & input_stack)
{
	if (input_stack.empty())
	{
		return;
	}

	int num = input_stack.top();
	input_stack.pop();

	reverse_stack_using_recursion(input_stack);

	push_at_bottom_of_the_stack(input_stack, num);
	
}




void sort_stack(stack<int> & s)
{
	if (s.empty())
	{
		return;
	}

	int num = s.top();
	s.pop();

	sort_stack(s);

	sorted_insert(s, num);
	
}

int main()
{
	stack<int> stk;

	for (int i = 0; i < 20; i++)
	{
		stk.push(i);
	}

	reverse_stack_using_recursion(stk);

	for (int i = 0; i < stk.size(); i++)
	{
		cout << stk.top() << " ";
		stk.pop();
	}

	return 0;
}