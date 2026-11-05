
uint FUN_02199d60(void)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  
  uVar1 = 0;
  uVar2 = (uint)DAT_021aa0c4;
  if (uVar2 < 0x11) {
    if (uVar2 != 0) {
      iVar4 = 0;
      if (uVar2 != 0) {
        pbVar3 = &DAT_021aa0c8;
        do {
          uVar1 = uVar1 + *pbVar3;
          pbVar3 = pbVar3 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)uVar2);
      }
      uVar1 = FUN_0200d12c(uVar1);
    }
  }
  else {
    iVar4 = 0;
    pbVar3 = &DAT_021aa0c8;
    do {
      uVar1 = uVar1 + *pbVar3;
      pbVar3 = pbVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x10);
    uVar1 = FUN_0200d12c(uVar1,0x10);
  }
  return uVar1 & 0xff;
}

