
/* WARNING: Removing unreachable block (ram,0x021c59cc) */
/* JUS-GAME JArenaParam::JArena_ParamResult [source-string] __FILE__="JArenaParam.cpp"
   __FUNCTION__="JArena_ParamResult" lines=[] passed to 1 source-location call(s) */

int JArenaParam::JArena_ParamResult(int param_1,undefined1 *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int extraout_r1;
  int extraout_r1_00;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  undefined1 *local_98;
  int local_88 [4];
  uint local_78 [4];
  int local_68 [4];
  int local_58 [4];
  undefined1 auStack_48 [20];
  char local_34 [20];
  int local_20;
  int local_1c;
  int local_18;
  
  iVar9 = param_1 * 0xca4;
  puVar11 = &DAT_020b4118 + iVar9;
  FUN_02073114(iVar9 + 0x3e60);
  iVar2 = jus_AllocDebug(0x2f0,s_JArenaParam_cpp_021d45e0,s_JArena_ParamResult_021d45cc,0x1f0);
  FUN_020517fc(iVar2,0,0x2f0);
  piVar3 = (int *)FUN_020101f4(s_chr_ChrBin_aar_021d45f0,0);
  piVar4 = (int *)thunk_FUN_0203341c(s_chr_ai_ai_param_bin_021d4600,0,0);
  if (piVar4[7] == 0) {
    (**(code **)(*piVar4 + 0x10))();
  }
  piVar4 = (int *)piVar4[7];
  (**(code **)(*piVar3 + 0xc))();
  if ((byte)(&DAT_020b4dac)[iVar9] < 0x13) {
    uVar10 = 0;
    do {
      if (uVar10 != (byte)(&DAT_020b4dad)[iVar9]) {
        local_18 = -1;
        local_1c = -1;
        local_20 = -1;
        iVar8 = FUN_021c5d24(puVar11,uVar10 & 0xff,&local_20,3,1);
        if ((iVar8 != 0) && (iVar8 < 3)) {
          iVar8 = FUN_021c5d24(puVar11,uVar10 & 0xff,&local_20,3 - iVar8,0);
        }
        if (iVar8 != 0) {
          local_88[0] = FUN_0207216c(param_1,uVar10 & 0xff);
          local_88[1] = FUN_0207216c(param_1,local_20);
          local_88[2] = FUN_0207216c(param_1,local_1c);
          local_88[3] = FUN_0207216c(param_1,local_18);
          iVar8 = 0;
          do {
            bVar1 = *(byte *)(local_88[iVar8] + 0x34);
            (**(code **)(*piVar4 + 0x10))();
            iVar7 = (**(code **)(*(int *)piVar4[1] + 0x2c))((int *)piVar4[1],0);
            local_78[iVar8] = (uint)*(byte *)(iVar7 + (uint)bVar1 * 0x30 + 0x2e);
            uVar5 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
            FUN_0200d338(uVar5,0xd);
            local_68[iVar8] = local_78[iVar8] * 10 + extraout_r1;
            uVar6 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
            if ((uVar6 & 0x7f) == 0) {
              uVar5 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
              FUN_0200d338(uVar5,10);
              local_68[iVar8] = local_68[iVar8] + extraout_r1_00;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 4);
          iVar8 = 0;
          do {
            local_58[iVar8] = 0;
            iVar7 = 0;
            do {
              if ((iVar8 != iVar7) && (local_68[iVar8] < local_68[iVar7])) {
                local_58[iVar8] = local_58[iVar8] + 1;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < 4);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 4);
          puVar11[(uVar10 & 0xff) + 0xc80] =
               puVar11[(uVar10 & 0xff) + 0xc80] + (&DAT_021d4584)[local_58[0]];
          puVar11[local_20 + 0xc80] = puVar11[local_20 + 0xc80] + (&DAT_021d4584)[local_58[1]];
          puVar11[local_1c + 0xc80] = puVar11[local_1c + 0xc80] + (&DAT_021d4584)[local_58[2]];
          puVar11[local_18 + 0xc80] = puVar11[local_18 + 0xc80] + (&DAT_021d4584)[local_58[3]];
        }
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < 0x14);
  }
  iVar8 = 0;
  do {
    iVar7 = iVar8 + 1;
    *(uint *)(puVar11 + iVar8 * 4 + 0xc30) = *(uint *)(puVar11 + iVar8 * 4 + 0xc30) & 0xf7ffffff;
    iVar8 = iVar7;
  } while (iVar7 < 0x14);
  iVar8 = 0;
  do {
    iVar7 = iVar8 + 1;
    puVar11[(char)(&DAT_020aff14)[iVar8] + 0xc80] =
         puVar11[(char)(&DAT_020aff14)[iVar8] + 0xc80] + (&DAT_021d4584)[(&DAT_020afee6)[iVar8]];
    iVar8 = iVar7;
  } while (iVar7 < 4);
  (&DAT_020b4db0)[DAT_020afee6 + iVar9] = (&DAT_020b4db0)[DAT_020afee6 + iVar9] + '\x01';
  FUN_021c5bb0(iVar2,puVar11);
  if (param_2 != (undefined1 *)0x0) {
    iVar8 = 0;
    local_98 = param_2;
    do {
      iVar7 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      *local_98 = (char)*(undefined2 *)(iVar2 + iVar7 + 0x212);
      local_98 = local_98 + 1;
    } while (iVar8 < 0x14);
  }
  FUN_021c5c64(puVar11,local_34,auStack_48);
  iVar8 = 0;
  do {
    uVar10 = (uint)*(short *)(iVar2 + iVar8 * 4 + 0x212);
    if ((byte)(&DAT_020b4dad)[iVar9] == uVar10) {
      DAT_020aff10 = local_34[iVar8];
    }
    else if (uVar10 == (int)DAT_020aff15) {
      DAT_020aff11 = local_34[iVar8];
    }
    else if (uVar10 == (int)DAT_020aff16) {
      DAT_020aff12 = local_34[iVar8];
    }
    else if (uVar10 == (int)DAT_020aff17) {
      DAT_020aff13 = local_34[iVar8];
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x14);
  iVar8 = 1;
  do {
    iVar7 = FUN_0207216c(param_1,(int)(char)(&DAT_020aff14)[iVar8]);
    if (*(char *)(iVar7 + 0x37) != -1) {
      FUN_02071a34();
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  (&DAT_020b4daf)[iVar9] = (&DAT_020b4dae)[iVar9];
  (&DAT_020b4dae)[iVar9] = DAT_020aff10;
  (&DAT_020b4db4)[iVar9] = (&DAT_020b4db4)[iVar9] + (char)DAT_020afef2;
  (&DAT_020b4db4)[iVar9] = (&DAT_020b4db4)[iVar9];
  iVar8 = (uint)(byte)(&DAT_020b4db5)[iVar9] + (int)DAT_020aff1a;
  if (0xff < iVar8) {
    iVar8 = 0xff;
  }
  (&DAT_020b4db5)[iVar9] = (char)iVar8;
  iVar8 = (uint)(byte)(&DAT_020b4db6)[iVar9] + (int)DAT_020aff1c;
  if (0xff < iVar8) {
    iVar8 = 0xff;
  }
  (&DAT_020b4db6)[iVar9] = (char)iVar8;
  iVar8 = (uint)(byte)(&DAT_020b4db7)[iVar9] + (int)DAT_020aff1e;
  if (0xff < iVar8) {
    iVar8 = 0xff;
  }
  (&DAT_020b4db7)[iVar9] = (char)iVar8;
  iVar8 = (uint)(byte)(&DAT_020b4db8)[iVar9] + (int)DAT_020aff20;
  if (999 < iVar8) {
    iVar8 = 1000;
  }
  (&DAT_020b4db8)[iVar9] = (char)iVar8;
  iVar8 = (uint)*(ushort *)(&DAT_020b4dba + iVar9) + (int)DAT_020aff22;
  if (999 < iVar8) {
    iVar8 = 1000;
  }
  *(ushort *)(&DAT_020b4dba + iVar9) = (ushort)iVar8 & 0xff;
  iVar8 = (uint)(byte)(&DAT_020b4db9)[iVar9] + (int)DAT_020aff18;
  if (0xff < iVar8) {
    iVar8 = 0xff;
  }
  iVar7 = 0;
  (&DAT_020b4db9)[iVar9] = (char)iVar8;
  (&DAT_020b4dac)[iVar9] = (&DAT_020b4dac)[iVar9] + '\x01';
  bVar1 = (&DAT_020b4dac)[iVar9];
  if (0x12 < bVar1) {
    if (bVar1 == 0x13) {
      if (DAT_020aff10 < '\x04') {
        iVar7 = 1;
      }
      else {
        iVar7 = 3;
      }
    }
    else if (bVar1 == 0x14) {
      if (DAT_020aff10 == '\0') {
        iVar7 = 2;
        switch(param_1) {
        case 0:
          FUN_0207120c(0x1000,1);
          break;
        case 1:
          FUN_0207120c(0x2000,1);
          break;
        case 2:
          FUN_0207120c(0x4000,1);
          break;
        case 3:
          FUN_0207120c(0x8000,1);
        }
        if ((((DAT_020b0b90 & 0x1000) != 0) && ((DAT_020b0b90 & 0x2000) != 0)) &&
           ((DAT_020b0b90 & 0x4000) != 0)) {
          FUN_0207120c(0x40,1);
        }
      }
      else {
        iVar7 = 3;
      }
    }
  }
  if (iVar7 - 2U < 2) {
    (&DAT_020b4dac)[iVar9] = 0;
  }
  FUN_020703c8(param_1,(&DAT_020b4dac)[iVar9]);
  (**(code **)(*(int *)piVar4[1] + 0xc))();
  FUN_0201b244(iVar2);
  return iVar7;
}

