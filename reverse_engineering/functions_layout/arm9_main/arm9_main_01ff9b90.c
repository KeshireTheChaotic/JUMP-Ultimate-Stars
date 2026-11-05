
void switchD_01ff9550::caseD_2(int param_1)

{
  uint uVar1;
  uint unaff_r8;
  uint *puVar2;
  
  puVar2 = (uint *)(*(int *)(param_1 + -8) + unaff_r8);
  if (unaff_r8 == 0) {
    uVar1 = 0x80;
  }
  else {
    if ((unaff_r8 & 0xff) != 0) {
      FUN_01ff9b64();
    }
    if (unaff_r8 >> 8 != 0) {
      FUN_01ff9b38();
    }
    uVar1 = 0;
  }
  uVar1 = uVar1 | uVar1 << 8;
  uVar1 = uVar1 | uVar1 << 0x10;
  *puVar2 = uVar1;
  puVar2[0x40] = uVar1;
  puVar2[0x80] = uVar1;
  puVar2[0xc0] = uVar1;
  return;
}

