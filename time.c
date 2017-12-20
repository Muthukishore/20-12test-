#include<stdio.h>

int main() {
  int h1,m1,h2,m2,diff;
  scanf("%d:%d",&h1,&m1);
  scanf("%d:%d",&h2,&m2);
  diff=((h2*60)+m2)-((h1*60)+m1);
  printf("%dmins(%d:%d)",diff,diff/60,diff%60);
}
