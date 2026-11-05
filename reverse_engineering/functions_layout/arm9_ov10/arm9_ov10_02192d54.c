
undefined4 FUN_02192d54(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
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
  if (((*(ushort *)(param_1 + 0x70) & 4) == 0) || ((*(ushort *)(param_1 + 0x70) & 8) != 0)) {
    return 0xffffffc8;
  }
  *(ushort *)(param_1 + 0x70) = *(ushort *)(param_1 + 0x70) | 8;
  iVar2 = *(int *)(param_1 + 0x68);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x10c) == 0)) {
    return 0;
  }
  iVar3 = FUN_02191978(0x2192d2d,*(int *)(iVar2 + 0x10c),(int)*(char *)(param_1 + 0x72));
  if (iVar3 == 0) {
    return 0xffffffdf;
  }
  uVar4 = FUN_02191894(*(undefined4 *)(iVar2 + 0x10c));
  return uVar4;
}

