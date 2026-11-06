
void FUN_03802758(void)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (DAT_03808aa4 != 0) {
    uVar4 = 0;
    do {
      iVar1 = SND_IsChannelActive(uVar4);
      if (iVar1 != 0) {
        uVar3 = uVar3 | 1 << (uVar4 & 0xff) & 0xffffU;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x10);
    iVar1 = SND_IsCaptureActive(0);
    uVar2 = (ushort)(iVar1 != 0);
    iVar1 = SND_IsCaptureActive(1);
    if (iVar1 != 0) {
      uVar2 = uVar2 | 2;
    }
    *(short *)(DAT_03808aa4 + 8) = (short)uVar3;
    *(ushort *)(DAT_03808aa4 + 10) = uVar2;
  }
  return;
}

