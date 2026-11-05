
void FUN_0216d82c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  uStack_10 = param_4;
  piVar1 = (int *)FUN_0216d69c(*(undefined4 *)(param_1 + 0x30));
  local_18 = *piVar1 + (int)*(short *)(param_1 + 0x44);
  local_14 = piVar1[1] + (int)*(short *)(param_1 + 0x46);
  FUN_0216d800(*(undefined4 *)(param_1 + 0x2c),&local_18);
  *(undefined2 *)(iVar2 + 0x24) = 0;
  *(undefined2 *)(iVar2 + 0x26) = 0;
  return;
}

