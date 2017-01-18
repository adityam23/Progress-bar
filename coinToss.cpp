#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>

int main ()
{
    uint64_t iter = 0, i ;
    unsigned long int heads = 0, tails = 0;
    int rNum = 0, percen = 10, length = 50, len, left = 10;
    do
    {
        std::cout<<" Enter number of coin tosses to be simulated ";
        std::cin>>iter;
    }while(iter<=0);
    std::cout<<"\t\t- Progress bar - \n";
    std::cout<<"[";
    srand(time(NULL));
    for ( i = 1; ((i/(double)iter)*100)<=100.0; i++ )
    {
        rNum = rand() % 2;
        if (rNum)
           heads++;

        else
            tails++;
       if(percen<=(int)((i/(double)iter)*100))
       {
            for(len=0;len<((percen*length)/100);len++)
                std::cout<<"#";
            for(len;len<length;len++)
                std::cout<<" ";
            std::cout<<"]"<<percen<<"% Completed"<<"\r"<<std::flush;
            percen+=10;
            if(left)
                left--;
       }

    }
    std::cout<<std::endl;
    std::cout<<std::endl<<" Number of heads = "<<heads;
    std::cout<<" Number of tails = "<<tails;
    std::cout<<" Ratio of heads:tails = "<<heads<<" : "<<tails;
    return 0;
    }
