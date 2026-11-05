
/* WARNING: Removing unreachable block (ram,0x0214dcac) */
/* WARNING: Removing unreachable block (ram,0x0214dc8c) */
/* WARNING: Removing unreachable block (ram,0x0214dca8) */
/* WARNING: Removing unreachable block (ram,0x0214dcbc) */
/* WARNING: Removing unreachable block (ram,0x0214dcc0) */
/* WARNING: Removing unreachable block (ram,0x0214dcb4) */
/* WARNING: Removing unreachable block (ram,0x0214dc94) */
/* WARNING: Removing unreachable block (ram,0x0214dca4) */
/* WARNING: Removing unreachable block (ram,0x0214dcc4) */

ulonglong FUN_0214dbcc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *extraout_r1;
  int iVar3;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  undefined4 in_cr1;
  undefined4 in_cr13;
  ulonglong uVar9;
  undefined4 uStack_18;
  
  puVar2 = DAT_02172960;
  DAT_020a0f10 = DAT_020a0f10 + 1;
  iVar3 = (int)*(short *)(DAT_02172960 + 0x5a);
  cVar7 = 0;
  if (iVar3 != 0) {
    coprocessor_store(0,in_cr13,0x21727f8);
  }
  puRam0000014c = DAT_02172960;
  uRam00000148 = 0x168;
  iRam00000150 = unaff_r4;
  uRam00000154 = param_1;
  iRam00000158 = unaff_r10;
  uRam0000015c = unaff_r11;
  uRam00000160 = in_r12;
  uRam00000164 = in_lr;
  uStack_18 = param_4;
  if (iVar3 != 0) {
    bVar8 = false;
    *(undefined1 *)(DAT_02172960 + 0x5b) = 0;
    uVar4 = 0x214dbfb;
    func_0x02083810(1);
    puVar2 = DAT_02172960;
    *unaff_r8 = unaff_r7;
    *unaff_r8 = 0x41;
    unaff_r8[1] = iVar3;
    unaff_r8[2] = unaff_r4;
    unaff_r8[3] = in_r12;
    unaff_r8[4] = &uStack_18;
    unaff_r8[5] = uVar4;
    unaff_r8[6] = 0x214dc0c;
    if (bVar8) {
      *puVar2 = uVar4;
      puVar2[-1] = unaff_r11;
      puVar2[-2] = param_1;
      puVar2[-3] = unaff_r5;
      puVar2[-4] = iVar3;
      puVar2[-5] = puVar2;
    }
    func_0x0216ac78(puVar2[0x44]);
    *unaff_r8 = unaff_r7;
    return *(ulonglong *)(unaff_r4 + -0x1c);
  }
  coprocessor_load(0xd,in_cr1,unaff_r10);
  iVar3 = unaff_r4 + -0x167ff33d;
  *(undefined1 *)(unaff_r4 + -0x16800000) = 0x60;
  FUN_020316e4(uRam0000016c);
  func_0x02083810(0);
  bVar8 = false;
  uVar6 = 0;
  uVar4 = 0x214dce3;
  func_0x02162d28(DAT_02172960[0x41]);
  if (bVar8) {
    param_1 = (uint)extraout_r1 & (int)extraout_r1 << 0x10;
    uVar6 = (int)param_1 < 0;
  }
  if (!(bool)uVar6) {
    *unaff_r8 = unaff_r8;
  }
  software_interrupt(0xd8f01c);
  if ((bool)cVar7) {
    *extraout_r1 = uVar4;
    extraout_r1[-1] = unaff_r11;
    extraout_r1[-2] = (int)unaff_r8 - (0x2172960 << ((unaff_r10 >> 0x68) + 0x168U & 0xff));
    extraout_r1[-3] = puVar2;
    extraout_r1[-4] = iVar3;
  }
  uVar5 = 0x214dcff;
  uVar4 = func_0x02168ce0(extraout_r1[0x85ca58]);
  unaff_r8[1] = uVar4;
  unaff_r8[2] = puVar2;
  unaff_r8[3] = &DAT_02172960;
  unaff_r8[4] = unaff_r11;
  unaff_r8[5] = &uStack_18;
  unaff_r8[6] = uVar5;
  if (cVar7 != '\0') {
    func_0x01e1e734();
  }
  puVar1 = (undefined4 *)func_0x0398b8dc();
  if ((bool)cVar7) {
    *puVar1 = &uStack_18;
    puVar1[-1] = in_r12;
    puVar1[-2] = 0x158;
    puVar1[-3] = puVar2;
  }
  FUN_0214e374(puVar1,0);
  puVar2 = (undefined4 *)func_0x0214f948(DAT_02172960);
  if ((int)puVar2 < 0) {
    return (ulonglong)*(uint *)(unaff_r10 + -0x14);
  }
  func_0x0214f938(*puVar2);
  FUN_0214e9e4(DAT_02172960[0x35]);
  FUN_02028384(*(undefined4 *)(param_1 + 4),uRam0214ddb4);
  FUN_0214deec();
  iVar3 = FUN_02087724();
  uVar9 = 0;
  if (iVar3 == 2) {
    for (iVar3 = 0; (iVar3 < (int)DAT_02172960[5] && (DAT_02172960[iVar3 + 0x13] != 0));
        iVar3 = iVar3 + 1) {
    }
    if ((iVar3 < (int)DAT_02172960[5]) && (*piRam0214ddb8 != iVar3)) {
      *piRam0214ddb8 = iVar3;
    }
    uVar9 = FUN_02152078(*piRam0214ddb8);
  }
  return uVar9;
}

