#include<stdio.h>
#include<stdlib.h>


typedef struct {
  char * name;
  int age;
}UserListVo;

typedef struct {
  char * name;
  int age;
}UserWriteVo;

typedef struct {
  char * name;
  int age;
}User;

int main(){
  UserListVo userlistvo;
  userlistvo.name = "zhangxiaomin";
  userlistvo.age = 1;
  printf("%s %d\n",userlistvo.name,userlistvo.age);
  User user = {"zhangxiaomin",12};
  printf("%s %d\n",user.name,user.age);
  UserWriteVo userWriteVo = {"zhangxiaomin",12};
  printf("%s %d\n",userWriteVo.name,userWriteVo.age);
  printf("%s %d\n",user.name,user.age);
  exit(0);
  return 0;
}
