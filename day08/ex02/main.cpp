#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <list>
#include <vector>

static void charListTest(void)
{
	std::cout << "Creating mstack" << std::endl;
	MutantStack<char> mstack;
	if (mstack.empty())
		std::cout << "stack is empty" << std::endl;
	else
		std::cout << "stack is not empty" << std::endl;
	std::cout << "pushing 'a' and 'b' to mutant stack" << std::endl;
	mstack.push('a');
	mstack.push('b');
	if (mstack.empty())
		std::cout << "stack is empty" << std::endl;
	else
		std::cout << "stack is not empty" << std::endl;
	std::cout << "Top element:" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "Stack size: " << mstack.size() << std::endl;
	std::cout << "Poping the stack" << std::endl;
	mstack.pop();
	std::cout << "Stack size: " << mstack.size() << std::endl;
	std::cout << "Pushing 'c', 'd', 'e' and '*' to the stack" << std::endl;
	mstack.push('c');
	mstack.push('d');
	mstack.push('e');
	mstack.push('*');
	MutantStack<char>::iterator it = mstack.begin();
	MutantStack<char>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Stack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "Poping the stack" << std::endl;
	mstack.pop();
	std::cout << "Stack:" << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << "Copying the stack" << std::endl;
	MutantStack<char> mstackCopy(mstack);
	MutantStack<char>::iterator itCopy = mstackCopy.begin();
	MutantStack<char>::iterator iteCopy = mstackCopy.end();
	++itCopy;
	--itCopy;
	std::cout << "Copyed stack:" << std::endl;
	while (itCopy != iteCopy)
	{
	std::cout << *itCopy << std::endl;
	++itCopy;
	}
	std::cout << "Pushing '!' to the original stack" << std::endl;
	mstack.push('!');
	it = mstack.begin();
	ite = mstack.end();
	std::cout << "Original stack:" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	itCopy = mstackCopy.begin();
	iteCopy = mstackCopy.end();
	std::cout << "Copy stack:" << std::endl;
	while (itCopy != iteCopy)
	{
	std::cout << *itCopy << std::endl;
	++itCopy;
	}
	std::cout << "Reverse iterators" << std::endl;
	MutantStack<char>::reverse_iterator itCopyR = mstackCopy.rbegin();
	MutantStack<char>::reverse_iterator iteCopyR = mstackCopy.rend();
	std::cout << "Copyed stack reverse:" << std::endl;
	while (itCopyR != iteCopyR)
	{
	std::cout << *itCopyR << std::endl;
	++itCopyR;
	}
}

static void floatVectorTest(void)
{
	std::cout << "Creating mstack" << std::endl;
	MutantStack<float> mstack;
	if (mstack.empty())
		std::cout << "stack is empty" << std::endl;
	else
		std::cout << "stack is not empty" << std::endl;
	std::cout << "pushing 5.5 and 13.7 to mutant stack" << std::endl;
	mstack.push(5.5);
	mstack.push(13.7);
	if (mstack.empty())
		std::cout << "stack is empty" << std::endl;
	else
		std::cout << "stack is not empty" << std::endl;
	std::cout << "Top number:" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "Stack size: " << mstack.size() << std::endl;
	std::cout << "Poping the stack" << std::endl;
	mstack.pop();
	std::cout << "Stack size: " << mstack.size() << std::endl;
	std::cout << "Pushing 3.1, 5.2, 737.3 and 0.4 to the stack" << std::endl;
	mstack.push(3.1);
	mstack.push(5.2);
	mstack.push(737.3);
	mstack.push(0.4);
	MutantStack<float>::iterator it = mstack.begin();
	MutantStack<float>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Stack:" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << "Poping the stack" << std::endl;
	mstack.pop();
	std::cout << "Stack:" << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << "Copying the stack" << std::endl;
	MutantStack<float> mstackCopy(mstack);
	MutantStack<float>::iterator itCopy = mstackCopy.begin();
	MutantStack<float>::iterator iteCopy = mstackCopy.end();
	++itCopy;
	--itCopy;
	std::cout << "Copyed stack:" << std::endl;
	while (itCopy != iteCopy)
	{
	std::cout << *itCopy << std::endl;
	++itCopy;
	}
	std::cout << "Pushing 424242 to the original stack" << std::endl;
	mstack.push(424242);
	it = mstack.begin();
	ite = mstack.end();
	std::cout << "Original stack:" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	itCopy = mstackCopy.begin();
	iteCopy = mstackCopy.end();
	std::cout << "Copy stack:" << std::endl;
	while (itCopy != iteCopy)
	{
	std::cout << *itCopy << std::endl;
	++itCopy;
	}
	std::cout << "Reverse iterators" << std::endl;
	MutantStack<float>::reverse_iterator itCopyR = mstackCopy.rbegin();
	MutantStack<float>::reverse_iterator iteCopyR = mstackCopy.rend();
	std::cout << "Copyed stack reverse:" << std::endl;
	while (itCopyR != iteCopyR)
	{
	std::cout << *itCopyR << std::endl;
	++itCopyR;
	}
}

