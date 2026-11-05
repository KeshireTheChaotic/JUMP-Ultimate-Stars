
int FUN_02005e3c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_24 [3];
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_24[1] = 0;
  local_24[0] = param_1;
  uStack_10 = param_4;
  iVar1 = FUN_02005960(param_3,0x7fffffff,0x20049b9,local_24,&local_14,&local_18,local_24 + 2);
  if (param_2 != (int *)0x0) {
    *param_2 = param_1 + local_14;
  }
  if (local_24[2] != 0) {
    DAT_020a0c10 = 0x22;
    return -1;
  }
  if (local_18 != 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

