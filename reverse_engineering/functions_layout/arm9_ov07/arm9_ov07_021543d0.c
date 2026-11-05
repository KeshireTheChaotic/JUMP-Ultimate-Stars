
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_021543d0(int param_1)

{
  uint uVar1;
  
  FUN_02154274(*(undefined4 *)(*(int *)(param_1 + 4) + 0x10),
               *(undefined4 *)(*(int *)(param_1 + 4) + 0x124));
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x128))();
  if ((((uVar1 & 3) == 3) && (*(char *)(*(int *)(param_1 + 4) + 0xa8) == '\0')) &&
     (_DAT_021d5160 <= DAT_02093c24)) {
    FUN_0207342c(0x78);
  }
  return;
}