static void mainTests(void)
{
	std::cout << "Creating mstack" << std::endl;
	MutantStack<int> mstack;
	if (mstack.empty())
		std::cout << "stack is empty" << std::endl;
	else
		std::cout << "stack is not empty" << std::endl;
	std::cout << "pushing 5 and 13 to mutant stack" << std::endl;
	mstack.push(5);
	mstack.push(13);
	if (mstack.empty())
		std::cout << "stack is empty" << std::endl;
	else
		std::cout << "stack is not empty" << std::endl;
	std::cout << "Top number:" << std::endl;
	std::cout << mstack.top() << std::endl;
	std::cout << "Stack size: " << mstack.size() << std::endl;
	std::cout << "Poping the stack" << std::endl;
	mstack.pop();
	std::cout << "Stack size: " << mstack.size() << std::endl;
	std::cout << "Pushing 3, 5, 737 and 0 to the stack" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Stack:" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << "Poping the stack" << std::endl;
	mstack.pop();
	std::cout << "Stack:" << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << "Copying the stack" << std::endl;
	MutantStack<int> mstackCopy(mstack);
	MutantStack<int>::iterator itCopy = mstackCopy.begin();
	MutantStack<int>::iterator iteCopy = mstackCopy.end();
	++itCopy;
	--itCopy;
	std::cout << "Copyed stack:" << std::endl;
	while (itCopy != iteCopy)
	{
	std::cout << *itCopy << std::endl;
	++itCopy;
	}
	std::cout << "Pushing 424242 to the original stack" << std::endl;
	mstack.push(424242);
	it = mstack.begin();
	ite = mstack.end();
	std::cout << "Original stack:" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	itCopy = mstackCopy.begin();
	iteCopy = mstackCopy.end();
	std::cout << "Copy stack:" << std::endl;
	while (itCopy != iteCopy)
	{
	std::cout << *itCopy << std::endl;
	++itCopy;
	}
	std::cout << "Reverse iterators" << std::endl;
	MutantStack<int>::reverse_iterator itCopyR = mstackCopy.rbegin();
	MutantStack<int>::reverse_iterator iteCopyR = mstackCopy.rend();
	std::cout << "Copyed stack reverse:" << std::endl;
	while (itCopyR != iteCopyR)
	{
	std::cout << *itCopyR << std::endl;
	++itCopyR;
	}
	
}

int main()
{
	std::cout << "----------INT DEFAULT(DEQUE) TEST----------" << std::endl;
	mainTests();
	std::cout << "----------CHAR LIST TEST----------" << std::endl;
	charListTest();
	std::cout << "----------FLOAT VECTOR TEST----------" << std::endl;
	floatVectorTest();
	return 0;
}