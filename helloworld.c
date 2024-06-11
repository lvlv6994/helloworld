#include<stdio.h>

typedef struct {
  char * name;
  int age;
}UserWriteVo;

typedef struct {
  char * name;
  int age;
}User;

int main(){
  User user = {"zhangxiaomin",12};
  printf("%s %d\n",user.name,user.age);
  UserWriteVo userWriteVo = {"zhangxiaomin",12};
  printf("%s %d\n",userWriteVo.name,userWriteVo.age);
  printf("%s %d\n",user.name,user.age);
  return 0;
}
