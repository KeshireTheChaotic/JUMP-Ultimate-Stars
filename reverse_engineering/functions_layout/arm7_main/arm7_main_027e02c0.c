
void FUN_027e02c0(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    uVar1 = uVar1 + (byte)(&DAT_027f97f4)[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  FUN_027e0298(uVar1 >> 5);
  return;
}

