
void FUN_0215c5d4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215b158();
  if (iVar1 != 0) {
    FUN_02157024(param_1);
    FUN_02161888(*(undefined4 *)(param_1 + 0x1b8));
    FUN_0207cec8(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x10),0x10000000);
    if ((int)*(char *)(param_1 + 0x1e0) == (uint)*(byte *)(DAT_02172968 + 0x30)) {
      *(byte *)(DAT_02172968 + 0x2e) = *(byte *)(DAT_02172968 + 0x2e) & 0xfe;
    }
  }
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x28) != 0) {
    FUN_0207d418();
  }
  iVar1 = FUN_0215dec8(param_1);
  if (iVar1 == 0) {
    FUN_0215d2e4(param_1);
    return;
  }
  return;
}

