
int FUN_02006a44(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                undefined4 param_6,uint param_7)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  char extraout_r1;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char cVar11;
  int iStack_268;
  uint uStack_264;
  char cStack_258;
  undefined1 auStack_254 [2];
  undefined2 uStack_252;
  char acStack_250 [2];
  short sStack_24e;
  byte bStack_24c;
  char acStack_24b [33];
  undefined1 auStack_22a [509];
  char acStack_2d [5];
  uint uStack_28;
  
  param_5 = param_5 >> 0x10;
  uStack_264 = param_7;
  uVar1 = param_4 >> 0x18;
  uVar3 = param_4 >> 8 & 0xff;
  if ((int)0x1fd < (int)param_7) {
    return 0;
  }
  auStack_254[0] = 0;
  uStack_252 = 0x20;
  uStack_28 = param_4;
  FUN_0200a5a4(auStack_254,param_1,param_2,acStack_250);
  pcVar4 = acStack_24b + bStack_24c;
  while ((1 < bStack_24c && (pcVar4 = pcVar4 + -1, *pcVar4 == '0'))) {
    bStack_24c = bStack_24c - 1;
    sStack_24e = sStack_24e + 1;
  }
  if (acStack_24b[0] == '0') {
    sStack_24e = 0;
  }
  else {
    if (acStack_24b[0] == 'I') {
      cVar11 = '\0';
      FUN_0200c330(param_1,param_2,0,0);
      if (cVar11 == '\0') {
        iStack_268 = param_3 + -10;
        if (param_5 < 0x80) {
          uVar2 = *(ushort *)(&DAT_0208d758 + param_5 * 2) & 0x200;
        }
        else {
          uVar2 = 0;
        }
        if (uVar2 == 0) {
          FUN_02007634(iStack_268,u__inf_020933bc);
        }
        else {
          FUN_02007634(iStack_268,u__INF_020933b0);
        }
      }
      else {
        iStack_268 = param_3 + -8;
        if (param_5 < 0x80) {
          uVar2 = *(ushort *)(&DAT_0208d758 + param_5 * 2) & 0x200;
        }
        else {
          uVar2 = 0;
        }
        if (uVar2 == 0) {
          FUN_02007634(iStack_268,&DAT_020933d0);
        }
        else {
          FUN_02007634(iStack_268,&DAT_020933c8);
        }
      }
      return iStack_268;
    }
    if (acStack_24b[0] == 'N') {
      if (acStack_250[0] == '\0') {
        iStack_268 = param_3 + -8;
        if (param_5 < 0x80) {
          uVar2 = *(ushort *)(&DAT_0208d758 + param_5 * 2) & 0x200;
        }
        else {
          uVar2 = 0;
        }
        if (uVar2 == 0) {
          FUN_02007634(iStack_268,&DAT_020933f8);
        }
        else {
          FUN_02007634(iStack_268,&DAT_020933f0);
        }
      }
      else {
        iStack_268 = param_3 + -10;
        if (param_5 < 0x80) {
          uVar2 = *(ushort *)(&DAT_0208d758 + param_5 * 2) & 0x200;
        }
        else {
          uVar2 = 0;
        }
        if (uVar2 == 0) {
          FUN_02007634(iStack_268,u__nan_020933e4);
        }
        else {
          FUN_02007634(iStack_268,u__NAN_020933d8);
        }
      }
      return iStack_268;
    }
  }
  sStack_24e = sStack_24e + (bStack_24c - 1);
  pcVar4 = acStack_2d + 2;
  acStack_2d[2] = 0;
  if (param_5 < 0x66) {
    if (param_5 < 0x65) {
      if ((0x47 < param_5) || (param_5 < 0x45)) goto LAB_02006e98;
      if (param_5 != 0x45) {
        if (param_5 != 0x46) {
          if (param_5 != 0x47) goto LAB_02006e98;
          goto LAB_02006c02;
        }
        goto LAB_02006d8c;
      }
    }
LAB_02006c6a:
    if ((int)(uStack_264 + 1) < (int)(uint)bStack_24c) {
      FUN_0200698c(acStack_250);
    }
    iVar5 = (int)sStack_24e;
    cStack_258 = '+';
    if (iVar5 < 0) {
      iVar5 = -iVar5;
      cStack_258 = '-';
    }
    for (iVar10 = 0; (iVar5 != 0 || (iVar10 < 2)); iVar10 = iVar10 + 1) {
      pcVar4 = pcVar4 + -1;
      FUN_0200d12c(iVar5,10);
      *pcVar4 = extraout_r1 + '0';
      iVar5 = FUN_0200d12c(iVar5,10);
    }
    pcVar4[-1] = cStack_258;
    pcVar9 = pcVar4 + -2;
    *pcVar9 = (char)param_5;
    if ((int)0x1fd < (int)(auStack_22a + (uStack_264 - (int)pcVar9))) {
      return 0;
    }
    if ((int)(uint)bStack_24c < (int)(uStack_264 + 1)) {
      for (iVar5 = (uStack_264 - bStack_24c) + 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        pcVar9 = pcVar9 + -1;
        *pcVar9 = '0';
      }
    }
    uVar7 = (uint)bStack_24c;
    pcVar4 = acStack_24b + uVar7;
    while (uVar7 = uVar7 - 1, uVar7 != 0) {
      pcVar4 = pcVar4 + -1;
      pcVar9 = pcVar9 + -1;
      *pcVar9 = *pcVar4;
    }
    if ((uStack_264 != 0) || (uVar1 != 0)) {
      pcVar9 = pcVar9 + -1;
      *pcVar9 = '.';
    }
    pcVar4 = pcVar9 + -1;
    *pcVar4 = acStack_24b[0];
    if (acStack_250[0] == '\0') {
      if (uVar3 == 1) {
        pcVar4 = pcVar9 + -2;
        *pcVar4 = '+';
      }
      else if (uVar3 == 2) {
        pcVar4 = pcVar9 + -2;
        *pcVar4 = ' ';
      }
    }
    else {
      pcVar4 = pcVar9 + -2;
      *pcVar4 = '-';
    }
  }
  else {
    if (param_5 < 0x67) {
      if (param_5 != 0x66) goto LAB_02006e98;
    }
    else {
      if (param_5 != 0x67) goto LAB_02006e98;
LAB_02006c02:
      if ((int)param_7 < (int)(uint)bStack_24c) {
        FUN_0200698c(acStack_250,param_7);
      }
      iVar5 = (int)sStack_24e;
      if ((iVar5 < -4) || ((int)param_7 <= iVar5)) {
        if (uVar1 == 0) {
          param_7 = (uint)bStack_24c;
        }
        uStack_264 = param_7 - 1;
        if (param_5 == 0x67) {
          param_5 = 0x65;
        }
        else {
          param_5 = 0x45;
        }
        goto LAB_02006c6a;
      }
      if (uVar1 == 0) {
        uStack_264 = (uint)bStack_24c - (iVar5 + 1);
        if ((int)uStack_264 < 0) {
          uStack_264 = 0;
        }
      }
      else {
        uStack_264 = param_7 - (iVar5 + 1);
      }
    }
LAB_02006d8c:
    iVar5 = (int)sStack_24e;
    uVar7 = (uint)bStack_24c;
    iVar10 = (uVar7 - iVar5) + -1;
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if ((int)uStack_264 < iVar10) {
      FUN_0200698c(acStack_250,uVar7 - (iVar10 - uStack_264));
      iVar5 = (int)sStack_24e;
      uVar7 = (uint)bStack_24c;
      iVar10 = (uVar7 - iVar5) + -1;
      if (iVar10 < 0) {
        iVar10 = 0;
      }
    }
    iVar5 = iVar5 + 1;
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if ((int)0x1fd < iVar5 + iVar10) {
      return 0;
    }
    pcVar9 = acStack_24b + uVar7;
    iVar8 = 0;
    if (0 < (int)(uStack_264 - iVar10)) {
      do {
        pcVar4 = pcVar4 + -1;
        iVar8 = iVar8 + 1;
        *pcVar4 = '0';
      } while (iVar8 < (int)(uStack_264 - iVar10));
    }
    for (iVar8 = 0; (iVar8 < iVar10 && (iVar8 < (int)(uint)bStack_24c)); iVar8 = iVar8 + 1) {
      pcVar9 = pcVar9 + -1;
      pcVar4 = pcVar4 + -1;
      *pcVar4 = *pcVar9;
    }
    for (; iVar8 < iVar10; iVar8 = iVar8 + 1) {
      pcVar4 = pcVar4 + -1;
      *pcVar4 = '0';
    }
    if ((uStack_264 != 0) || (uVar1 != 0)) {
      pcVar4 = pcVar4 + -1;
      *pcVar4 = '.';
    }
    if (iVar5 == 0) {
      pcVar4 = pcVar4 + -1;
      *pcVar4 = '0';
    }
    else {
      iVar10 = 0;
      if (0 < (int)(iVar5 - (uint)bStack_24c)) {
        do {
          pcVar4 = pcVar4 + -1;
          *pcVar4 = '0';
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)(iVar5 - (uint)bStack_24c));
      }
      for (; iVar10 < iVar5; iVar10 = iVar10 + 1) {
        pcVar9 = pcVar9 + -1;
        pcVar4 = pcVar4 + -1;
        *pcVar4 = *pcVar9;
      }
    }
    if (acStack_250[0] == '\0') {
      if (uVar3 == 1) {
        pcVar4 = pcVar4 + -1;
        *pcVar4 = '+';
      }
      else if (uVar3 == 2) {
        pcVar4 = pcVar4 + -1;
        *pcVar4 = ' ';
      }
    }
    else {
      pcVar4 = pcVar4 + -1;
      *pcVar4 = '-';
    }
  }
LAB_02006e98:
  iVar5 = FUN_02004b04(pcVar4);
  iVar5 = param_3 + iVar5 * -2 + -2;
  uVar6 = FUN_02004b04(pcVar4);
  FUN_0200238c(iVar5,pcVar4,uVar6);
  return iVar5;
}

