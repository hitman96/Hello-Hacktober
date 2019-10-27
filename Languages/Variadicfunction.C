int  sum (int count,...) {
    double total, i, temp;
    total = 0;
    va_list args;
    va_start(args, count);
    for(i=0; i<count; i++)
    {
        temp = va_arg(args, int);
        total += temp;
    }
    va_end(args);
    return total;

}

int min(int count,...) {
int min=MAX_ELEMENT,temp;
va_list n;
va_start(n, count);
for(int i=0;i<count;i++)
{
    temp=va_arg(n,int);
    if(min>temp)
    min=temp;
}
va_end(n);
return min;
}

int max(int count,...) {
    int max=MIN_ELEMENT,temp;
    va_list n;
    va_start(n, count);
    for(int i =0;i<count;i++)
    {
        temp=va_arg(n, int);
        if(max<temp)
        max=temp;
    }
    return max;
}
