
short * FUN_020064d8(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,int param_6
                    ,int param_7)

{
  uint uVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong lVar8;
  uint uStack_40;
  int iStack_3c;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  char cStack_4;
  
  lVar8 = CONCAT44(param_2,param_1);
  iStack_3c = param_7;
  uVar1 = param_4 >> 0x18;
  psVar3 = (short *)(param_3 + -2);
  uStack_40 = param_4 >> 8 & 0xff;
  bVar7 = false;
  *psVar3 = 0;
  iStack_34 = 0;
  if (((param_1 == 0 && param_2 == 0) && (param_7 == 0)) &&
     ((uVar1 == 0 || (param_5._2_2_ != 0x6f)))) {
    return psVar3;
  }
  iVar2 = iStack_34;
  if (param_5._2_2_ < 0x6a) {
    if (param_5._2_2_ < 0x69) {
      if (param_5._2_2_ < 0x59) {
        lVar8 = CONCAT44(param_2,param_1);
        if (param_5._2_2_ != 0x58) goto LAB_020065b4;
        goto LAB_020065aa;
      }
      if (param_5._2_2_ != 100) goto LAB_020065b4;
    }
    iStack_30 = 10;
    iStack_2c = 0;
    lVar8 = CONCAT44(param_2,param_1);
    if (param_2 < 0) {
      if (param_1 != 0 || param_2 != -0x80000000) {
        bVar7 = param_1 != 0;
        param_1 = -param_1;
        param_2 = -(uint)bVar7 - param_2;
      }
      bVar7 = true;
      lVar8 = CONCAT44(param_2,param_1);
    }
  }
  else {
    if (param_5._2_2_ < 0x70) {
      lVar8 = CONCAT44(param_2,param_1);
      if (param_5._2_2_ == 0x6f) {
        iStack_30 = 8;
        iStack_2c = 0;
        uStack_40 = 0;
        lVar8 = CONCAT44(param_2,param_1);
      }
      goto LAB_020065b4;
    }
    lVar8 = CONCAT44(param_2,param_1);
    if ((0x78 < param_5._2_2_) || (lVar8 = CONCAT44(param_2,param_1), param_5._2_2_ < 0x75))
    goto LAB_020065b4;
    if (param_5._2_2_ == 0x75) {
      iStack_30 = 10;
      iStack_2c = 0;
      uStack_40 = 0;
      lVar8 = CONCAT44(param_2,param_1);
      goto LAB_020065b4;
    }
    lVar8 = CONCAT44(param_2,param_1);
    if (param_5._2_2_ != 0x78) goto LAB_020065b4;
LAB_020065aa:
    iStack_30 = 0x10;
    iStack_2c = 0;
    uStack_40 = 0;
    lVar8 = CONCAT44(param_2,param_1);
  }
LAB_020065b4:
  do {
    iStack_34 = iVar2;
    psVar4 = psVar3;
    uVar6 = (undefined4)((ulonglong)lVar8 >> 0x20);
    iVar2 = FUN_0200d0d0((int)lVar8,uVar6,iStack_30,iStack_2c);
    lVar8 = FUN_0200d0c4((int)lVar8,uVar6,iStack_30,iStack_2c);
    sVar5 = (short)iVar2;
    if (iVar2 < 10) {
      sVar5 = sVar5 + 0x30;
    }
    else if (param_5._2_2_ == 0x78) {
      sVar5 = sVar5 + 0x57;
    }
    else {
      sVar5 = sVar5 + 0x37;
    }
    iVar2 = iStack_34 + 1;
    psVar3 = psVar4 + -1;
    *psVar3 = sVar5;
  } while (lVar8 != 0);
  if (((iStack_30 == 8 && iStack_2c == 0) && (uVar1 != 0)) && (*psVar3 != 0x30)) {
    psVar3 = psVar4 + -2;
    *psVar3 = 0x30;
    iVar2 = iStack_34 + 2;
  }
  iStack_34 = iVar2;
  cStack_4 = (char)param_4;
  if (cStack_4 == '\x02') {
    iStack_3c = param_6;
    if ((bVar7) || (uStack_40 != 0)) {
      iStack_3c = param_6 + -1;
    }
    if ((iStack_30 == 0x10 && iStack_2c == 0) && (uVar1 != 0)) {
      iStack_3c = iStack_3c + -2;
    }
  }
  if ((int)0x1fd < iStack_3c + (param_3 - (int)psVar3) / 2) {
    return (short *)0x0;
  }
  for (; iStack_34 < iStack_3c; iStack_34 = iStack_34 + 1) {
    psVar3 = psVar3 + -1;
    *psVar3 = 0x30;
  }
  if ((iStack_30 == 0x10 && iStack_2c == 0) && (uVar1 != 0)) {
    psVar3[-1] = param_5._2_2_;
    psVar3 = psVar3 + -2;
    *psVar3 = 0x30;
  }
  if (bVar7) {
    psVar3 = psVar3 + -1;
    *psVar3 = 0x2d;
  }
  else if (uStack_40 == 1) {
    psVar3 = psVar3 + -1;
    *psVar3 = 0x2b;
  }
  else if (uStack_40 == 2) {
    psVar3 = psVar3 + -1;
    *psVar3 = 0x20;
  }
  return psVar3;
}

