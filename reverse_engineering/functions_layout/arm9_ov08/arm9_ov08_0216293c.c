
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0216293c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint unaff_r6;
  int iVar5;
  int unaff_r7;
  uint unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r11;
  int iVar6;
  bool in_ZR;
  bool bVar7;
  undefined4 in_cr2;
  uint uStack_20;
  uint uStack_1c;
  undefined1 auStack_18 [4];
  
  if ((in_ZR && (unaff_r6 & 0x3f00000) == 0) && (unaff_r6 & 0x2b00) == 0) {
    param_1 = param_1 & param_1 << 2;
  }
  iVar6 = 0x2162967;
  uStack_20 = param_1;
  FUN_02165b60(*(undefined4 *)(DAT_0216e7fc + 8),0,&uStack_1c,auStack_18);
  uVar2 = uStack_1c + 8;
  uVar1 = (uint)DAT_0216adb4;
  if ((int)uVar1 <= (int)uVar2) {
    bVar7 = (int)(uStack_1c - 0xf8) < 0;
    if ((int)uVar2 < 0x101) {
      if (bVar7) {
        coprocessor_store(6,in_cr2,iVar6 + -8);
      }
      uVar3 = uVar2;
      if (0xff < uVar2) {
        uVar3 = (unaff_r8 & 1) << 8;
      }
      if (bVar7) {
        *unaff_r9 = iVar6;
        unaff_r9[-1] = (int)unaff_r9;
        unaff_r9[-2] = unaff_r8;
        unaff_r9[-3] = unaff_r7;
        unaff_r9[-4] = unaff_r6;
        unaff_r9[-5] = uVar3;
        unaff_r9[-6] = uVar1;
        unaff_r9[-7] = 0x100;
      }
      else {
        _DAT_000000f4 = unaff_r11;
        _DAT_000000f8 = &uStack_20;
        _DAT_000000fc = iVar6;
      }
      if (uVar2 < 0x101) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar5 = 2;
  puVar4 = &DAT_0216adb4;
  iVar6 = 8;
  uStack_1c = uVar2;
  do {
    FUN_02165bc4(*(undefined4 *)(DAT_0216e7fc + iVar6),0xffffffff,uStack_1c,puVar4[1]);
    puVar4 = puVar4 + 2;
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  return;
}

