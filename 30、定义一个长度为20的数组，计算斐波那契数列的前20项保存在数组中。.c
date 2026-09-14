int main()
{
    int fib[20];  
    fib[0] = 0;   
    fib[1] = 1;   
    int i; 
    for(i = 2; i < 20; i++)
    {
        fib[i] = fib[i-1] + fib[i-2]; 
    }

    printf("斐波那契数列前20项：\n");
    for(i = 0; i < 20; i++)
    {
        printf("%d ", fib[i]);
    }
    
    return 0;
}
