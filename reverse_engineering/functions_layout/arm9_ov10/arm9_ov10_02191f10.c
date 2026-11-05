
undefined4 FUN_02191f10(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0219346c();
  if (iVar2 != 0) {
    return 0xffffffe4;
  }
  bVar1 = false;
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x70) & 1) != 0)) {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0xffffffd9;
  }
  if ((*(ushort *)(param_1 + 0x70) & 2) != 0) {
    return 0xffffffe4;
  }
  bVar1 = true;
  if ((*(char *)(param_1 + 0x73) != '\0') && (*(char *)(param_1 + 0x73) != '\x04')) {
    bVar1 = false;
  }
  if (!bVar1) {
    return 0xffffffe4;
  }
  if (*(char *)(param_1 + 0x72) == '\x01') {
    return 0;
  }
  return 0xfffffffa;
}

