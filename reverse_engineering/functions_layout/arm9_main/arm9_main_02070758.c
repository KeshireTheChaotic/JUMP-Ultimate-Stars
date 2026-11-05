
void FUN_02070758(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = iRam020707d4;
  iVar4 = (int)*(char *)(iRam020707d4 + 0x83);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  *(int *)(iRam020707d4 + 0x50) = iVar4 + 1;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  FUN_020708e4(0,(int)*(char *)(iVar1 + 0x70),*(undefined1 *)(iVar1 + 0x74));
  iVar2 = iRam020707d8;
  iVar1 = iRam020707d4;
  for (uVar3 = 1; (int)uVar3 < iVar4 + 1; uVar3 = uVar3 + 1) {
    *(byte *)(iVar1 + 0x82) = *(byte *)(iVar1 + 0x82) | (byte)(1 << (uVar3 & 0xff));
    FUN_020708e4(uVar3,(int)*(char *)(iVar2 + uVar3 + 0x20),*(undefined1 *)(iVar2 + uVar3 + 0x24));
  }
  return;
}

