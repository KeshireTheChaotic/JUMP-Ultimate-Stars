
void FUN_02161bac(void)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r5;
  
  FUN_021539e8();
  FUN_0214fa38(*(undefined4 *)(unaff_r4 + 0x18));
  *(undefined4 *)(unaff_r4 + 0x18) = 0;
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  uVar1 = FUN_02070690();
  uVar1 = KomaEdit::KomaEdit_Create
                    (*(undefined4 *)(unaff_r4 + 0x10),uVar1,*(undefined1 *)(unaff_r4 + 0x4c),
                     *(undefined1 *)(unaff_r4 + 0x4d));
  *(undefined4 *)(unaff_r4 + 0x1c) = uVar1;
  FUN_02159088(uVar1,FUN_021618b4);
  FUN_0215a6a8(*(undefined4 *)(unaff_r4 + 0x1c),*(undefined4 *)(unaff_r4 + 0x14),0xfffffff0,0);
  *(undefined4 *)(unaff_r4 + 0x14) = 0;
  FUN_02073800();
  FUN_0207342c(0x78,6);
  FUN_02028384(*(undefined4 *)(unaff_r5 + 4),FUN_02161c48);
  return;
}

