
void FUN_02159de4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  param_1[4] = param_3;
  if ((char)param_1[7] != param_2) {
    *(char *)(param_1 + 7) = (char)param_2;
    param_1[5] = 0x10;
  }
  iVar1 = 0;
  if (param_1[5] != 0) {
    iVar1 = (int)*(char *)((int)param_1 + 0x1f);
  }
  if (param_1[5] != 0 && iVar1 != param_2) {
    return;
  }
  func_0x021bd730(*(undefined4 *)(*param_1 + 0x88),param_1[4],0,param_4,param_4);
  return;
}

