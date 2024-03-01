#include<iostream>

float DoTask(int taskNum)
{
	float i = 1.0;
	float j = 2.0;
	float k = 3.0; 
	float x = 4.0; 
	float y = 5.0; 
	float z = 6.0; 
	float a = 7.0; 
	float b = 8.0; 
	float c = 9.0;

	switch (taskNum)
	{
		case 1:
			return ++i + j--;
			break;
		case 2:
			return --x + y++;
			break;
		case 3:
			return i++ + ++i;
			break;
		case 4:
			return --j + j--;
			break;
		case 5:
			return x-- - --x;
			break;
		case 6:
			return ++y - y++;
			break;
		case 7:
			return i++ + j++ + ++k;
			break;
		case 8:
			return --x - x-- - --y;
			break;
		case 9:
			return x++ * ++x;
			break;
		case 10:
			return y-- / --y;
			break;
		case 11:
			return ++i - i++ + --j;
			break;
		case 12:
			return --x * x++ + ++y;
			break;
		case 13:
			return x++ + y-- - z++;
			break;
		case 14:
			return ++a * --b / c++;
			break;
		case 15:
			return i-- + ++j - k-- ;
			break;
	}
}

int main()
{
	for (int index = 1; index <= 15; index++)
	{
		float result = DoTask(index);

		std::cout << " #" << index << ": " << result << '\n';
	}

	return 0;
}