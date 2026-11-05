
void FUN_02006328(int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int extraout_r1;
  short *psVar4;
  short *psVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  code *UNRECOVERED_JUMPTABLE;
  uint uStack_38;
  int iStack_34;
  int iStack_2c;
  char cStack_8;
  
  iStack_34 = param_6;
  uVar1 = param_3 >> 0x18;
  uVar2 = param_4 >> 0x10;
  psVar4 = (short *)(param_2 + -2);
  uStack_38 = param_3 >> 8 & 0xff;
  iVar7 = 0;
  bVar3 = false;
  *psVar4 = 0;
  if (((param_1 == 0) && (param_6 == 0)) && ((uVar1 == 0 || (uVar2 != 0x6f)))) {
                    /* WARNING: Could not recover jumptable at 0x02006374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(psVar4);
    return;
  }
  if (uVar2 < 0x6a) {
    if (uVar2 < 0x69) {
      if (uVar2 < 0x59) {
        if (uVar2 != 0x58) goto LAB_020063d8;
        goto LAB_020063d0;
      }
      if (uVar2 != 100) goto LAB_020063d8;
    }
    iStack_2c = 10;
    if (param_1 < 0) {
      if (param_1 != -0x80000000) {
        param_1 = -param_1;
      }
      bVar3 = true;
    }
  }
  else {
    if (uVar2 < 0x70) {
      if (uVar2 == 0x6f) {
        iStack_2c = 8;
        uStack_38 = 0;
      }
      goto LAB_020063d8;
    }
    if ((0x78 < uVar2) || (uVar2 < 0x75)) goto LAB_020063d8;
    if (uVar2 == 0x75) {
      iStack_2c = 10;
      uStack_38 = 0;
      goto LAB_020063d8;
    }
    if (uVar2 != 0x78) goto LAB_020063d8;
LAB_020063d0:
    iStack_2c = 0x10;
    uStack_38 = 0;
  }
LAB_020063d8:
  do {
    iVar8 = iVar7;
    psVar5 = psVar4;
    FUN_0200d338(param_1,iStack_2c);
    param_1 = FUN_0200d338(param_1,iStack_2c);
    sVar6 = (short)extraout_r1;
    if (extraout_r1 < 10) {
      sVar6 = sVar6 + 0x30;
    }
    else if (uVar2 == 0x78) {
      sVar6 = sVar6 + 0x57;
    }
    else {
      sVar6 = sVar6 + 0x37;
    }
    psVar4 = psVar5 + -1;
    iVar7 = iVar8 + 1;
    *psVar4 = sVar6;
  } while (param_1 != 0);
  if (((iStack_2c == 8) && (uVar1 != 0)) && (*psVar4 != 0x30)) {
    psVar4 = psVar5 + -2;
    *psVar4 = 0x30;
    iVar7 = iVar8 + 2;
  }
  cStack_8 = (char)param_3;
  if (cStack_8 == '\x02') {
    iStack_34 = param_5;
    if ((bVar3) || (uStack_38 != 0)) {
      iStack_34 = param_5 + -1;
    }
    if ((iStack_2c == 0x10) && (uVar1 != 0)) {
      iStack_34 = iStack_34 + -2;
    }
  }
  if ((int)0x1fd < iStack_34 + (param_2 - (int)psVar4) / 2) {
                    /* WARNING: Could not recover jumptable at 0x02006472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0);
    return;
  }
  for (; iVar7 < iStack_34; iVar7 = iVar7 + 1) {
    psVar4 = psVar4 + -1;
    *psVar4 = 0x30;
  }
  if ((iStack_2c == 0x10) && (uVar1 != 0)) {
    psVar4[-1] = (short)(param_4 >> 0x10);
    psVar4 = psVar4 + -2;
    *psVar4 = 0x30;
  }
  if (bVar3) {
    psVar4 = psVar4 + -1;
    *psVar4 = 0x2d;
  }
  else if (uStack_38 == 1) {
    psVar4 = psVar4 + -1;
    *psVar4 = 0x2b;
  }
  else if (uStack_38 == 2) {
    psVar4 = psVar4 + -1;
    *psVar4 = 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x020064d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(psVar4);
  return;
}

