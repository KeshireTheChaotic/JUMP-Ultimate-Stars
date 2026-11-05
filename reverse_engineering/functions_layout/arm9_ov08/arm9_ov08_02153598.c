
undefined4 FUN_02153598(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 unaff_r4;
  
  DAT_0216d1c0 = param_1;
  FUN_021536e8();
  DAT_0216d1a4 = (*DAT_0216d154)(param_1 * 400 + 0x24d0);
  if (DAT_0216d1a4 == 0) {
    return 0xffffffff;
  }
  DAT_0216d190 = DAT_0216d1a4 + 0x1fU & 0xffffffe0;
  DAT_0216d1ac = DAT_0216d190 + param_1 * 0xd0 + 0x24af & 0xffffffe0;
  iVar2 = FUN_02153790(&LAB_0215366c_1);
  if (iVar2 == 0) {
    return 0xfffffffe;
  }
  do {
    bVar1 = true;
    FUN_02052ea0(10);
    iVar2 = FUN_021536a8();
    while (iVar2 != 0) {
      if ((iVar2 != 4) && (iVar2 != 5)) {
        if (iVar2 == 6) {
          bVar1 = false;
          unaff_r4 = 1;
        }
        else {
          bVar1 = false;
          unaff_r4 = 0xfffffffe;
        }
      }
      iVar2 = FUN_021536a8();
    }
  } while (bVar1);
  return unaff_r4;
}

