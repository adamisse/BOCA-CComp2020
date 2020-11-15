#include <stdio.h>

int Area(int x1,int y1,int a1,int b1)
{
  int area;
  area=(a1-x1)*(b1-y1);
  return area;
}

int main(void){
  int x1,y1,x2,y2;
  int a1,b1,a2,b2;
  int area1,area2,areatotal,areaaux=0;;
  scanf("%d %d %d %d",&x1,&y1,&a1,&b1);
  scanf("%d %d %d %d",&x2,&y2,&a2,&b2);
  if(a1>x2 && b1>y2)
  {
    int aaux,baux,xaux,yaux;
    aaux=a1-x2;
    baux=b1-y2;
    areaaux=aaux*baux;
  }
  area1=Area(x1,y1,a1,b1);
  area2=Area(x2,y2,a2,b2);
  areatotal=area1+area2-areaaux;
  printf("RESP:%d",areatotal);
  return 0;

}