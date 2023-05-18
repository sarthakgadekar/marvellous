int Smallest(int Arr[],int iLength)
{
    int start=0;
    int end=iLength -1;
    int iCnt=0;
    int Min=0;
    while(start<end)
    {
        for(iCnt=0;iCnt<iLength;iCnt++)
        {
            if(Arr[start]<Arr[end])
            {
                Min=Arr[start];
                end--;
            }
            else
            {
                Min=Arr[end];
                start++;
            }
        }
        return Min;
    }
}