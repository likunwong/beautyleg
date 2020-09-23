int fb(int input) 
{
    if (input==0) 
    {
        return 0;
    }
    if (input==1)
    {
        return 1;
    }
    return fb(input-1) + fb(input-2);
}
