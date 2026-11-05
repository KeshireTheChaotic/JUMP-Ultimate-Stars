
void FUN_02034690(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if ((DAT_020a0ca0 & 1) == 0) {
    DAT_020a0dc0 = 0;
    DAT_020a0ca0 = DAT_020a0ca0 | 1;
  }
  DAT_02093be8 = DAT_02093be8 + 1;
  iVar4 = *(int *)(param_1 + 0x41c);
  if (iVar4 == 0) {
    DAT_020a0dc0 = DAT_020a0dc0 + 0x1000;
  }
  else {
    uVar2 = FUN_0200c99c(*(undefined4 *)(param_1 + 0x418));
    uVar3 = FUN_0200c99c(iVar4);
    uVar2 = FUN_0200c5ac(uVar2,uVar3);
    FUN_0200c9e4(0x45800000,uVar2);
    iVar4 = FUN_0200c8e0();
    DAT_020a0dc0 = DAT_020a0dc0 + iVar4;
  }
  uVar1 = DAT_020a0dc0 >> 0xc;
  for (uVar5 = 0; uVar5 < uVar1; uVar5 = uVar5 + 1) {
    FUN_02028ee0();
    FUN_02028f24();
    FUN_02020c04();
    *(bool *)(DAT_020a0f64 + 0x420) = uVar5 == 0;
    FUN_020345d4(DAT_020a0f64);
  }
  DAT_020a0dc0 = DAT_020a0dc0 + uVar1 * -0x1000;
  FUN_020315e4();
  FUN_020322bc(DAT_020a0cec);
  (**(code **)(*DAT_020a0dfc + 0x10))();
  return;
}

