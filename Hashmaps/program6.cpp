// Sliding Window!
vector<int> subarraySum(int arr[], int n, long long s)
{
    long long sum = 0;
    int i = 0, j = 0;
    while (j < n)
    {
        sum += arr[j];
        while (sum > s)
            sum -= arr[i++];
        if (sum == s && i <= j)
            return {i + 1, j + 1};
        j++;
    }
    return {-1};
}