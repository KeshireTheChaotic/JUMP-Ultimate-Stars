
void FUN_02150270(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*(char *)((int)param_1 + 0x1a) == '\0') {
    param_1[10] = param_2;
    param_1[0xb] = param_2;
    FUN_021503b4();
    return;
  }
  iVar1 = param_1[0xb];
  param_1[0xb] = param_2;
  if (iVar1 == param_1[10]) {
    param_1[0xc] = param_1[10] * 100;
    FUN_02028384(*(undefined4 *)(*param_1 + 4),FUN_02150ad8,param_1[10],iVar1,param_4);
    return;
  }
  return;
}

