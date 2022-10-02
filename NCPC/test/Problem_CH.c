#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define max(a,b) ((a>=b)?a:b)
#define min(a,b) ((a>=b)?b:a)
int main(){
    int y,x,run,pos;
    scanf("%d",&run);
    while(run--){
        int min_x=INT_MAX;
        int max_x=INT_MIN;
        int min_y=INT_MAX;
        int max_y=INT_MIN;
        scanf("%d",&pos);
        while(pos--){
            scanf("%d %d",&x,&y);
            max_x=max(max_x,x);
            max_y=max(max_y,y);
            min_x=min(min_x,x);
            min_y=min(min_y,y);
        }
        printf("%d\n",(max_x-min_x)*(max_y-min_y));
    }
    return 0;
}
