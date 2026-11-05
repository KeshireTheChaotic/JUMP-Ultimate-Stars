
/* WARNING: Instruction at (ram,0x021629ae) overlaps instruction at (ram,0x021629ac)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_02162950(undefined4 param_1)

{
  undefined4 *puVar1;
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
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined4 in_cr2;
  undefined4 local_20;
  uint local_1c;
  undefined1 auStack_18 [4];
  
  iVar6 = 0x2162967;
  local_20 = param_1;
  FUN_02165b60(*(undefined4 *)(DAT_0216e7fc + 8),0,&local_1c,auStack_18);
  uVar3 = local_1c + 8;
  uVar2 = (uint)DAT_0216adb4;
  if ((int)uVar2 <= (int)uVar3) {
    puVar1 = (undefined4 *)0x100;
    bVar9 = 0xff < uVar3;
    bVar7 = (int)(local_1c - 0xf8) < 0;
    bVar8 = uVar3 == 0x100;
    if ((int)uVar3 < 0x101) {
      if (bVar7) {
        coprocessor_store(6,in_cr2,iVar6 + -8);
      }
      if (bVar9) {
        uVar3 = (unaff_r8 & 1) << 8;
      }
      local_1c = uVar2;
      if (bVar7) {
        *unaff_r9 = iVar6;
        unaff_r9[-1] = (int)unaff_r9;
        unaff_r9[-2] = unaff_r8;
        unaff_r9[-3] = unaff_r7;
        unaff_r9[-4] = unaff_r6;
        unaff_r9[-5] = uVar3;
        unaff_r9[-6] = uVar2;
        unaff_r9[-7] = 0x100;
      }
      while( true ) {
        if (!bVar7) {
          puVar1[-1] = iVar6;
          puVar1[-2] = &local_20;
          puVar1[-3] = unaff_r11;
        }
        if (!bVar9 || bVar8) break;
        iVar6 = 0x21629bf;
        FUN_02165bc4();
        uVar2 = unaff_r6 + 1;
        bVar9 = 4 < uVar2;
        bVar7 = (int)(unaff_r6 - 4) < 0;
        bVar8 = uVar2 == 5;
        if (4 < (int)uVar2) {
          FUN_021677b8(local_20,uRam021629e4);
          return;
        }
        puVar1 = &DAT_0216e7fc;
        unaff_r6 = uVar2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  iVar5 = 2;
  puVar4 = &DAT_0216adb4;
  iVar6 = 8;
  local_1c = uVar3;
  do {
    FUN_02165bc4(*(undefined4 *)(DAT_0216e7fc + iVar6),0xffffffff,local_1c,puVar4[1]);
    puVar4 = puVar4 + 2;
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 5);
  return;
}

