
int FUN_02191e4c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = FUN_0219346c();
  if (iVar1 != 0) {
    return -0x1c;
  }
  bVar3 = false;
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x70) & 1) != 0)) {
    bVar3 = true;
  }
  if (!bVar3) {
    return -0x27;
  }
  if ((*(ushort *)(param_1 + 0x70) & 2) != 0) {
    return -0x1c;
  }
  bVar3 = true;
  if ((*(char *)(param_1 + 0x73) != '\0') && (*(char *)(param_1 + 0x73) != '\x04')) {
    bVar3 = false;
  }
  if (!bVar3) {
    return -0x1c;
  }
  if (*(char *)(param_1 + 0x72) != '\x01') {
    return -6;
  }
  iVar2 = FUN_02191cf0(&DAT_021a6ed8);
  iVar1 = iVar2;
  if (((-1 < iVar2) && (iVar1 = FUN_0219213c(iVar2,*(undefined2 *)(param_1 + 0x74)), -1 < iVar1)) &&
     (iVar1 = FUN_02191d80(iVar2,param_2,param_3), -1 < iVar1)) {
    iVar1 = iVar2;
  }
  return iVar1;
}

