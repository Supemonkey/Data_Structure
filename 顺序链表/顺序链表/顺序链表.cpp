#include <iostream>
#include <string>

using namespace std;

const int buf_size = 10;
int datlist[buf_size];
int length = 0;

void insertList(int dat, int loc)
{
	if (loc > buf_size)
		return;
	else if (length == buf_size) return;
	else {//可以插入
		if (loc < length) {//在中间插入
			for (int i=length-1; i >= loc; i--) {
				datlist[i+1] = datlist[i];
			}
		}
		else if (loc > length) {
			loc = length;
		}
		datlist[loc] = dat;
		length++;
	}
}

void showList()
{
	for (int i=0; i<length; i++) {
		cout << datlist[i] << " ";
	}
}
int main()
{
	insertList(1, 0);
	//showList(datlist, buf_size);
	showList();
	system("pause");
	return 0;
}