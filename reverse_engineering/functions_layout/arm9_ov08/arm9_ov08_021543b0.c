
void FUN_021543b0(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = (&DAT_0216a420)[*(byte *)(DAT_0216e688 + 0x17)];
  uVar2 = (uint)DAT_0216a42a;
  uVar3 = (uint)DAT_0216a41a;
  FUN_02165bc4(*(undefined4 *)(DAT_0216e688 + 8),0xffffffff,DAT_0216a418,param_1);
  iVar5 = 0;
  if (bVar1 != 0) {
    iVar4 = 0;
    do {
      FUN_02165bc4(*(undefined4 *)(DAT_0216e688 + iVar4),0xffffffff,
                   *(undefined2 *)
                    (&DAT_0216a428 +
                    (uint)(byte)(&DAT_0216a440)[iVar5 + (uint)*(byte *)(DAT_0216e688 + 0x17) * 2] *
                    4),(param_1 + uVar2) - uVar3);
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)bVar1);
  }
  return;
}

