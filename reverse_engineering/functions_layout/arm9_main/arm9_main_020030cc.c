
byte * FUN_020030cc(undefined4 param_1,undefined4 param_2,int param_3,uint param_4,
                   undefined4 param_5,undefined4 param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  char extraout_r1;
  ushort uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  uint local_64;
  byte local_58;
  undefined1 local_54 [2];
  undefined2 local_52;
  char acStack_50 [2];
  short local_4e;
  byte local_4c;
  byte local_4b [35];
  uint uStack_28;
  
                    /* JUS-TAG strings=["-INF","-NAN","-inf","-nan"] */
  local_64 = param_7;
  uVar8 = (uint)param_5._1_1_;
  uVar1 = param_4 >> 0x18;
  uVar2 = param_4 >> 8 & 0xff;
  if (0x1fd < (int)param_7) {
    return (byte *)0x0;
  }
  local_54[0] = 0;
  local_52 = 0x20;
  uStack_28 = param_4;
  FUN_0200a5a4(local_54,param_1,param_2,acStack_50);
  pbVar3 = local_4b + local_4c;
  while ((1 < local_4c && (pbVar3 = pbVar3 + -1, *pbVar3 == 0x30))) {
    local_4c = local_4c - 1;
    local_4e = local_4e + 1;
  }
  if (local_4b[0] == 0x30) {
    local_4e = 0;
  }
  else {
    if (local_4b[0] == 0x49) {
      cVar10 = '\0';
      FUN_0200c330(param_1,param_2,0,0);
      if (cVar10 != '\0') {
        pbVar3 = (byte *)(param_3 + -4);
        if (uVar8 < 0x80) {
          uVar5 = *(ushort *)(&DAT_0208d520 + uVar8 * 2) & 0x200;
        }
        else {
          uVar5 = 0;
        }
        if (uVar5 == 0) {
          *pbVar3 = DAT_0209337c;
          *(undefined1 *)(param_3 + -3) = DAT_0209337d;
          *(undefined1 *)(param_3 + -2) = DAT_0209337e;
          *(undefined1 *)(param_3 + -1) = DAT_0209337f;
          return pbVar3;
        }
        *pbVar3 = DAT_02093378;
        *(undefined1 *)(param_3 + -3) = DAT_02093379;
        *(undefined1 *)(param_3 + -2) = DAT_0209337a;
        *(undefined1 *)(param_3 + -1) = DAT_0209337b;
        return pbVar3;
      }
      pbVar3 = (byte *)(param_3 + -5);
      if (uVar8 < 0x80) {
        uVar5 = *(ushort *)(&DAT_0208d520 + uVar8 * 2) & 0x200;
      }
      else {
        uVar5 = 0;
      }
      if (uVar5 == 0) {
        *pbVar3 = DAT_02093370;
        *(undefined1 *)(param_3 + -4) = DAT_02093371;
        *(undefined1 *)(param_3 + -3) = DAT_02093372;
        *(undefined1 *)(param_3 + -2) = DAT_02093373;
        *(undefined1 *)(param_3 + -1) = DAT_02093374;
        return pbVar3;
      }
      *pbVar3 = DAT_02093368;
      *(undefined1 *)(param_3 + -4) = DAT_02093369;
      *(undefined1 *)(param_3 + -3) = DAT_0209336a;
      *(undefined1 *)(param_3 + -2) = DAT_0209336b;
      *(undefined1 *)(param_3 + -1) = DAT_0209336c;
      return pbVar3;
    }
    if (local_4b[0] == 0x4e) {
      if (acStack_50[0] != '\0') {
        pbVar3 = (byte *)(param_3 + -5);
        if (uVar8 < 0x80) {
          uVar5 = *(ushort *)(&DAT_0208d520 + uVar8 * 2) & 0x200;
        }
        else {
          uVar5 = 0;
        }
        if (uVar5 == 0) {
          *pbVar3 = DAT_02093388;
          *(undefined1 *)(param_3 + -4) = DAT_02093389;
          *(undefined1 *)(param_3 + -3) = DAT_0209338a;
          *(undefined1 *)(param_3 + -2) = DAT_0209338b;
          *(undefined1 *)(param_3 + -1) = DAT_0209338c;
          return pbVar3;
        }
        *pbVar3 = DAT_02093380;
        *(undefined1 *)(param_3 + -4) = DAT_02093381;
        *(undefined1 *)(param_3 + -3) = DAT_02093382;
        *(undefined1 *)(param_3 + -2) = DAT_02093383;
        *(undefined1 *)(param_3 + -1) = DAT_02093384;
        return pbVar3;
      }
      pbVar3 = (byte *)(param_3 + -4);
      if (uVar8 < 0x80) {
        uVar5 = *(ushort *)(&DAT_0208d520 + uVar8 * 2) & 0x200;
      }
      else {
        uVar5 = 0;
      }
      if (uVar5 == 0) {
        *pbVar3 = DAT_02093394;
        *(undefined1 *)(param_3 + -3) = DAT_02093395;
        *(undefined1 *)(param_3 + -2) = DAT_02093396;
        *(undefined1 *)(param_3 + -1) = DAT_02093397;
        return pbVar3;
      }
      *pbVar3 = DAT_02093390;
      *(undefined1 *)(param_3 + -3) = DAT_02093391;
      *(undefined1 *)(param_3 + -2) = DAT_02093392;
      *(undefined1 *)(param_3 + -1) = DAT_02093393;
      return pbVar3;
    }
  }
  local_4e = local_4e + (local_4c - 1);
  pbVar3 = (byte *)(param_3 + -1);
  *pbVar3 = 0;
  if (uVar8 < 0x66) {
    if (uVar8 < 0x65) {
      if (0x47 < uVar8) {
        return pbVar3;
      }
      if (uVar8 < 0x45) {
        return pbVar3;
      }
      if (uVar8 != 0x45) {
        if (uVar8 != 0x46) {
          if (uVar8 != 0x47) {
            return pbVar3;
          }
          goto LAB_02003314;
        }
        goto LAB_0200349a;
      }
    }
LAB_0200337c:
    if ((int)(local_64 + 1) < (int)(uint)local_4c) {
      FUN_02003014(acStack_50);
    }
    iVar4 = (int)local_4e;
    local_58 = 0x2b;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
      local_58 = 0x2d;
    }
    for (iVar9 = 0; (iVar4 != 0 || (iVar9 < 2)); iVar9 = iVar9 + 1) {
      pbVar3 = pbVar3 + -1;
      FUN_0200d12c(iVar4,10);
      *pbVar3 = extraout_r1 + 0x30;
      iVar4 = FUN_0200d12c(iVar4,10);
    }
    pbVar3[-1] = local_58;
    pbVar7 = pbVar3 + -2;
    *pbVar7 = param_5._1_1_;
    if (0x1fd < (int)(local_64 + (param_3 - (int)pbVar7))) {
      return (byte *)0x0;
    }
    if ((int)(uint)local_4c < (int)(local_64 + 1)) {
      for (iVar4 = (local_64 - local_4c) + 1; iVar4 != 0; iVar4 = iVar4 + -1) {
        pbVar7 = pbVar7 + -1;
        *pbVar7 = 0x30;
      }
    }
    uVar8 = (uint)local_4c;
    pbVar3 = local_4b + uVar8;
    while (uVar8 = uVar8 - 1, uVar8 != 0) {
      pbVar3 = pbVar3 + -1;
      pbVar7 = pbVar7 + -1;
      *pbVar7 = *pbVar3;
    }
    if ((local_64 != 0) || (uVar1 != 0)) {
      pbVar7 = pbVar7 + -1;
      *pbVar7 = 0x2e;
    }
    pbVar3 = pbVar7 + -1;
    *pbVar3 = local_4b[0];
    if (acStack_50[0] == '\0') {
      if (uVar2 == 1) {
        pbVar3 = pbVar7 + -2;
        *pbVar3 = 0x2b;
      }
      else if (uVar2 == 2) {
        pbVar3 = pbVar7 + -2;
        *pbVar3 = 0x20;
      }
    }
    else {
      pbVar3 = pbVar7 + -2;
      *pbVar3 = 0x2d;
    }
  }
  else {
    if (uVar8 < 0x67) {
      if (uVar8 != 0x66) {
        return pbVar3;
      }
    }
    else {
      if (uVar8 != 0x67) {
        return pbVar3;
      }
LAB_02003314:
      if ((int)param_7 < (int)(uint)local_4c) {
        FUN_02003014(acStack_50,param_7);
      }
      iVar4 = (int)local_4e;
      if ((iVar4 < -4) || ((int)param_7 <= iVar4)) {
        if (uVar1 == 0) {
          param_7 = (uint)local_4c;
        }
        local_64 = param_7 - 1;
        if (uVar8 == 0x67) {
          param_5._1_1_ = 0x65;
        }
        else {
          param_5._1_1_ = 0x45;
        }
        goto LAB_0200337c;
      }
      if (uVar1 == 0) {
        local_64 = (uint)local_4c - (iVar4 + 1);
        if ((int)local_64 < 0) {
          local_64 = 0;
        }
      }
      else {
        local_64 = param_7 - (iVar4 + 1);
      }
    }
LAB_0200349a:
    iVar4 = (int)local_4e;
    uVar8 = (uint)local_4c;
    iVar9 = (uVar8 - iVar4) + -1;
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    if ((int)local_64 < iVar9) {
      FUN_02003014(acStack_50,uVar8 - (iVar9 - local_64));
      iVar4 = (int)local_4e;
      uVar8 = (uint)local_4c;
      iVar9 = (uVar8 - iVar4) + -1;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
    }
    iVar4 = iVar4 + 1;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    if (0x1fd < iVar4 + iVar9) {
      return (byte *)0x0;
    }
    pbVar7 = local_4b + uVar8;
    iVar6 = 0;
    if (0 < (int)(local_64 - iVar9)) {
      do {
        pbVar3 = pbVar3 + -1;
        iVar6 = iVar6 + 1;
        *pbVar3 = 0x30;
      } while (iVar6 < (int)(local_64 - iVar9));
    }
    for (iVar6 = 0; (iVar6 < iVar9 && (iVar6 < (int)(uint)local_4c)); iVar6 = iVar6 + 1) {
      pbVar7 = pbVar7 + -1;
      pbVar3 = pbVar3 + -1;
      *pbVar3 = *pbVar7;
    }
    for (; iVar6 < iVar9; iVar6 = iVar6 + 1) {
      pbVar3 = pbVar3 + -1;
      *pbVar3 = 0x30;
    }
    if ((local_64 != 0) || (uVar1 != 0)) {
      pbVar3 = pbVar3 + -1;
      *pbVar3 = 0x2e;
    }
    if (iVar4 == 0) {
      pbVar3 = pbVar3 + -1;
      *pbVar3 = 0x30;
    }
    else {
      iVar9 = 0;
      if (0 < (int)(iVar4 - (uint)local_4c)) {
        do {
          pbVar3 = pbVar3 + -1;
          *pbVar3 = 0x30;
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(iVar4 - (uint)local_4c));
      }
      for (; iVar9 < iVar4; iVar9 = iVar9 + 1) {
        pbVar7 = pbVar7 + -1;
        pbVar3 = pbVar3 + -1;
        *pbVar3 = *pbVar7;
      }
    }
    if (acStack_50[0] == '\0') {
      if (uVar2 == 1) {
        pbVar3 = pbVar3 + -1;
        *pbVar3 = 0x2b;
      }
      else if (uVar2 == 2) {
        pbVar3 = pbVar3 + -1;
        *pbVar3 = 0x20;
      }
    }
    else {
      pbVar3 = pbVar3 + -1;
      *pbVar3 = 0x2d;
    }
  }
  return pbVar3;
}

