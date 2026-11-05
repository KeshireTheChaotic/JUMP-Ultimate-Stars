
void FUN_0215efa0(void)

{
  int unaff_r4;
  short *unaff_r5;
  bool in_ZR;
  undefined1 uStack00000008;
  
  if (in_ZR) {
    FUN_02051890(unaff_r4 + 0x512c,&uStack00000008,6);
    if (*(code **)(unaff_r4 + 0x50f8) != (code *)0x0) {
      (**(code **)(unaff_r4 + 0x50f8))(9,unaff_r4 + 0x5120);
    }
    FUN_02051890(unaff_r4 + 0x5134,unaff_r4 + 0x5624,0x18);
    FUN_02051890(&uStack00000008,unaff_r4 + 0x512c,6);
    *(undefined4 *)(unaff_r4 + 0x50f0) = 1;
    FUN_02058e64(FUN_0215f110,unaff_r4 + 0x5120,unaff_r4 + 0x5624);
    FUN_0215fcb8();
    return;
  }
  if (*unaff_r5 == 0xc) {
    *(short *)(unaff_r4 + 0x50e4) = unaff_r5[5];
    FUN_02059864(FUN_0215ef6c,unaff_r4 + 0x1120,*(undefined2 *)(unaff_r4 + 0x50ea),unaff_r4 + 0xf00)
    ;
    FUN_0215fcb8();
    return;
  }
  if (*unaff_r5 != 0xe) {
    return;
  }
  if (unaff_r5[2] == 10) {
    FUN_0215f994();
    return;
  }
  return;
}

