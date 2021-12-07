#include<stdio.h>
main(){
  int a,b,c;
  printf("Enter any three numbers");
  scanf("%d%d%d",&a,&b,&c);
  
  if(a<b && a<c)
  {
  printf("the smallest among three %d",a);
  }else if(b<c && b<a){
  	printf("the smallest among three %d",b);
  }else
  {
  printf("the smallest among three %d",c);
  }
  return 0;
}
