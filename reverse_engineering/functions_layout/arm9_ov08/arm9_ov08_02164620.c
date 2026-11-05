
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02164620(void)

{
  int iVar1;
  ushort local_10;
  ushort local_e;
  ushort local_c;
  
  FUN_020554a8(&local_10);
  *(uint *)(DAT_0216e828 + 0x58) = (uint)local_c + (uint)local_e + (uint)local_10 + _DAT_027ffc3c;
  *(int *)(DAT_0216e828 + 0x58) = *(int *)(DAT_0216e828 + 0x58) * 0x10dcd + 0x3039;
  *(undefined2 *)(DAT_0216e828 + 0x5c) = 0;
  *(undefined2 *)(DAT_0216e828 + 0x5e) = 0x65;
  FUN_02164cb8(3);
  iVar1 = FUN_021645b0(1);
  if (iVar1 == 0x18) {
    FUN_02164ca4(0x18);
    FUN_02164cb8(9);
    return 0;
  }
  if (iVar1 == 2) {
    return 1;
  }
  FUN_02164ca4();
  FUN_02164cb8(9);
  return 0;
}

