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
	float result = 0.0;

	switch (taskNum)
	{
		case 1:
			result = ++i + j--;
			return result;
		case 2:
			result = --x + y++;
			return result;
		case 3:
			result = i++ + ++i;
			return result;
			break;
		case 4:
			result = --j + j--;
			return result;
			break;
		case 5:
			result = x-- - --x;
			return result;
			break;
		case 6:
			result = ++y - y++;
			return result;
			break;
		case 7:
			result = i++ + j++ + ++k;
			return result;
			break;
		case 8:
			result = --x - x-- - --y;
			return result;
			break;
		case 9:
			result = x++ * ++x;
			return result;
			break;
		case 10:
			result = y-- / --y;
			return result;
			break;
		case 11:
			result = ++i - i++ + --j;
			return result;
			break;
		case 12:
			result = --x * x++ + ++y;
			return result;
			break;
		case 13:
			result = x++ + y-- - z++;
			return result;
			break;
		case 14:
			result = ++a * --b / c++;
			return result;
			break;
		case 15:
			result = i-- + ++j - k-- ;
			return result;
			break;
		default:
			std::cout << "Invalid taskNum!" << '\n';
	}
}

int main()
{
	for (int index = 1; index <= 15; index++)
	{
		float result = DoTask(index);

		std::cout << "Result #" << index << ": " << result << '\n';
	}

	return 0;
}