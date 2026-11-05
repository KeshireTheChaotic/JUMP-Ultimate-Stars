
void FUN_02163424(undefined4 param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(DAT_0216e804 + 0x1b) = 0xff;
  *(short *)(DAT_0216e804 + 0x18) = *(short *)(DAT_0216e804 + 0x18) + 1;
  if (0x77 < *(ushort *)(DAT_0216e804 + 0x18)) {
    FUN_021677a0(0,param_1);
    uVar1 = FUN_02167814(1,0x2163211,0,0x78);
    *(undefined4 *)(DAT_0216e804 + 0x14) = uVar1;
  }
  return;
}

