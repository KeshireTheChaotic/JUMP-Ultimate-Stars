
undefined4 FUN_0219213c(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = FUN_0219346c();
  if (iVar1 != 0) {
    return 0xffffffe4;
  }
  bVar3 = false;
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x70) & 1) != 0)) {
    bVar3 = true;
  }
  if (!bVar3) {
    return 0xffffffd9;
  }
  if ((*(ushort *)(param_1 + 0x70) & 2) != 0) {
    return 0xfffffff9;
  }
  *(undefined2 *)(param_1 + 0x74) = param_2;
  if (*(char *)(param_1 + 0x73) == '\x01') {
    uVar2 = FUN_0219200c(param_1);
    return uVar2;
  }
  return 0;
}

