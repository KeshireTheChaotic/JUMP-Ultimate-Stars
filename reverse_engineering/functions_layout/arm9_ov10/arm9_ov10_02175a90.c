
void FUN_02175a90(void)

{
  int iVar1;
  code *pcStack_10;
  code *pcStack_c;
  undefined1 uStack_8;
  undefined1 uStack_7;
  
  if (DAT_021a73f4 == 0) {
    FUN_02175744(9,0xfffffffc);
  }
  else if (*(short *)(DAT_021a73f4 + 4) == 1) {
    FUN_020517fc(&pcStack_10,0,0xc);
    uStack_8 = (undefined1)*(undefined2 *)(DAT_021a73f4 + 8);
    uStack_7 = (undefined1)*(undefined2 *)(DAT_021a73f4 + 10);
    pcStack_10 = FUN_021758cc + 1;
    pcStack_c = FUN_021758a4 + 1;
    *(undefined2 *)(DAT_021a73f4 + 4) = 2;
    iVar1 = FUN_020676b8(&pcStack_10);
    if (iVar1 == 0) {
      FUN_02175744(9,0xfffffffa);
      return;
    }
  }
  return;
}

