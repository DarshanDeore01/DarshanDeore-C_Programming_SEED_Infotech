
}

void prime(int num)
{

    int counter, is_prime=0;
    for(counter=1;counter<=num;counter=counter+1)
    {
        if(num%counter==0)
        {
            is_prime++;
        }
    }

    if(is_prime==2)
    {
        printf("%d is prime",num);

    }
    else
    {
        printf("%d is not prime",num);
    }
}