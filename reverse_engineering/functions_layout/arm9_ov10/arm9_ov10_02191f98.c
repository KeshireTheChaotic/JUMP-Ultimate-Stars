
undefined4 FUN_02191f98(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = 0;
  iVar2 = *(int *)(iVar1 + 100);
  FUN_02053ed0(iVar2 + 0xe0);
  FUN_0218f398(*(undefined2 *)(param_1 + 0x10),*(undefined2 *)(param_1 + 0x12),
               *(undefined4 *)(param_1 + 0x14));
  *(undefined4 *)(iVar2 + 0xf8) = 0;
  if ((*(char *)(param_1 + 0xc) == '\0') || (*(char *)(param_1 + 0xc) == '\x04')) {
    iVar3 = FUN_0218f228();
  }
  FUN_02053e60(iVar2 + 0xe0);
  if (iVar3 == 0) {
    *(ushort *)(iVar1 + 0x70) = *(ushort *)(iVar1 + 0x70) | 4;
    return 0;
  }
  *(ushort *)(iVar1 + 0x70) = *(ushort *)(iVar1 + 0x70) | 0x40;
  return 0xffffffb4;
}

