#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>

int main ()
{
    uint64_t heads = 0, tails = 0, iter = 0.0, i ;
    int rNum = 0, counter = 0;
    std::cout<<" Enter number of coin tosses to be simulated ";
    std::cin>>iter;
    std::cout<<"\t\t- Progress bar - \n";
    std::cout<<"[";
    srand(time(NULL));
    for ( i = 0; ((i/(double)iter)*100)<100.0; i++ )
    {
        rNum = rand() % 10 + 1; // rand() % 1 didn't work for some reason
        if (rNum%2==0)
           heads+= 1.0;

        else
            tails+= 1.0;
        if(((int)((i/(double)iter)*100))%10==0) // Print only 10 times (doesn't work)
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
