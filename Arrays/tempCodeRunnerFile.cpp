int main()
{
    int arr[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j < 9; j++)
        {
            if (arr[i] > arr[j])
            {
                int swap = arr[j];
                arr[j] = arr[i];
                arr[i] = swap;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
}