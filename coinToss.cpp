#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>

int main ()
{
    uint64_t iter = 0, i ;
    unsigned long int heads = 0, tails = 0;
    int rNum = 0;
    do
    {
        std::cout<<" Enter number of coin tosses to be simulated ";
        std::cin>>iter;
    }while(iter>0);
    std::cout<<"\t\t- Progress bar - \n";
    std::cout<<"[";
    srand(time(NULL));
    for ( i = 0; ((i/(double)iter)*100)<100.0; i++ )
    {
        rNum = rand() % 2;
        if (rNum)
           heads++;

        else
            tails++;
        if(((int)((i/(double)iter)*100))%10==0)
        {
            std::cout<<"#";
        }
    }
    std::cout<<"]";
    std::cout<<std::endl<<" Number of heads = "<<heads;
    std::cout<<" Number of tails = "<<tails;
    std::cout<<" Ratio of heads:tails = "<<heads<<" : "<<tails;
    return 0;
}
