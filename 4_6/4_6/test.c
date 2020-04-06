#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<assert.h>
//int* my_sort(int* arr, int left, int right)
//{
//	int* ret = arr;
//	int temp = 0;
//	assert(arr != NULL);
//
//	while (left < right)
//	{
//			
//		while ((left < right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		
//		while ((left < right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		
//		if (left < right)
//		{
//			temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//	return ret;
//}
//
//void print(const int * arr, const int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main(){
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr, len);
//	print(my_sort(arr, 0, len - 1), len);
//	return 0;
//}



//#include<stdio.h>
//#include<assert.h>
//char * strcpy(char *dst, const char *src)
//{
//	char *cp = dst;
//	assert(dst&&src);
//	while (*cp++ = *src++)
//		;
//	return(dst);
//}
//
//int main()
//{
//	char arr[10] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
//	strcpy(arr, "hello");
//	printf("%s\n", arr);
//	return 0;
//}

#include<stdio.h>
#include<assert.h>
int strlen(const char *str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != 0)//当不为\0时
	{
		count++;// 计算字符串长度
			str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello";
	int ret = strlen(arr);
	printf("%d\n", ret);
	return 0;
}
