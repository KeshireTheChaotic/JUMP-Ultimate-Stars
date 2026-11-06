
undefined4 FUN_0214dd34(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r4;
  int unaff_r6;
  int unaff_r7;
  
  FUN_0214dc74();
  uVar3 = FUN_0214cddc();
  *(undefined4 *)(unaff_r7 + 0x14) = uVar3;
  if (*(short *)(unaff_r4 + 4) == 0) {
    return 0;
  }
  iVar4 = FUN_0214cdc4();
  iVar1 = FUN_0214cdc4(*(undefined2 *)((byte *)(unaff_r6 + iVar4) + 2));
  if (iVar1 < 1) {
    return 0xffffffff;
  }
  uVar2 = (uint)*(byte *)(unaff_r6 + iVar4);
  if (uVar2 < 7) {
    uVar3 = (*(code *)((int)&switchD_0214dcd8::switchdataD_0214dcda +
                      (int)(short)(&switchD_0214dcd8::switchdataD_0214dcda)[uVar2]))();
    return uVar3;
  }
  return 0xffffffff;
}

