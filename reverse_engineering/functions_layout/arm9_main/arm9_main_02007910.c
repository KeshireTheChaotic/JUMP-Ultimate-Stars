
longlong FUN_02007910(int param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 local_d4;
  int local_c4;
  undefined4 local_c0;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar8 = param_4 & 0x7fffffff;
  uVar9 = param_2 & 0x7fffffff;
  if (uVar8 == 0 && param_3 == 0) {
    return 0x3ff0000000000000;
  }
  if (((0x7ff00000 < uVar9) || (((uVar9 == 0x7ff00000 && (param_1 != 0)) || (0x7ff00000 < uVar8))))
     || ((uVar8 == 0x7ff00000 && (param_3 != 0)))) {
    lVar14 = FUN_0200b3a0(param_1,param_2,param_3,param_4);
    return lVar14;
  }
  local_c4 = 0;
  if ((int)param_2 < 0) {
    if (uVar8 < 0x43400000) {
      if (0x3fefffff < uVar8) {
        iVar10 = ((int)uVar8 >> 0x14) + -0x3ff;
        if (iVar10 < 0x15) {
          if ((param_3 == 0) &&
             (uVar7 = (int)uVar8 >> (0x14U - iVar10 & 0xff),
             uVar8 == uVar7 << (0x14U - iVar10 & 0xff))) {
            local_c4 = 2 - (uVar7 & 1);
          }
        }
        else {
          uVar7 = param_3 >> (0x34U - iVar10 & 0xff);
          if (param_3 == uVar7 << (0x34U - iVar10 & 0xff)) {
            local_c4 = 2 - (uVar7 & 1);
          }
        }
      }
    }
    else {
      local_c4 = 2;
    }
  }
  if (param_3 == 0) {
    if (uVar8 == 0x7ff00000) {
      if (param_1 == 0 && uVar9 == 0x3ff00000) {
        lVar14 = FUN_0200bc6c(0,param_4,0,param_4);
        return lVar14;
      }
      if (uVar9 < 0x3ff00000) {
        if ((int)param_4 < 0) {
          lVar14 = FUN_0200bc6c(0,0,0,param_4);
          return lVar14;
        }
        return 0;
      }
      if ((int)param_4 < 0) {
        return 0;
      }
      return (ulonglong)param_4 << 0x20;
    }
    if (uVar8 == 0x3ff00000) {
      if ((int)param_4 < 0) {
        lVar14 = FUN_0200d534(0,0x3ff00000,param_1,param_2);
        return lVar14;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_4 == 0x40000000) {
      lVar14 = FUN_0200b8cc(param_1,param_2,param_1,param_2);
      return lVar14;
    }
    if ((param_4 == 0x3fe00000) && (-1 < (int)param_2)) {
      lVar14 = FUN_0200bb00(param_1,param_2);
      return lVar14;
    }
  }
  lVar14 = FUN_02009910(param_1,param_2);
  uVar17 = CONCAT44(param_2,(int)lVar14) & 0x7fffffffffffffff;
  if ((param_1 == 0) && (((uVar9 == 0x7ff00000 || (uVar9 == 0)) || (uVar9 == 0x3ff00000)))) {
    if ((int)param_4 < 0) {
      lVar14 = FUN_0200d534(0,0x3ff00000);
    }
    local_2c = (undefined4)((ulonglong)lVar14 >> 0x20);
    local_30 = (undefined4)lVar14;
    if ((int)param_2 < 0) {
      if (local_c4 == 0 && uVar9 == 0x3ff00000) {
        uVar15 = FUN_0200bc6c(local_30,local_2c,local_30,local_2c);
        uVar16 = FUN_0200bc6c(local_30,local_2c,local_30,local_2c);
        lVar14 = FUN_0200d534((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                              (int)((ulonglong)uVar16 >> 0x20));
      }
      else if (local_c4 == 1) {
        lVar14 = FUN_0200bc6c(0,0,local_30,local_2c);
      }
    }
    return lVar14;
  }
  if (local_c4 == 0 && (int)param_2 < 0) {
    DAT_020a0c10 = 0x21;
    lVar14 = FUN_0200c85c(DAT_02093138);
    return lVar14;
  }
  if (uVar8 < 0x41e00001) {
    iVar10 = 0;
    if (uVar9 < 0x100000) {
      uVar17 = FUN_0200b8cc((int)lVar14,(int)((ulonglong)lVar14 >> 0x20),0,0x43400000);
      iVar10 = -0x35;
    }
    uVar8 = (uint)(uVar17 >> 0x20);
    local_38 = (undefined4)uVar17;
    iVar10 = iVar10 + ((int)uVar8 >> 0x14) + -0x3ff;
    uVar8 = uVar8 & 0xfffff;
    uVar9 = uVar8 | 0x3ff00000;
    if (uVar8 < 0x3988f) {
      iVar11 = 0;
    }
    else if (uVar8 < 0xbb67a) {
      iVar11 = 1;
    }
    else {
      iVar11 = 0;
      iVar10 = iVar10 + 1;
      uVar9 = uVar9 - 0x100000;
    }
    uVar15 = FUN_0200bc6c(local_38,uVar9,(&DAT_0208d968)[iVar11 * 2],(&DAT_0208d96c)[iVar11 * 2]);
    uVar2 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar16 = FUN_0200b3a0(local_38,uVar9,(&DAT_0208d968)[iVar11 * 2],(&DAT_0208d96c)[iVar11 * 2]);
    uVar16 = FUN_0200d534(0,0x3ff00000,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar3 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar18 = FUN_0200b8cc((int)uVar15,uVar2,(int)uVar16,uVar3);
    uVar4 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar1 = (undefined4)uVar18;
    iVar5 = ((int)uVar9 >> 1 | 0x20000000U) + 0x80000 + iVar11 * 0x40000;
    uVar18 = FUN_0200bc6c(0,iVar5,(&DAT_0208d968)[iVar11 * 2],(&DAT_0208d96c)[iVar11 * 2]);
    uVar18 = FUN_0200bc6c(local_38,uVar9,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar19 = FUN_0200b8cc(0,uVar4,0,iVar5);
    uVar15 = FUN_0200bc6c((int)uVar15,uVar2,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
    uVar18 = FUN_0200b8cc(0,uVar4,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar15 = FUN_0200bc6c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar18,
                          (int)((ulonglong)uVar18 >> 0x20));
    uVar15 = FUN_0200b8cc((int)uVar16,uVar3,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar3 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar16 = FUN_0200b8cc(uVar1,uVar4,uVar1,uVar4);
    uVar6 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar2 = (undefined4)uVar16;
    uVar16 = FUN_0200b8cc(uVar2,uVar6,uVar2,uVar6);
    uVar18 = FUN_0200b8cc(0x4a454eef,0x3fca7e28,uVar2,uVar6);
    uVar18 = FUN_0200b3a0(0x93c9db65,0x3fcd864a,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0200b8cc(uVar2,uVar6,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0200b3a0(0xa91d4101,0x3fd17460,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0200b8cc(uVar2,uVar6,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0200b3a0(0x518f264d,0x3fd55555,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0200b8cc(uVar2,uVar6,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0200b3a0(0xdb6fabff,0x3fdb6db6,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0200b8cc(uVar2,uVar6,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0200b3a0(0x33333303,0x3fe33333,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar16 = FUN_0200b8cc((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar18,
                          (int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0200b3a0(0,uVar4,uVar1,uVar4);
    uVar18 = FUN_0200b8cc((int)uVar15,uVar3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar16 = FUN_0200b3a0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar18,
                          (int)((ulonglong)uVar18 >> 0x20));
    uVar2 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar18 = FUN_0200b8cc(0,uVar4,0,uVar4);
    uVar6 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_0200b3a0(0,0x40080000,(int)uVar18,uVar6);
    FUN_0200b3a0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar16,uVar2);
    uVar19 = FUN_0200bc6c(0,extraout_r1_00,0,0x40080000);
    uVar18 = FUN_0200bc6c((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar18,uVar6);
    uVar16 = FUN_0200bc6c((int)uVar16,uVar2,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    uVar18 = FUN_0200b8cc(0,uVar4,0,extraout_r1_00);
    uVar2 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar15 = FUN_0200b8cc((int)uVar15,uVar3,0,extraout_r1_00);
    uVar16 = FUN_0200b8cc((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar1,uVar4);
    uVar15 = FUN_0200b3a0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                          (int)((ulonglong)uVar16 >> 0x20));
    uVar1 = (undefined4)((ulonglong)uVar15 >> 0x20);
    FUN_0200b3a0((int)uVar18,uVar2,(int)uVar15,uVar1);
    uVar16 = FUN_0200bc6c(0,extraout_r1_01,(int)uVar18,uVar2);
    uVar15 = FUN_0200bc6c((int)uVar15,uVar1,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar16 = FUN_0200b8cc(0xe0000000,0x3feec709,0,extraout_r1_01);
    uVar1 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar18 = FUN_0200b8cc(0x145b01f5,0xbe3e2fe0,0,extraout_r1_01);
    uVar15 = FUN_0200b8cc(0xdc3a03fd,0x3feec709,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar15 = FUN_0200b3a0((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar15,
                          (int)((ulonglong)uVar15 >> 0x20));
    uVar15 = FUN_0200b3a0((&DAT_0208d978)[iVar11 * 2],(&DAT_0208d97c)[iVar11 * 2],(int)uVar15,
                          (int)((ulonglong)uVar15 >> 0x20));
    uVar2 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar18 = FUN_0200b850(iVar10);
    uVar3 = (undefined4)((ulonglong)uVar18 >> 0x20);
    uVar19 = FUN_0200b3a0((int)uVar16,uVar1,(int)uVar15,uVar2);
    uVar19 = FUN_0200b3a0((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(&DAT_0208d958)[iVar11 * 2],
                          (&DAT_0208d95c)[iVar11 * 2]);
    FUN_0200b3a0((int)uVar18,uVar3,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
    uVar18 = FUN_0200bc6c(0,extraout_r1_02,(int)uVar18,uVar3);
    uVar18 = FUN_0200bc6c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(&DAT_0208d958)[iVar11 * 2],
                          (&DAT_0208d95c)[iVar11 * 2]);
    uVar16 = FUN_0200bc6c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar16,uVar1);
    uVar15 = FUN_0200bc6c((int)uVar15,uVar2,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    local_4c = extraout_r1_02;
  }
  else {
    if (0x43f00000 < uVar8) {
      if (uVar9 < 0x3ff00000) {
        if ((int)param_4 < 0) {
          return 0x7ff0000000000000;
        }
        return 0;
      }
      if (0x3fefffff < uVar9) {
        if ((int)param_4 < 1) {
          return 0;
        }
        return 0x7ff0000000000000;
      }
    }
    if (uVar9 < 0x3fefffff) {
      if ((int)param_4 < 0) {
        return 0x7ff0000000000000;
      }
      return 0;
    }
    if (0x3ff00000 < uVar9) {
      if ((int)param_4 < 1) {
        return 0;
      }
      return 0x7ff0000000000000;
    }
    uVar15 = FUN_0200bc6c(param_1,param_2,0,0x3ff00000);
    uVar2 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar1 = (undefined4)uVar15;
    uVar15 = FUN_0200b8cc(uVar1,uVar2,uVar1,uVar2);
    uVar16 = FUN_0200b8cc(0,0x3fd00000,uVar1,uVar2);
    uVar16 = FUN_0200bc6c(0x55555555,0x3fd55555,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar16 = FUN_0200b8cc(uVar1,uVar2,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar16 = FUN_0200bc6c(0,0x3fe00000,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar15 = FUN_0200b8cc((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar16,
                          (int)((ulonglong)uVar16 >> 0x20));
    uVar16 = FUN_0200b8cc(0x60000000,0x3ff71547,uVar1,uVar2);
    uVar3 = (undefined4)((ulonglong)uVar16 >> 0x20);
    uVar18 = FUN_0200b8cc(0xf85ddf44,0x3e54ae0b,uVar1,uVar2);
    uVar15 = FUN_0200b8cc(0x652b82fe,0x3ff71547,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
    uVar15 = FUN_0200bc6c((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar15,
                          (int)((ulonglong)uVar15 >> 0x20));
    uVar1 = (undefined4)((ulonglong)uVar15 >> 0x20);
    FUN_0200b3a0((int)uVar16,uVar3,(int)uVar15,uVar1);
    uVar16 = FUN_0200bc6c(0,extraout_r1,(int)uVar16,uVar3);
    uVar15 = FUN_0200bc6c((int)uVar15,uVar1,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    local_4c = extraout_r1;
  }
  local_c0 = (undefined4)uVar15;
  local_d4 = 0x3ff00000;
  if ((int)param_2 < 0 && local_c4 == 1) {
    local_d4 = 0xbff00000;
  }
  uVar16 = FUN_0200bc6c();
  uVar16 = FUN_0200b8cc(0,local_4c,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar15 = FUN_0200b8cc(param_3,param_4,local_c0,(int)((ulonglong)uVar15 >> 0x20));
  uVar15 = FUN_0200b3a0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                        (int)((ulonglong)uVar15 >> 0x20));
  iVar10 = (int)((ulonglong)uVar15 >> 0x20);
  uVar1 = (undefined4)uVar15;
  uVar15 = FUN_0200b8cc(0,param_4,0,local_4c);
  uVar3 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar2 = (undefined4)uVar15;
  lVar14 = FUN_0200b3a0(uVar1,iVar10);
  uVar8 = (uint)((ulonglong)lVar14 >> 0x20);
  if (lVar14 < 0x4090000000000000) {
    if (0x4090cbff < (uVar8 & 0x7fffffff)) {
      if (lVar14 != -0x3f6f340000000000) {
        uVar15 = FUN_0200b8cc(0xc2f8f359,0x1a56e1f,0,local_d4);
        lVar14 = FUN_0200b8cc(0xc2f8f359,0x1a56e1f,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
        return lVar14;
      }
      uVar16 = FUN_0200bc6c(0,0xc090cc00,uVar2,uVar3);
      bVar13 = iVar10 == 0;
      bVar12 = false;
      FUN_0200c2cc(uVar1,iVar10,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
      if (!bVar12 || bVar13) {
        uVar15 = FUN_0200b8cc(0xc2f8f359,0x1a56e1f,0,local_d4);
        lVar14 = FUN_0200b8cc(0xc2f8f359,0x1a56e1f,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
        return lVar14;
      }
    }
  }
  else {
    if (lVar14 != 0x4090000000000000) {
      uVar15 = FUN_0200b8cc(0x8800759c,0x7e37e43c,0,local_d4);
      lVar14 = FUN_0200b8cc(0x8800759c,0x7e37e43c,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      return lVar14;
    }
    uVar16 = FUN_0200b3a0(0x652b82fe,0x3c971547,uVar1,iVar10);
    iVar11 = (int)((ulonglong)uVar16 >> 0x20);
    uVar18 = FUN_0200bc6c(0,0x40900000,uVar2,uVar3);
    bVar13 = iVar11 == 0;
    bVar12 = false;
    FUN_0200c26c((int)uVar16,iVar11,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
    if (bVar12 && !bVar13) {
      uVar15 = FUN_0200b8cc(0x8800759c,0x7e37e43c,0,local_d4);
      lVar14 = FUN_0200b8cc(0x8800759c,0x7e37e43c,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
      return lVar14;
    }
  }
  iVar11 = 0;
  if (0x3fe00000 < (uVar8 & 0x7fffffff)) {
    uVar8 = uVar8 + (0x100000 >> (((int)(uVar8 & 0x7fffffff) >> 0x14) - 0x3feU & 0xff));
    uVar9 = ((int)(uVar8 & 0x7fffffff) >> 0x14) - 0x3ff;
    iVar11 = (int)(uVar8 & 0xfffff | 0x100000) >> (0x14 - uVar9 & 0xff);
    if (lVar14 < 0) {
      iVar11 = -iVar11;
    }
    uVar15 = FUN_0200bc6c(uVar2,uVar3,0,~(0xfffff >> (uVar9 & 0xff)) & uVar8);
  }
  local_3c = (undefined4)((ulonglong)uVar15 >> 0x20);
  local_40 = (undefined4)uVar15;
  FUN_0200b3a0(uVar1,iVar10,local_40,local_3c);
  uVar15 = FUN_0200b8cc(0,0x3fe62e43,0);
  uVar2 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar16 = FUN_0200bc6c(0,extraout_r1_03,local_40,local_3c);
  uVar16 = FUN_0200bc6c(uVar1,iVar10,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0200b8cc(0xfefa39ef,0x3fe62e42,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar18 = FUN_0200b8cc(0xca86c39,0xbe205c61,0,extraout_r1_03);
  uVar16 = FUN_0200b3a0((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar18,
                        (int)((ulonglong)uVar18 >> 0x20));
  uVar3 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar18 = FUN_0200b3a0((int)uVar15,uVar2,(int)uVar16,uVar3);
  uVar4 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uVar1 = (undefined4)uVar18;
  uVar15 = FUN_0200bc6c(uVar1,uVar4,(int)uVar15,uVar2);
  uVar15 = FUN_0200bc6c((int)uVar16,uVar3,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  uVar3 = (undefined4)((ulonglong)uVar15 >> 0x20);
  uVar16 = FUN_0200b8cc(uVar1,uVar4,uVar1,uVar4);
  uVar6 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uVar2 = (undefined4)uVar16;
  uVar16 = FUN_0200b8cc(0x72bea4d0,0x3e663769);
  uVar16 = FUN_0200b3a0(0xc5d26bf1,0xbebbbd41,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0200b8cc(uVar2,uVar6,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0200b3a0(0xaf25de2c,0x3f11566a,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0200b8cc(uVar2,uVar6,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0200b3a0(0x16bebd93,0xbf66c16c,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0200b8cc(uVar2,uVar6,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0200b3a0(0x5555553e,0x3fc55555,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0200b8cc(uVar2,uVar6,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar16 = FUN_0200bc6c(uVar1,uVar4,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
  uVar18 = FUN_0200b8cc(uVar1,uVar4);
  uVar16 = FUN_0200bc6c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),0,0x40000000);
  uVar16 = FUN_0200d534((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),(int)uVar16,
                        (int)((ulonglong)uVar16 >> 0x20));
  uVar18 = FUN_0200b8cc(uVar1,uVar4,(int)uVar15,uVar3);
  uVar15 = FUN_0200b3a0((int)uVar15,uVar3,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
  uVar15 = FUN_0200bc6c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar15,
                        (int)((ulonglong)uVar15 >> 0x20));
  uVar15 = FUN_0200bc6c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar1,uVar4);
  uVar15 = FUN_0200bc6c(0,0x3ff00000,(int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  iVar10 = (int)((ulonglong)uVar15 >> 0x20);
  if (iVar10 + iVar11 * 0x100000 >> 0x14 < 1) {
    uVar15 = FUN_0200aabc((int)uVar15,iVar10,iVar11);
  }
  else {
    uVar15 = CONCAT44(iVar10 + iVar11 * 0x100000,(int)uVar15);
  }
  local_2c = (undefined4)((ulonglong)uVar15 >> 0x20);
  local_30 = (undefined4)uVar15;
  lVar14 = FUN_0200b8cc(0,local_d4,local_30,local_2c);
  return lVar14;
}

