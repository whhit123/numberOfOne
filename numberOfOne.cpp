
#include <iostream>

using namespace std;

int bits(int x)
{      
	x=(x & 0x55555555) + ((x >>1 ) & 0x55555555);       
	x=(x & 0x33333333) + ((x >>2 ) & 0x33333333);       
	x=(x & 0x0f0f0f0f) + ((x >>4 ) & 0x0f0f0f0f);       
	x=(x & 0x00ff00ff) + ((x >>8 ) & 0x00ff00ff);       
	x=(x & 0x0000ffff) + ((x >>16) & 0x0000ffff);       
	return x;
} //https://www.zhihu.com/question/52726115

int lowbit(int x) {
    return x & -x;
}

int main(void)

{
	int i;
	cin>>i;
	cout<<lowbit(i)<<endl;
	i = bits(i);
	cout<<i<<endl;
	//system("PAUSE");

}

