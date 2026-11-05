
undefined4 FUN_02192fec(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 < 1) {
    return 0xffffffe4;
  }
  iVar2 = FUN_02193448();
  if (iVar2 != 0) {
    return 0xffffffe6;
  }
  iVar2 = FUN_0219346c(param_1);
  if (iVar2 != 0) {
    return 0;
  }
  bVar1 = false;
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x70) & 1) != 0)) {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0xffffffd9;
  }
  if ((*(ushort *)(param_1 + 0x70) & 0x10) != 0) {
    return 0xffffffe6;
  }
  *(ushort *)(param_1 + 0x70) = *(ushort *)(param_1 + 0x70) | 0x18;
  bVar1 = true;
  if ((*(char *)(param_1 + 0x73) != '\0') && (*(char *)(param_1 + 0x73) != '\x04')) {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_02191908(*(undefined4 *)(param_1 + 0x68),0);
  }
  iVar2 = FUN_02191978(0x2192f69,param_1,1);
  *(undefined4 *)(iVar2 + 8) = 0;
  FUN_021918f4(param_1);
  return 0;
}

