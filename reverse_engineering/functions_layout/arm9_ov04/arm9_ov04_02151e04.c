
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02151e04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(param_1 + 4);
  uStack_10 = param_4;
  iVar1 = FUN_02151d90(param_1,0x31305053);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  if (*(int *)(*(int *)(param_1 + 4) + 0x94) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0214e3ec();
  }
  if ((*(char *)(*(int *)(iVar1 + 4) + 0xa8) == '\0') && (_DAT_021d5160 <= DAT_02093c24)) {
    FUN_0207342c(0x78,3);
  }
  local_18 = (int)*(short *)(iVar2 + 0xa2) << 0xc;
  local_14 = (int)*(short *)(iVar2 + 0xa0) << 0xc;
  FUN_0214e1b8(param_1,&local_14,&local_18);
  return;
}

