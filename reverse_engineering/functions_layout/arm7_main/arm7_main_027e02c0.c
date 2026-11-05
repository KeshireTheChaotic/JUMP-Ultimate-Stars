
undefined4 FUN_027e02c0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  do {
    uVar2 = uVar2 + (byte)(&DAT_027f97f4)[iVar3];
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  uVar2 = uVar2 >> 5;
  if (uVar2 < 8) {
    return 0;
  }
  if (uVar2 < 0xe) {
    return 1;
  }
  if (uVar2 < 0x14) {
    uVar1 = 2;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

