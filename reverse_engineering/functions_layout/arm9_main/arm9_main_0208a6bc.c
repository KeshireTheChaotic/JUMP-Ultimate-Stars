
void FUN_0208a6bc(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(DAT_0214ccec + 0x1c);
  uStack_10 = in_r3;
  while (iVar1 = DAT_0214ccec, iVar2 = iVar2 + -1, -1 < iVar2) {
    FUN_0201b244(*(undefined4 *)(*(int *)(DAT_0214ccec + 0x18) + iVar2 * 4));
  }
  iVar2 = *(int *)(DAT_0214ccec + 0x1c);
  FUN_0200f69c(&uStack_10,1);
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) - iVar2;
  return;
}

