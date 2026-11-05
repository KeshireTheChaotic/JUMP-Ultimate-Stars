
void FUN_021bfd64(uint param_1)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  
  FUN_02058d5c(0x21c0a4d,param_1);
  if ((param_1 != 0) && (param_1 < 0x10)) {
    iVar5 = param_1 - 1;
    *(undefined2 *)(DAT_021d525c + iVar5 * 2 + 0x148a) = 0;
    FUN_020517fc(DAT_021d525c + 0x14a8 + iVar5 * 4,0,4);
    FUN_020517fc(DAT_021d525c + 0x1340 + iVar5 * 0x16,0);
    FUN_021c15f8(param_1);
    *(undefined2 *)(DAT_021d525c + iVar5 * 2 + 0x1754) = 0;
    bVar1 = *(byte *)(DAT_021d525c + iVar5 + 0x1526);
    if (bVar1 != 0xff) {
      iVar4 = (uint)bVar1 * 0x5d4;
      puVar6 = (ushort *)(DAT_021d525c + iVar4 + 0x1d4e);
      uVar2 = (ushort)(1 << (param_1 & 0xff));
      *puVar6 = *puVar6 & ~uVar2;
      puVar6 = (ushort *)(DAT_021d525c + iVar4 + 0x1d50);
      *puVar6 = *puVar6 | uVar2;
      *(undefined1 *)(DAT_021d525c + param_1 + 0x1525) = 0xff;
      puVar6 = (ushort *)(DAT_021d525c + iVar4 + 0x1d4c);
      *puVar6 = *puVar6 & ~uVar2;
    }
    uVar3 = 1 << (param_1 & 0xff);
    if ((*(ushort *)(DAT_021d525c + 0x1536) & uVar3) != 0) {
      *(char *)(DAT_021d525c + 0x1535) = *(char *)(DAT_021d525c + 0x1535) + -1;
      *(ushort *)(DAT_021d525c + 0x1536) = *(ushort *)(DAT_021d525c + 0x1536) & ~(ushort)uVar3;
    }
    *(undefined4 *)(DAT_021d525c + iVar5 * 4 + 0x14e8) = 0;
  }
  return;
}

