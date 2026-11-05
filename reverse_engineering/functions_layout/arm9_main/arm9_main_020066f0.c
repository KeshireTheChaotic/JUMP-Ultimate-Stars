
void FUN_020066f0(uint param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  short *psVar9;
  short *psVar10;
  code *UNRECOVERED_JUMPTABLE;
  char cVar11;
  undefined8 uVar12;
  undefined1 auStack_64 [2];
  undefined2 uStack_62;
  char acStack_60 [5];
  char cStack_5b;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  undefined4 UNRECOVERED_JUMPTABLE_00;
  uint uStack_10;
  undefined4 uStack_c;
  int iStack_8;
  uint uStack_4;
  
  uVar3 = param_4 >> 8 & 0xff;
  uStack_28 = param_4;
  uStack_10 = param_1;
  uStack_c = param_2;
  iStack_8 = param_3;
  uStack_4 = param_4;
  if ((int)0x1fd < param_7) {
                    /* WARNING: Could not recover jumptable at 0x02006720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  auStack_64[0] = 0;
  uStack_62 = 0x20;
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
  FUN_0200a5a4(auStack_64,param_1,param_2,acStack_60);
  uVar12 = FUN_02009910(uStack_10,uStack_c);
  cVar11 = '\x01';
  FUN_0200c390(0,0,(int)uVar12,(int)((ulonglong)uVar12 >> 0x20));
  if (cVar11 != '\0') {
    FUN_02007634(param_3 + -0xc,u_0x0p0_020933a4);
                    /* WARNING: Could not recover jumptable at 0x0200675e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_3 + -0xc);
    return;
  }
  if (cStack_5b == 'I') {
    if (acStack_60[0] == '\0') {
      param_3 = param_3 + -8;
      if (param_5._2_2_ == 0x41) {
        FUN_02007634(param_3,&DAT_020933c8);
      }
      else {
        FUN_02007634(param_3,&DAT_020933d0);
      }
    }
    else {
      param_3 = param_3 + -10;
      if (param_5._2_2_ == 0x41) {
        FUN_02007634(param_3,u__INF_020933b0);
      }
      else {
        FUN_02007634(param_3,u__inf_020933bc);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x020067b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_3);
    return;
  }
  if (cStack_5b == 'N') {
    if (acStack_60[0] == '\0') {
      param_3 = param_3 + -8;
      if (param_5._2_2_ == 0x41) {
        FUN_02007634(param_3,&DAT_020933f0);
      }
      else {
        FUN_02007634(param_3,&DAT_020933f8);
      }
    }
    else {
      param_3 = param_3 + -10;
      if (param_5._2_2_ == 0x41) {
        FUN_02007634(param_3,u__NAN_020933d8);
      }
      else {
        FUN_02007634(param_3,u__nan_020933e4);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x020067fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_3);
    return;
  }
  iVar4 = 0;
  uStack_38 = 0x101;
  uStack_34._0_2_ = (ushort)uStack_34 & 0xff00;
  uStack_30 = 0;
  uStack_2c = 1;
  uStack_34 = CONCAT22(100,(ushort)uStack_34);
  do {
    iVar2 = -iVar4;
    uVar1 = *(undefined1 *)((int)&uStack_10 + iVar4);
    *(undefined1 *)((int)&uStack_10 + iVar4) = *(undefined1 *)((int)&uStack_c + iVar2 + 3);
    iVar4 = iVar4 + 1;
    *(undefined1 *)((int)&uStack_c + iVar2 + 3) = uVar1;
  } while (iVar4 < 4);
  iVar4 = FUN_02006328((((uStack_10 >> 8 & 0xff) << 0x11 | uStack_10 << 0x19) >> 0x15) - 0x3ff,
                       param_3,0x101,uStack_34,0,1);
  if (param_5._2_2_ == 0x61) {
    sVar5 = 0x70;
  }
  else {
    sVar5 = 0x50;
  }
  psVar9 = (short *)(iVar4 + -2);
  *psVar9 = sVar5;
  uVar8 = param_7 * 4 + 0xb;
  for (iVar4 = param_7; 0 < iVar4; iVar4 = iVar4 + -1) {
    if ((int)uVar8 < 0x40) {
      uVar6 = 7 - (uVar8 & 7);
      uVar7 = (int)(uint)*(byte *)((int)&uStack_10 + ((int)uVar8 >> 3)) >> (uVar6 & 0xff) & 0xff;
      if ((uVar8 & 0xfffffff8) != (uVar8 - 4 & 0xfffffff8)) {
        uVar7 = (int)((uint)*(byte *)((int)&UNRECOVERED_JUMPTABLE_00 + ((int)uVar8 >> 3) + 3) << 8)
                >> (uVar6 & 0xff) & 0xffU | uVar7;
      }
      sVar5 = (short)(uVar7 & 0xf);
      if ((uVar7 & 0xf) < 10) {
        sVar5 = sVar5 + 0x30;
      }
      else if (param_5._2_2_ == 0x61) {
        sVar5 = sVar5 + 0x57;
      }
      else {
        sVar5 = sVar5 + 0x37;
      }
    }
    else {
      sVar5 = 0x30;
    }
    psVar9 = psVar9 + -1;
    uVar8 = uVar8 - 4;
    *psVar9 = sVar5;
  }
  if ((param_7 != 0) || (param_4 >> 0x18 != 0)) {
    psVar9 = psVar9 + -1;
    *psVar9 = 0x2e;
  }
  psVar9[-1] = 0x31;
  if (param_5._2_2_ == 0x61) {
    sVar5 = 0x78;
  }
  else {
    sVar5 = 0x58;
  }
  psVar9[-2] = sVar5;
  psVar10 = psVar9 + -3;
  *psVar10 = 0x30;
  if (acStack_60[0] == '\0') {
    if (uVar3 == 1) {
      psVar10 = psVar9 + -4;
      *psVar10 = 0x2b;
    }
    else if (uVar3 == 2) {
      psVar10 = psVar9 + -4;
      *psVar10 = 0x20;
    }
  }
  else {
    psVar10 = psVar9 + -4;
    *psVar10 = 0x2d;
  }
                    /* WARNING: Could not recover jumptable at 0x0200695e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(psVar10);
  return;
}

