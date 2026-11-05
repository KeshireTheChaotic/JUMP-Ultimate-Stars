
void FUN_0215074c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_1 + 4);
  uStack_10 = param_4;
  if (*(int *)(iVar1 + 0x94) != 0) {
    FUN_0214d498();
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x9c) != 0) {
    FUN_0214d498();
  }
  local_18 = (int)*(short *)(iVar1 + 0xa2) << 0xc;
  local_14 = (int)*(short *)(iVar1 + 0xa0) << 0xc;
  FUN_0214d4c0(param_1,&local_14,&local_18);
  return;
}

