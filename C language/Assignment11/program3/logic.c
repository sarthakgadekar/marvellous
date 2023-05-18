int Difference(int Arr[], int iLength)
{
    register int iCnt = 0;
    int start = 0;
    int end = iLength - 1;
    int max=0;
    int min=0;
    while (start < end)
    {
        for (iCnt = 0; iCnt < iLength; iCnt++)
        {
            if(Arr[start]>Arr[end])
            {
                max=Arr[start];
                end--;
            }
            else
            {
                max=Arr[end];
                start++;
            }
        }
        
    }
    iCnt = 0;
    start = 0;
    end = iLength - 1;
    while (start < end)
    {
        for (iCnt = 0; iCnt < iLength; iCnt++)
        {
            if(Arr[start]<Arr[end])
            {
                min=Arr[start];
                end--;
            }
            else
            {
                min=Arr[end];
                start++;
            }
        }
        
    }
    return max-min;
    
}