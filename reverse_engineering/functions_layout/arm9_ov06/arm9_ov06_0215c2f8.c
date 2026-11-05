
void FUN_0215c2f8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215b158();
  if (iVar1 != 0) {
    if ((*(uint *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x40) & 6) != 0) {
      FUN_0207d180();
    }
    FUN_02157450(param_1,0xb);
  }
  iVar1 = FUN_0215c2e0(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_0215dec8(param_1);
  if (iVar1 == 0) {
    FUN_0215d2e4(param_1);
    return;
  }
  return;
}

