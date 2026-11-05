
/* JUS-GAME Record::RecordSave [source-string] __FILE__="Record.cpp" __FUNCTION__="RecordSave"
   lines=[2029, 2056] passed to 2 source-location call(s) */

int Record::RecordSave(void)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int extraout_r1;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined4 local_2c;
  undefined4 local_28;
  
                    /* JUS-TAG strings=["JSSGXu","Record.cpp","RecordSave"] */
  iVar14 = 1;
  FUN_02054b44();
  bVar2 = true;
  uVar15 = 1;
  do {
    iVar5 = uVar15 * 0x14;
    uVar15 = uVar15 + 1;
    if (DAT_020b76c0 != (&DAT_020b76c0)[iVar5]) {
      bVar2 = false;
    }
  } while (uVar15 < 8);
  if (bVar2) {
    uVar15 = 0;
    do {
      uVar17 = uVar15 + 1;
      (&DAT_020b76c0)[(uVar17 & 7) * 0x14] = (short)uVar15 + -10;
      uVar15 = uVar17;
    } while (uVar17 < 8);
  }
  uVar4 = SVC_GetCRC16(0,&DAT_020b02b8,0x7548);
  iVar5 = FUN_02072a60(&DAT_020b02b8);
  *(undefined2 *)(&DAT_020b7800 + iVar5 * 2) = uVar4;
  iVar6 = jus_AllocDebug(0x7558,s_Record_cpp_0209e61c,s_RecordSave_0209e5f4,0x7ed);
  iVar7 = RecordLoad();
  uVar15 = FUN_02051fa0();
  if (uVar15 == 0xfffffffd) {
    DAT_020b02ac = 0;
    FUN_0201b268(iVar6);
    iVar14 = 0;
  }
  else {
    FUN_02061d9c(uVar15 & 0xffff);
    cVar3 = FUN_02062374();
    if (cVar3 == '\x01') {
      if ((bVar2) || (iVar7 != 0)) {
        FUN_02051890(&DAT_020b02b8,iVar6,0x7558);
        uVar12 = DAT_0209244c;
        uVar10 = DAT_02092450;
        uVar17 = 0;
        do {
          iVar5 = uVar17 * 0x8000;
          local_2c = uVar12;
          local_28 = uVar10;
          FUN_02062380(&local_2c,iVar5,8,0,0,0,8,10,2);
          for (uVar16 = 0; uVar16 < 0x20; uVar16 = uVar16 + 1) {
            FUN_02062380(iVar6 + uVar16 * 0x3aa,iVar5 + 8 + uVar16 * 0x3aa,0x3aa,0,0,0,8,10,2);
            (*DAT_020a0e18)();
          }
          FUN_02062380(iVar6 + 0x7540,iVar5 + 0x7548,0x18,0,0,0,8,10,2);
          uVar17 = uVar17 + 1;
        } while (uVar17 < 2);
      }
      else {
        iVar7 = jus_AllocDebug(0x7558,s_Record_cpp_0209e61c,s_RecordSave_0209e5f4,0x808);
        FUN_02051890(iVar6,iVar7,0x7558);
        for (uVar17 = 0;
            (uVar16 = 0, uVar17 < 0x7408 &&
            (uVar16 = uVar17, *(char *)(iVar6 + uVar17) == (&DAT_020b02b8)[uVar17]));
            uVar17 = uVar17 + 1) {
        }
        for (iVar11 = 0x7408;
            (iVar22 = 0, -1 < iVar11 &&
            (iVar22 = iVar11, *(char *)(iVar6 + iVar11) == (&DAT_020b02b8)[iVar11]));
            iVar11 = iVar11 + -1) {
        }
        uVar16 = uVar16 & 0xfffffffe;
        uVar18 = (iVar22 + 1) - uVar16;
        uVar17 = 0x3aa;
        if (uVar18 < 0x3aa) {
          uVar17 = uVar18;
        }
        FUN_0200d338(uVar18,uVar17);
        uVar18 = FUN_0200d338(uVar18,uVar17);
        FUN_02051890(&DAT_020b02b8,iVar6,0x7558);
        iVar11 = iVar5 * 0x28 + 0x7408;
        iVar5 = iVar5 * 2 + 0x7548;
        uVar19 = 0;
        do {
          iVar22 = uVar19 * 0x8000;
          iVar21 = uVar16 + iVar22 + 8;
          for (uVar20 = 0; uVar20 < uVar18; uVar20 = uVar20 + 1) {
            iVar8 = uVar16 + uVar20 * uVar17;
            iVar9 = thunk_FUN_020024cc(iVar6 + iVar8,iVar7 + iVar8,uVar17);
            if (iVar9 != 0) {
              FUN_02062380(iVar6 + iVar8,iVar21 + uVar20 * uVar17,uVar17,0,0,0,8,10,2);
              (*DAT_020a0e18)();
            }
          }
          if (extraout_r1 != 0) {
            FUN_02062380(iVar6 + uVar16 + uVar18 * uVar17,iVar21 + uVar18 * uVar17,extraout_r1,0,0,0
                         ,8,10,2);
          }
          FUN_02062380(iVar6 + iVar11,iVar11 + iVar22 + 8,0x28,0,0,0,8,10,2);
          FUN_02062380(iVar6 + iVar5,iVar5 + iVar22 + 8,2,0,0,0,8,10,2);
          uVar19 = uVar19 + 1;
        } while (uVar19 < 2);
        FUN_0201b268(iVar7);
      }
    }
    else {
      iVar14 = 0;
    }
    iVar5 = FUN_02061dd8();
    if (iVar5 != 0) {
      iVar14 = 0;
    }
    FUN_02061d90(uVar15 & 0xffff);
    FUN_02051ff8(uVar15 & 0xffff);
    if (iVar14 != 0) {
      FUN_02054b44();
    }
    FUN_02051890(iVar6,&DAT_020b02b8,0x7558);
    iVar11 = FUN_02072a60(&DAT_020b02b8);
    iVar22 = iVar11 * 0x28;
    iVar7 = (int)(short)((short)iVar11 + 1U & 7);
    iVar5 = iVar7 * 0x28;
    sVar1 = (&DAT_020b76c0)[iVar11 * 0x14];
    (&DAT_020b76c0)[iVar7 * 0x14] = (&DAT_020b76c0)[iVar11 * 0x14];
    *(undefined2 *)(&DAT_020b76c2 + iVar5) = *(undefined2 *)(&DAT_020b76c2 + iVar22);
    *(undefined2 *)(&DAT_020b76c4 + iVar5) = *(undefined2 *)(&DAT_020b76c4 + iVar22);
    *(undefined2 *)(&DAT_020b76c6 + iVar5) = *(undefined2 *)(&DAT_020b76c6 + iVar22);
    uVar10 = *(undefined4 *)(&DAT_020b76cc + iVar22);
    uVar12 = *(undefined4 *)(&DAT_020b76d0 + iVar22);
    uVar13 = *(undefined4 *)(&DAT_020b76d4 + iVar22);
    *(undefined4 *)(&DAT_020b76c8 + iVar5) = *(undefined4 *)(&DAT_020b76c8 + iVar22);
    *(undefined4 *)(&DAT_020b76cc + iVar5) = uVar10;
    *(undefined4 *)(&DAT_020b76d0 + iVar5) = uVar12;
    *(undefined4 *)(&DAT_020b76d4 + iVar5) = uVar13;
    uVar10 = *(undefined4 *)(&DAT_020b76dc + iVar22);
    *(undefined4 *)(&DAT_020b76d8 + iVar5) = *(undefined4 *)(&DAT_020b76d8 + iVar22);
    *(undefined4 *)(&DAT_020b76dc + iVar5) = uVar10;
    *(undefined4 *)(&DAT_020b76e0 + iVar5) = *(undefined4 *)(&DAT_020b76e0 + iVar22);
    *(undefined4 *)(&DAT_020b76e4 + iVar5) = *(undefined4 *)(&DAT_020b76e4 + iVar22);
    (&DAT_020b76c0)[iVar7 * 0x14] = sVar1 + 1;
    FUN_02073114(iVar5 + 0x7408,0x28);
    if (iVar14 != 0) {
      DAT_020b02ac = 0;
    }
    DAT_020b02b4 = 0xffffffff;
    DAT_020b02b0 = 0;
    FUN_0201b268(iVar6);
  }
  return iVar14;
}

