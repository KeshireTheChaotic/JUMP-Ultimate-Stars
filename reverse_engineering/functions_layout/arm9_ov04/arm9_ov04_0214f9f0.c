
void FUN_0214f9f0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_020517fc(DAT_02161de8 + 0x20,0,0x18);
  if (1 < *(byte *)(DAT_02161de8 + 0x15)) {
    iVar2 = FUN_0214f780();
    iVar2 = iVar2 * 5;
    *(int *)(DAT_02161de8 + 0x20) = iVar2;
    *(int *)(DAT_02161de8 + 0x24) = iVar2;
    *(int *)(DAT_02161de8 + 0x28) = iVar2;
    return;
  }
  iVar2 = FUN_0214f780();
  iVar2 = iVar2 * 5;
  *(int *)(DAT_02161de8 + 0x20) = iVar2;
  *(int *)(DAT_02161de8 + 0x24) = iVar2;
  *(int *)(DAT_02161de8 + 0x28) = iVar2;
  uVar3 = *(uint *)(&DAT_021603e4 + *(char *)(DAT_02161de8 + 0xc) * 4);
  uVar4 = FUN_0214f780();
  if (uVar4 != (uVar3 & 0xff)) {
    return;
  }
  cVar1 = *(char *)(DAT_02161de8 + 0xc);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *(undefined4 *)(DAT_02161de8 + 0x2c) = 0x32;
      return;
    }
    if (cVar1 == '\x02') {
      *(undefined4 *)(DAT_02161de8 + 0x34) = 0x32;
      return;
    }
  }
  *(undefined4 *)(DAT_02161de8 + 0x30) = 0x32;
  return;
}

