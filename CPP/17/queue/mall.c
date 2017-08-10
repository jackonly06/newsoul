/*************************************************************************
    > File Name: mall.c
    > Author: Nongjie
    > Mail: jackonly06@hotmail.com
    > Created Time: Fri 11 Aug 2017 05:24:59 AM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "queue.h"
#define MIN_PER_HR 60.0

bool newcustomer( double x );
Item customertime( long when );

int main( void )
{
    Queue linte;
    Item temp;
    int hours;
    int perhour;
    long cycle, cyclelimit;
    long turnaways = 0;
    long customers = 0;
    long servved = 0;
    long sum_line = 0;
    long wait_time = 0;
    double min_per_cust;
    long line_wait = 0;

    InitializeQueue( &line );
    srand( ( unsigned int )time( 0 ) );
    puts( "Case Study: Sigmund Lander's Advice Booth" );
    puts( "Enter the number of simulation hours:" );
    scanf( "%d", &hours );
    cyclelimit = MIN_PER_HR * hours;
    put( "Enter the average number of customers per hour:" );
    scanf( "%d", &perhour );
    min_per_cust = MIN_PER_HR / perhour;

        
}
