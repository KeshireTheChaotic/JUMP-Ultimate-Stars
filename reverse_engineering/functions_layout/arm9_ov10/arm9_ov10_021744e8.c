
void FUN_021744e8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x1c0c) = 0;
  FUN_02053f5c(param_1 + 0x1bf4);
  FUN_02053f5c(param_1 + 0x1a14);
  DAT_021a7360 = (uint)(*(int *)(param_1 + 0x1018) == 1);
  if ((*(int *)(param_1 + 0x1ba0) == 0) || (iVar1 = FUN_020532e4(param_1 + 0x1b34), iVar1 != 0)) {
    FUN_02053528(param_1 + 0x1b34,0x21740e5,param_1,param_1 + 0x1000,0x1000,param_2);
    FUN_020531dc(param_1 + 0x1b34);
  }
  return;
}

