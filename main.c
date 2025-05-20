#include <stdio.h>
#include<math.h>

int main() {
  int n;
  printf("enter the binary value");
  scanf("%d",&n);
  int sam=n;
  int count=0;
  int rem;
  int result;
  int actresult=0;
  int copyn=n;
  while(!sam==0){
      sam=sam/10;
      count++;
  }
 
  for(int i=0;i<count;i++){
       rem=copyn%10;
       if(rem==1){
           int result=pow(2,i);
           actresult+=result;
       }
       copyn/=10;
  }
  printf("the decimal value of %d is %d",n,actresult);
    return 0;
}
