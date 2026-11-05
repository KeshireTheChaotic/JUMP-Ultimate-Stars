
void FUN_0208c018(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  DAT_020a0f10 = 0;
  do {
    iVar1 = (int)*(char *)(DAT_0214ccec + uVar3 + 0x30);
    if ((-1 < iVar1) && (iVar1 < 4)) {
      FUN_0208a318(iVar1,uVar3);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  uVar2 = FUN_02089f04();
  FUN_020517fc(uVar2,0,8);
  DAT_02093be4 = &LAB_0208bcd8;
  iVar1 = thunk_FUN_02057adc();
  if (iVar1 == 0) {
    FUN_0208a250(0x24,0xffff);
  }
  *(undefined1 *)(DAT_0214ccec + 0x48) = 1;
  return;
}

