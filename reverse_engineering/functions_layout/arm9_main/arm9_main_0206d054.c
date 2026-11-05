
/* JUS-GAME CommonHSV::CommonHSV_Create [source-string] __FILE__="CommonHSV.cpp"
   __FUNCTION__="CommonHSV_Create" lines=[45, 66, 67, 72, 73] passed to 5 source-location call(s) */

undefined4 * CommonHSV::CommonHSV_Create(undefined4 param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  short extraout_r1;
  uint uVar13;
  undefined4 *puVar14;
  short *psVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  byte *pbVar19;
  undefined4 *local_48;
  undefined4 *local_44;
  uint local_3c;
  ushort *local_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
                    /* JUS-TAG strings=["CommonHSV.cpp","CommonHSV_Create"] */
  puVar5 = (undefined4 *)
           thunk_FUN_0201a228(0x60,s_CommonHSV_cpp_0209e2c8,s_CommonHSV_Create_0209e2b4,0x2d);
  FUN_020517fc(puVar5,0,0x60);
  puVar5[0x13] = 100;
  puVar5[0x14] = 100;
  *(undefined1 *)(puVar5 + 0x17) = 0;
  FUN_0206d42c(auStack_28,param_1);
  iVar6 = FUN_0206d3e8(auStack_28);
  uVar9 = (uint)(*(ushort *)(*(int *)(iVar6 + 4) + 8) >> 4);
  puVar5[0x12] = uVar9;
  if (param_2 < (int)uVar9) {
    puVar5[0x12] = param_2;
  }
  else if (8 < uVar9) {
    puVar5[0x12] = 8;
  }
  puVar14 = puVar5 + 8;
  puVar17 = puVar5 + 0x10;
  iVar18 = 1;
  puVar16 = puVar5;
  for (iVar6 = puVar5[0x12]; iVar6 != 0; iVar6 = iVar6 + -1) {
    FUN_0206d42c(auStack_2c,param_1);
    iVar7 = FUN_0206d3e8(auStack_2c);
    FUN_02051890(*(int *)(*(int *)(iVar7 + 4) + 0x10) + iVar18 * 2,&DAT_020afc7c,0x1e);
    if (DAT_020afc82 == 0) {
      *(undefined1 *)puVar17 = 3;
      uVar8 = thunk_FUN_0201a228(6,s_CommonHSV_cpp_0209e2c8,s_CommonHSV_Create_0209e2b4,0x42);
      *puVar16 = uVar8;
      uVar8 = thunk_FUN_0201a228(0x18,s_CommonHSV_cpp_0209e2c8,s_CommonHSV_Create_0209e2b4,0x43);
      *puVar14 = uVar8;
      FUN_02051890(&DAT_020afc7c,*puVar16,6);
    }
    else {
      *(undefined1 *)puVar17 = 0xf;
      uVar8 = thunk_FUN_0201a228(0x1e,s_CommonHSV_cpp_0209e2c8,s_CommonHSV_Create_0209e2b4,0x48);
      *puVar16 = uVar8;
      uVar8 = thunk_FUN_0201a228(0x78,s_CommonHSV_cpp_0209e2c8,s_CommonHSV_Create_0209e2b4,0x49);
      *puVar14 = uVar8;
      FUN_02051890(&DAT_020afc7c,*puVar16,0x1e);
    }
    iVar18 = iVar18 + 0x10;
    puVar16 = puVar16 + 1;
    puVar14 = puVar14 + 1;
    puVar17 = (undefined4 *)((int)puVar17 + 1);
  }
  local_48 = puVar5 + 8;
  pbVar19 = (byte *)(puVar5 + 0x10);
  local_44 = puVar5;
  for (iVar6 = puVar5[0x12]; iVar6 != 0; iVar6 = iVar6 + -1) {
    local_30 = (ushort *)*local_44;
    psVar15 = (short *)*local_48;
    for (local_3c = (uint)*pbVar19; local_3c != 0; local_3c = local_3c - 1) {
      uVar13 = (uint)*local_30;
      uVar9 = uVar13 & 0x1f;
      uVar10 = (int)uVar13 >> 5 & 0x1f;
      uVar13 = (int)uVar13 >> 10 & 0x1f;
      if (uVar13 < uVar10) {
        uVar11 = uVar10;
      }
      else {
        uVar11 = uVar13;
      }
      if (uVar11 < uVar9) {
        uVar11 = uVar9;
      }
      else if (uVar13 < uVar10) {
        uVar11 = uVar10;
      }
      else {
        uVar11 = uVar13;
      }
      if (uVar10 < uVar13) {
        uVar12 = uVar10;
      }
      else {
        uVar12 = uVar13;
      }
      if (uVar9 < uVar12) {
        uVar12 = uVar9;
      }
      else if (uVar10 < uVar13) {
        uVar12 = uVar10;
      }
      else {
        uVar12 = uVar13;
      }
      iVar18 = uVar11 - uVar12;
      sVar1 = (short)uVar11;
      psVar15[2] = sVar1;
      if (uVar11 == 0) {
        sVar2 = 0;
      }
      else {
        sVar2 = FUN_0200d12c(iVar18 * 0xff,uVar11);
      }
      psVar15[1] = sVar2;
      if (psVar15[1] == 0) {
        *psVar15 = 0;
      }
      else {
        sVar2 = FUN_0200d338(uVar9 * 0x3c,iVar18);
        sVar3 = FUN_0200d338(uVar10 * 0x3c,iVar18);
        sVar4 = FUN_0200d338(uVar13 * 0x3c,iVar18);
        if (uVar9 == uVar11) {
          *psVar15 = (sVar1 - sVar4) - (sVar1 - sVar3);
        }
        else if (uVar10 == uVar11) {
          *psVar15 = ((sVar1 - sVar2) + 0x78) - (sVar1 - sVar4);
        }
        else {
          *psVar15 = ((sVar1 - sVar3) + 0xf0) - (sVar1 - sVar2);
        }
        if (*psVar15 < 0) {
          *psVar15 = *psVar15 + 0x168;
        }
      }
      FUN_0200d12c(*psVar15 * 6,0x168);
      psVar15[3] = extraout_r1;
      psVar15 = psVar15 + 4;
      local_30 = local_30 + 1;
    }
    local_44 = local_44 + 1;
    pbVar19 = pbVar19 + 1;
    local_48 = local_48 + 1;
  }
  return puVar5;
}

