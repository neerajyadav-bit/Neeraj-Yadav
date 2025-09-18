
{
    curSum=curSum+arr[j];
    if (curSum>maxSum)
    {
        maxSum=curSum;
    }
}
}
printf("%d",maxSum);
return 0;
}