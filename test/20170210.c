nclude <stdio.h>



void test(void)

{

//  char NDX_aTimeSeparator[2] = {':','\0'}; 

//  char                a_wk_str[8];

//  int                 n_r = 0 ,n_q = 0;

    char    buff[50];

    unsigned char   r, g, b;



    r = 0x00ff;  

    g = 0x0000ff;  

    b = 0x000000ff;  

  //c = sprintf( &a_wk_str[0], "%02d%s%02d", n_r, &NDX_aTimeSeparator[0],n_q); 

    _snprintf_s(buff, sizeof(buff) - 1, sizeof(buff) - 1, "%4.2f %4.2f %4.2f RGB\n", (float)r / 255.0, (float)g / 255.0, (float)b / 255.0);

    printf("%s\n", buff);

}



int main(void)

{

    test();

    return 0; 

}
