
char * FUN_02002cdc(uint param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                   undefined4 param_6,int param_7)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char cVar10;
  undefined8 uVar11;
  undefined1 local_64 [2];
  undefined2 local_62;
  char acStack_60 [5];
  char local_5b;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint uStack_28;
  byte bStack_11;
  uint local_10;
  undefined4 local_c;
  int iStack_8;
  uint uStack_4;
  
                    /* JUS-TAG strings=["-INF","-NAN","-inf","-nan","0x0p0"] */
  uVar3 = param_4 >> 8 & 0xff;
  if (0x1fd < param_7) {
    return (char *)0x0;
  }
  local_64[0] = 0;
  local_62 = 0x20;
  uStack_28 = param_4;
  local_10 = param_1;
  local_c = param_2;
  iStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0200a5a4(local_64,param_1,param_2,acStack_60);
  uVar11 = FUN_02009910(local_10,local_c);
  cVar10 = '\x01';
  FUN_0200c390(0,0,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
  if (cVar10 != '\0') {
    *(char *)(param_3 + -6) = DAT_02093360;
    *(undefined1 *)(param_3 + -5) = DAT_02093361;
    *(undefined1 *)(param_3 + -4) = DAT_02093362;
    *(undefined1 *)(param_3 + -3) = DAT_02093363;
    *(undefined1 *)(param_3 + -2) = DAT_02093364;
    *(undefined1 *)(param_3 + -1) = DAT_02093365;
    return (char *)(param_3 + -6);
  }
  if (local_5b == 'I') {
    if (acStack_60[0] == '\0') {
      pcVar4 = (char *)(param_3 + -4);
      if (param_5._1_1_ == 'A') {
        *pcVar4 = DAT_02093378;
        *(undefined1 *)(param_3 + -3) = DAT_02093379;
        *(undefined1 *)(param_3 + -2) = DAT_0209337a;
        *(undefined1 *)(param_3 + -1) = DAT_0209337b;
        return pcVar4;
      }
      *pcVar4 = DAT_0209337c;
      *(undefined1 *)(param_3 + -3) = DAT_0209337d;
      *(undefined1 *)(param_3 + -2) = DAT_0209337e;
      *(undefined1 *)(param_3 + -1) = DAT_0209337f;
      return pcVar4;
    }
    pcVar4 = (char *)(param_3 + -5);
    if (param_5._1_1_ == 'A') {
      *pcVar4 = DAT_02093368;
      *(undefined1 *)(param_3 + -4) = DAT_02093369;
      *(undefined1 *)(param_3 + -3) = DAT_0209336a;
      *(undefined1 *)(param_3 + -2) = DAT_0209336b;
      *(undefined1 *)(param_3 + -1) = DAT_0209336c;
      return pcVar4;
    }
    *pcVar4 = DAT_02093370;
    *(undefined1 *)(param_3 + -4) = DAT_02093371;
    *(undefined1 *)(param_3 + -3) = DAT_02093372;
    *(undefined1 *)(param_3 + -2) = DAT_02093373;
    *(undefined1 *)(param_3 + -1) = DAT_02093374;
    return pcVar4;
  }
  if (local_5b != 'N') {
    iVar5 = 0;
    local_38 = 0x101;
    local_2c = 1;
    local_30 = 0;
    local_34 = CONCAT22(local_34._2_2_,0x6400);
    do {
      iVar2 = -iVar5;
      uVar1 = *(undefined1 *)((int)&local_10 + iVar5);
      *(undefined1 *)((int)&local_10 + iVar5) = *(undefined1 *)((int)&local_c + iVar2 + 3);
      iVar5 = iVar5 + 1;
      *(undefined1 *)((int)&local_c + iVar2 + 3) = uVar1;
    } while (iVar5 < 4);
    iVar5 = FUN_0200291c((((local_10 >> 8 & 0xff) << 0x11 | local_10 << 0x19) >> 0x15) - 0x3ff,
                         param_3,0x101,local_34,0,1);
    if (param_5._1_1_ == 'a') {
      cVar10 = 'p';
    }
    else {
      cVar10 = 'P';
    }
    pcVar4 = (char *)(iVar5 + -1);
    *pcVar4 = cVar10;
    uVar8 = param_7 * 4 + 0xb;
    for (iVar5 = param_7; 0 < iVar5; iVar5 = iVar5 + -1) {
      if ((int)uVar8 < 0x40) {
        uVar6 = 7 - (uVar8 & 7);
        uVar7 = (int)(uint)*(byte *)((int)&local_10 + ((int)uVar8 >> 3)) >> (uVar6 & 0xff) & 0xff;
        if ((uVar8 & 0xfffffff8) != (uVar8 - 4 & 0xfffffff8)) {
          uVar7 = (int)((uint)(&bStack_11)[(int)uVar8 >> 3] << 8) >> (uVar6 & 0xff) & 0xffU | uVar7;
        }
        cVar10 = (char)(uVar7 & 0xf);
        if ((uVar7 & 0xf) < 10) {
          cVar10 = cVar10 + '0';
        }
        else if (param_5._1_1_ == 'a') {
          cVar10 = cVar10 + 'W';
        }
        else {
          cVar10 = cVar10 + '7';
        }
      }
      else {
        cVar10 = '0';
      }
      pcVar4 = pcVar4 + -1;
      uVar8 = uVar8 - 4;
      *pcVar4 = cVar10;
    }
    if ((param_7 != 0) || (param_4 >> 0x18 != 0)) {
      pcVar4 = pcVar4 + -1;
      *pcVar4 = '.';
    }
    pcVar4[-1] = '1';
    if (param_5._1_1_ == 'a') {
      cVar10 = 'x';
    }
    else {
      cVar10 = 'X';
    }
    pcVar4[-2] = cVar10;
    pcVar9 = pcVar4 + -3;
    *pcVar9 = '0';
    if (acStack_60[0] == '\0') {
      if (uVar3 == 1) {
        pcVar9 = pcVar4 + -4;
        *pcVar9 = '+';
      }
      else if (uVar3 == 2) {
        pcVar9 = pcVar4 + -4;
        *pcVar9 = ' ';
      }
    }
    else {
      pcVar9 = pcVar4 + -4;
      *pcVar9 = '-';
    }
    return pcVar9;
  }
  if (acStack_60[0] == '\0') {
    pcVar4 = (char *)(param_3 + -4);
    if (param_5._1_1_ == 'A') {
      *pcVar4 = DAT_02093390;
      *(undefined1 *)(param_3 + -3) = DAT_02093391;
      *(undefined1 *)(param_3 + -2) = DAT_02093392;
      *(undefined1 *)(param_3 + -1) = DAT_02093393;
      return pcVar4;
    }
    *pcVar4 = DAT_02093394;
    *(undefined1 *)(param_3 + -3) = DAT_02093395;
    *(undefined1 *)(param_3 + -2) = DAT_02093396;
    *(undefined1 *)(param_3 + -1) = DAT_02093397;
    return pcVar4;
  }
  pcVar4 = (char *)(param_3 + -5);
  if (param_5._1_1_ == 'A') {
    *pcVar4 = DAT_02093380;
    *(undefined1 *)(param_3 + -4) = DAT_02093381;
    *(undefined1 *)(param_3 + -3) = DAT_02093382;
    *(undefined1 *)(param_3 + -2) = DAT_02093383;
    *(undefined1 *)(param_3 + -1) = DAT_02093384;
    return pcVar4;
  }
  *pcVar4 = DAT_02093388;
  *(undefined1 *)(param_3 + -4) = DAT_02093389;
  *(undefined1 *)(param_3 + -3) = DAT_0209338a;
  *(undefined1 *)(param_3 + -2) = DAT_0209338b;
  *(undefined1 *)(param_3 + -1) = DAT_0209338c;
  return pcVar4;
}

