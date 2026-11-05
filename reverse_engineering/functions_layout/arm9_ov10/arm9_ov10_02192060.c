
undefined4 FUN_02192060(int param_1,undefined2 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_0219346c();
  if ((iVar2 != 0) || ((*(ushort *)(param_1 + 0x70) & 8) != 0)) {
    return 0xffffffe4;
  }
  bVar1 = false;
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x70) & 1) != 0)) {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0xffffffd9;
  }
  bVar1 = true;
  if ((*(char *)(param_1 + 0x73) != '\0') && (*(char *)(param_1 + 0x73) != '\x04')) {
    bVar1 = false;
  }
  if (bVar1) {
    if ((*(ushort *)(param_1 + 0x70) & 4) != 0) {
      if (*(char *)(param_1 + 0x72) == '\x01') {
        return 0xffffffe2;
      }
      return 0;
    }
    if ((*(ushort *)(param_1 + 0x70) & 2) != 0) {
      if ((*(ushort *)(param_1 + 0x70) & 0x40) == 0) {
        return DAT_021a6ebc;
      }
      return *(undefined4 *)(param_1 + 0x6c);
    }
    *(undefined2 *)(param_1 + 0x76) = param_2;
    *(undefined4 *)(param_1 + 0x78) = param_3;
    uVar3 = FUN_0219200c(param_1);
    if (*(char *)(param_1 + 0x72) != '\x01') {
      return 0xffffffe6;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x76) = param_2;
    *(undefined4 *)(param_1 + 0x78) = param_3;
    uVar3 = 0;
  }
  return uVar3;
}

