#include<stdio.h>
#include<math.h>

int powOf2(int * rmd ,int n){
    int count =0;
    int m = n;
    while(n>1){
        n/=2;
 
        count++;
    }
    *rmd=m-(int)pow(2,count);
    return count;
}
 
int countOfHours(int n){
    int count = 1;
    int hours=0;
    int rmd;
    int sss;
    int power=powOf2(&rmd,n);
    int rmdPower=powOf2(&sss,rmd);
    while(count!=n){
        if(rmdPower==power){
            count+=1;
            hours++;
            rmdPower=power+2;
        }else if(n>count*2){
            count*=2;
            power--;
            hours++;
        }else if(count>n) {
            count--;
            hours++;
        }else{
            count++;
            hours++;
        }
 
    }
    return hours;
}
 