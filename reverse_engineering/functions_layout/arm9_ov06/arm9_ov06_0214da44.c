
void FUN_0214da44(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_02168590(*(undefined4 *)(DAT_02172960 + 0xf0),1,param_3,param_4,param_4);
  FUN_0214f91c(DAT_02172960);
  FUN_02154468(*(undefined4 *)(DAT_02172960 + 0xec),1);
  *(undefined1 *)(*(int *)(DAT_02172960 + 0x114) + 0x1912) = 1;
  for (iVar1 = 0; iVar1 < *(int *)(DAT_02172960 + 0x158); iVar1 = iVar1 + 1) {
    *(undefined1 *)(*(int *)(DAT_02172960 + iVar1 * 4 + 0xdc) + 0xf5) = 1;
  }
  return;
}

