#include "stack.h"
#include <iostream>
using namespace std;

int main()

{
	Stack<int> stackS(5);
	int * mas;
	int num = 0;
    int a = 1, b = 2, c = 6;
	stackS.Add(a);
	stackS.Add(b);
	stackS.Add(c);
    stackS.printStack();
	mas = stackS.saveTomas();
	
	
	

return 0;

}


