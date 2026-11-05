
void FUN_0215a88c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5)

{
  if (param_5 == '\0') {
    *(char *)(param_1 + 0x138) = (char)param_2;
    *(char *)((int)param_1 + 0x4e1) = (char)param_3;
  }
  if (param_1[3] != 0) {
    (**(code **)(**(int **)(param_1[0x3e] + 4) + 0xd8))(*(int **)(param_1[0x3e] + 4),0);
    FUN_0214cf50(param_1[2],*param_1,*(undefined2 *)param_1[3],1,0x80);
    FUN_0214cebc(param_1[2],1);
    FUN_0215a984(param_1,param_4);
    return;
  }
  if (param_5 == '\0') {
    FUN_0215a938(param_1,param_2,param_3,0,param_4);
  }
  FUN_0215aa08(param_1,param_4,0x27,1);
  return;
}

