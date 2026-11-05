
void FUN_02154118(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  *(short *)(DAT_0216e688 + 0x14) = *(short *)(DAT_0216e688 + 0x14) + 1;
  if (0xf < *(ushort *)(DAT_0216e688 + 0x14)) {
    bVar1 = (&DAT_0216a420)[*(byte *)(DAT_0216e688 + 0x17)];
    iVar5 = 0;
    if (bVar1 != 0) {
      iVar4 = 0;
      do {
        uVar2 = (&DAT_0216a430)[iVar5 + (uint)*(byte *)(DAT_0216e688 + 0x17) * 2];
        uVar3 = FUN_02165d64(*(undefined4 *)(DAT_0216e688 + iVar4),0);
        FUN_02166014(0,uVar2,uVar3);
        FUN_02165b80(*(undefined4 *)(DAT_0216e688 + iVar4),0xffffffff,1);
        iVar4 = iVar4 + 4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(uint)bVar1);
    }
    FUN_021543b0(DAT_0216a41a);
    *(undefined2 *)(DAT_0216e688 + 0x14) = 0;
    *(undefined1 *)(DAT_0216e688 + 0x16) = 0xff;
    if (*(int *)(DAT_0216e688 + 0x10) != 0) {
      *(undefined4 *)(DAT_0216e688 + 0x10) = 0;
      FUN_021677a0(0,param_1);
    }
  }
  return;
}

