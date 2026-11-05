
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02156048(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x26) == '\0') {
    iVar1 = FUN_0203b3e4();
    FUN_0214ecc0(*(undefined4 *)(iVar1 + 0x88),0,0);
  }
  else {
    iVar1 = FUN_0203b3f4();
    FUN_0214ecc0(*(undefined4 *)(iVar1 + 0x88),0,0);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_0206ae98();
  }
  _DAT_021d5154 = 0;
  iVar1 = 0x20;
  do {
    func_0x021b526c(iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x22);
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 8))();
  }
  FUN_0201b244(param_1);
  return;
}

