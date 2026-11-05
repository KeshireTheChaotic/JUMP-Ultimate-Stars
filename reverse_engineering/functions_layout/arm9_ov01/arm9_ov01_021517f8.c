
void FUN_021517f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 0) {
    *(int *)(iVar1 + 0x154) = *(int *)(iVar1 + 0x154) + 1;
  }
  iStack_10 = (*(uint *)(iVar1 + 0x154) >> 2) * -0x1000;
  iStack_c = (*(uint *)(iVar1 + 0x154) >> 2) << 0xc;
  uStack_8 = param_4;
  FUN_021511c8(param_1,&iStack_c,&iStack_10);
  return;
}

