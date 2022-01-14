#include <stdio.h>
int main(int argc, char const *argv[])

    int returnmax(int array[], int n)
{
    int max = 0; 
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {1, 12, 3, 54, 5, 67, 654};
    int max = returnmax(arr, 7);
    prinntf("the maximum element in this array is%d", max);
    return 0;
}
