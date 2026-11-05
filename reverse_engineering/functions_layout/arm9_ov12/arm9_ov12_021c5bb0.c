
void FUN_021c5bb0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  int unaff_r5;
  short *psVar6;
  
  uVar4 = 0;
  do {
    iVar2 = param_1 + uVar4 * 4;
    *(ushort *)(iVar2 + 0x210) =
         (ushort)(uVar4 == *(byte *)(param_2 + 0xc95)) +
         (ushort)*(byte *)(param_2 + uVar4 + 0xc80) * 10;
    *(short *)(iVar2 + 0x212) = (short)uVar4;
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x14);
  psVar5 = (short *)(param_1 + 0x210);
  do {
    unaff_r5 = FUN_0200d12c(unaff_r5 * 10 + 3,0xd);
    if (unaff_r5 < 1) {
      unaff_r5 = 1;
    }
    if (unaff_r5 - 9U < 2) {
      unaff_r5 = 0xb;
    }
    bVar1 = false;
    psVar6 = psVar5;
    for (iVar2 = 0; iVar3 = iVar2 + unaff_r5, iVar3 < 0x14; iVar2 = iVar2 + 1) {
      if (*psVar6 < psVar5[iVar3 * 2]) {
        FUN_02051890(psVar6,&DAT_021d5298,4);
        FUN_02051890(psVar5 + iVar3 * 2,psVar6,4);
        FUN_02051890(&DAT_021d5298,psVar5 + iVar3 * 2,4);
        bVar1 = true;
      }
      psVar6 = psVar6 + 2;
    }
  } while ((1 < unaff_r5) || (bVar1));
  return;
}

