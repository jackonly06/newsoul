#include <stdio.h>

void test(void)
{
    //  char NDX_aTimeSeparator[2] = {':','\0'};
    //      //  char                a_wk_str[8];
    //          //  int                 n_r = 0 ,n_q = 0;
    char    buff[32];
    unsigned char   r;
    unsigned char   addr[4] = {0};
    r = 0x00ff;
    //c = sprintf( &a_wk_str[0], "%02d%s%02d", n_r, &NDX_aTimeSeparator[0],n_q);
    sprintf(buff, "%03d.%03d.%03d.%03d", addr[3], addr[2], addr[1], addr[0]);
    printf("%s\n", buff);
}

int main(void)
{
    //    int a=1,b=2;
    //    Myprintf("a=%d,b=%d",a,b);
    test();
    return 0;
}

