
void FUN_020425bc(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  param_2 = param_2 + (DAT_020a100c ^ 1) * 4;
  iVar1 = *(int *)(param_2 + 0xc);
  *(int *)(param_2 + 0xc) = param_3;
  if (param_3 != iVar1) {
    DAT_020a0c3d = 1;
    DAT_020a0c36 = 1;
  }
  return;
}

