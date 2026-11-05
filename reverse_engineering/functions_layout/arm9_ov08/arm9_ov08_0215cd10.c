
void FUN_0215cd10(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte local_18 [16];
  
  pbVar5 = &DAT_0216aadc;
  pbVar4 = local_18;
  iVar3 = 0xe;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    *pbVar4 = bVar1;
    pbVar4 = pbVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar2 = (uint)local_18[DAT_0216e784];
  if (uVar2 < 3) {
    iVar3 = uVar2 * 8;
    FUN_02154878(1,*(undefined2 *)(&DAT_0216ab70 + iVar3),*(undefined2 *)(&DAT_0216ab74 + iVar3),
                 *(short *)(&DAT_0216ab72 + iVar3) + (ushort)DAT_0216e78c * 0x1d);
    return;
  }
  iVar3 = uVar2 * 8;
  FUN_02154878(3,*(undefined2 *)(&DAT_0216ab70 + iVar3),*(undefined2 *)(&DAT_0216ab74 + iVar3),
               *(undefined2 *)(&DAT_0216ab72 + iVar3));
  return;
}

