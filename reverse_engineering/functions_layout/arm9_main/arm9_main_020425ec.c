
void FUN_020425ec(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = param_2 + (DAT_020a100c ^ 1) * 4;
  if (param_3 != *(int *)(iVar1 + 0xc)) {
    *(int *)(iVar1 + 0xc) = param_3;
    DAT_020a0c3d = 1;
  }
  FUN_02051890(param_4,*(undefined4 *)(param_2 + (DAT_020a100c ^ 1) * 4 + 0x24),
               *(undefined4 *)(param_2 + 0x34));
  *(undefined4 *)(param_2 + (DAT_020a100c ^ 1) * 4 + 0x2c) = param_5;
  DAT_020a0c36 = 1;
  return;
}

