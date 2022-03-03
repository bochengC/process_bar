#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    cout<<"Hello World" << endl;
    int j , cnt = 0;
    bool status = true; 
    for(int i = 1 ; i < 100000000000 ; i++){
        //printf("\033[A\033[2K");
        cnt =0;
        if(status){
            j = i%20;
        }else{
            j = 20 - i%20;
        }
        printf("progress:[");
        while( cnt  < j){
            cnt++;
            //printf("*");
            printf("▉");
            printf("\033[32m");
            //printf(" \033[34m");
        }
        int spare_cnt = 20-j ;
        while( spare_cnt > 0 ){
            printf(" ");
            spare_cnt--;
        }
        printf("] %d / %d ％", j*5 , 100);
        printf("\n");
        if( i%40  == 39){
            status = true;
        }else if( i%20  ==19){
            status = false;
        }
        printf("\033[A\033[2K");
        usleep(200000);
        //printf("meas: %7.2lf M \n ", (i / 1e6));
    }
    
    
    return 0;
}

