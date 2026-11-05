
undefined4 FUN_0208a4ec(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  bVar2 = 0;
  pbVar4 = (byte *)((param_1 + -1) * 6 + 0x214becc);
  iVar3 = 0;
  do {
    bVar1 = *pbVar4;
    iVar3 = iVar3 + 1;
    pbVar4 = pbVar4 + 1;
    bVar2 = bVar2 | bVar1;
  } while (iVar3 < 6);
  if (bVar2 == 0) {
    return 0;
  }
  return 1;
}

