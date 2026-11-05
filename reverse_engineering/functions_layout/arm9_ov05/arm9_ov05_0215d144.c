
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME KomaHelp::KomaHelp_Create [source-string] __FILE__="KomaHelp.cpp"
   __FUNCTION__="KomaHelp_Create" lines=[51] passed to 1 source-location call(s) */

undefined4 * KomaHelp::KomaHelp_Create(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined4 local_28;
  
  puVar1 = (undefined4 *)
           jus_AllocDebug(0xf4,s_KomaHelp_cpp_021706a4,s_KomaHelp_Create_0217067c,0x33);
  func_0x021b65bc();
  FUN_020517fc(puVar1,0,0xf4);
  puVar1[0x3b] = param_1;
  iVar2 = FUN_02026f94();
  puVar1[2] = iVar2;
  local_28 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_28);
  FUN_02028384(*(undefined4 *)(puVar1[2] + 4),FUN_0215dec0);
  (**(code **)(**(int **)(puVar1[2] + 4) + 0x24))(*(int **)(puVar1[2] + 4),puVar1);
  uVar3 = func_0x021bcf1c(0x15,0xffffffff,0,0);
  *puVar1 = uVar3;
  piVar4 = (int *)FUN_020101f4(s_deckmake_deckmake_aar_021706b4,0);
  uVar3 = FUN_020101f4(DAT_0217017c,0);
  puVar1[0x3a] = uVar3;
  iVar2 = jus_AllocDebug(0xcc,s_ALWidget_inl_0216f484,s_Create_0217066c,0x1de);
  piVar5 = (int *)0x0;
  if (iVar2 != 0) {
    piVar5 = (int *)func_0x021af26c(iVar2,FUN_0215df34,FUN_0215dffc,0);
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  piVar5 = (int *)piVar5[6];
  func_0x021b3b7c(1,0,piVar5,0);
  iVar2 = (**(code **)(*(int *)piVar5[1] + 0xb0))((int *)piVar5[1],0x31305053);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_021504fc();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 100);
  piVar9 = *(int **)(iVar2 + 0x2c);
  if (piVar9 == (int *)0x0) {
    piVar9 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar9[6] == 0) {
    (**(code **)(*piVar9 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar9[6],1,2,5,0x80);
  puVar1[1] = iVar2;
  *(undefined2 *)(iVar2 + 0x18) = 0x7400;
  *(undefined2 *)(iVar2 + 0x16) = 0x7400;
  *(undefined1 *)(iVar2 + 0x1a) = 0x20;
  *(undefined1 *)(iVar2 + 0x1c) = 3;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  FUN_02028330(*(undefined4 *)(*(int *)puVar1[1] + 4));
  (**(code **)(*piVar5 + 8))();
  _DAT_021d5154 = 1;
  uVar3 = ALWidgetBaseImp::Create(puVar1,0x60,0);
  puVar1[3] = uVar3;
  iVar2 = FUN_0215e9e4(puVar1[3],&DAT_021701a4,0,0x1f,0);
  puVar1[4] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),puVar1);
  *(undefined1 *)(*(int *)(puVar1[4] + 4) + 0xb1) = 1;
  func_0x021b77a8(*(undefined4 *)(puVar1[4] + 4),0x4000);
  if (puVar1[0x3b] == 0) {
    uVar3 = puVar1[3];
    puVar10 = &DAT_02170474;
    iVar2 = 0;
    do {
      iVar6 = FUN_0215e9e4(uVar3,puVar10,0,0x1f,0);
      puVar1[iVar2 + 0x29] = iVar6;
      *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = *puVar10;
      (**(code **)(**(int **)(puVar1[iVar2 + 0x29] + 4) + 0x24))
                (*(int **)(puVar1[iVar2 + 0x29] + 4),puVar1);
      iVar6 = iVar2 + 1;
      *(code **)(*(int *)(puVar1[iVar2 + 0x29] + 4) + 0xe4) = FUN_0215e098;
      *(undefined1 *)(*(int *)(puVar1[iVar2 + 0x29] + 4) + 0xb1) = 1;
      puVar10 = puVar10 + 9;
      iVar2 = iVar6;
    } while (iVar6 < 0xe);
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 + 0x2a] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x2a] + 4),8,*(undefined4 *)(puVar1[iVar2 + 0x29] + 4));
      (**(code **)(**(int **)(puVar1[iVar2 + 0x29] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x29] + 4),4,*(undefined4 *)(puVar1[iVar2 + 0x2a] + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
    iVar2 = 8;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 + 0x2a] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x2a] + 4),8,*(undefined4 *)(puVar1[iVar2 + 0x29] + 4));
      (**(code **)(**(int **)(puVar1[iVar2 + 0x29] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x29] + 4),4,*(undefined4 *)(puVar1[iVar2 + 0x2a] + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0xd);
    iVar2 = 0;
    puVar10 = &DAT_021702c4;
    do {
      iVar6 = FUN_0215e9e4(uVar3,puVar10,0,0x1f,0);
      puVar1[iVar2 + 0x24] = iVar6;
      *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = *puVar10;
      (**(code **)(**(int **)(puVar1[iVar2 + 0x24] + 4) + 0x24))
                (*(int **)(puVar1[iVar2 + 0x24] + 4),puVar1);
      iVar6 = iVar2 + 1;
      *(code **)(*(int *)(puVar1[iVar2 + 0x24] + 4) + 0xe4) = FUN_0215e098;
      *(undefined1 *)(*(int *)(puVar1[iVar2 + 0x24] + 4) + 0xb1) = 1;
      iVar2 = iVar6;
      puVar10 = puVar10 + 9;
    } while (iVar6 < 5);
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 + 0x25] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x25] + 4),4,*(undefined4 *)(puVar1[iVar2 + 0x24] + 4));
      (**(code **)(**(int **)(puVar1[iVar2 + 0x24] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x24] + 4),8,*(undefined4 *)(puVar1[iVar2 + 0x25] + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar2 = 0;
    puVar10 = &DAT_021701c8;
    do {
      iVar6 = FUN_0215e9e4(uVar3,puVar10,0,0x1f,0);
      puVar1[iVar2 + 0x37] = iVar6;
      *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = *puVar10;
      (**(code **)(**(int **)(puVar1[iVar2 + 0x37] + 4) + 0x24))
                (*(int **)(puVar1[iVar2 + 0x37] + 4),puVar1);
      iVar6 = iVar2 + 1;
      *(code **)(*(int *)(puVar1[iVar2 + 0x37] + 4) + 0xe4) = FUN_0215e098;
      *(undefined1 *)(*(int *)(puVar1[iVar2 + 0x37] + 4) + 0xb1) = 1;
      iVar2 = iVar6;
      puVar10 = puVar10 + 9;
    } while (iVar6 < 3);
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 + 0x38] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x38] + 4),1,*(undefined4 *)(puVar1[iVar2 + 0x37] + 4));
      (**(code **)(**(int **)(puVar1[iVar2 + 0x37] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x37] + 4),2,*(undefined4 *)(puVar1[iVar2 + 0x38] + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 + 0x29] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x29] + 4),2,*(undefined4 *)(puVar1[iVar2 + 0x31] + 4));
      (**(code **)(**(int **)(puVar1[iVar2 + 0x31] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x31] + 4),1,*(undefined4 *)(puVar1[iVar2 + 0x29] + 4));
      (**(code **)(**(int **)(puVar1[iVar2 + 0x31] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x31] + 4),2,
                 *(undefined4 *)(puVar1[(char)(&DAT_0216d698)[iVar2] + 0x24] + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 + 0x24] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x24] + 4),1,
                 *(undefined4 *)(puVar1[(char)(&DAT_0216d690)[iVar2] + 0x29] + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    (**(code **)(**(int **)(puVar1[0x2f] + 4) + 0x160))
              (*(int **)(puVar1[0x2f] + 4),2,*(undefined4 *)(puVar1[0x36] + 4));
    (**(code **)(**(int **)(puVar1[0x30] + 4) + 0x160))
              (*(int **)(puVar1[0x30] + 4),2,*(undefined4 *)(puVar1[0x37] + 4));
    (**(code **)(**(int **)(puVar1[0x36] + 4) + 0x160))
              (*(int **)(puVar1[0x36] + 4),4,*(undefined4 *)(puVar1[0x37] + 4));
    (**(code **)(**(int **)(puVar1[0x37] + 4) + 0x160))
              (*(int **)(puVar1[0x37] + 4),1,*(undefined4 *)(puVar1[0x30] + 4));
    (**(code **)(**(int **)(puVar1[0x39] + 4) + 0x160))
              (*(int **)(puVar1[0x39] + 4),2,*(undefined4 *)(puVar1[0x24] + 4));
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 + 0x37] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 0x37] + 4),8,*(undefined4 *)(puVar1[0x36] + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    func_0x021b6214(*(undefined4 *)(puVar1[0x29] + 4),1);
  }
  else if (puVar1[0x3b] == 1) {
    iVar2 = 0;
    uVar3 = puVar1[3];
    bVar11 = (DAT_02172324 & 1) == 0;
    uVar8 = DAT_02172324;
    if (bVar11) {
      uVar8 = DAT_02172324 | 1;
    }
    puVar10 = &DAT_02170234;
    if (bVar11) {
      DAT_02172324 = uVar8;
    }
    do {
      iVar6 = FUN_0215e9e4(uVar3,puVar10,0,0x1f,0);
      puVar1[iVar2 + 5] = iVar6;
      *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = *puVar10;
      (**(code **)(**(int **)(puVar1[iVar2 + 5] + 4) + 0x24))
                (*(int **)(puVar1[iVar2 + 5] + 4),puVar1);
      iVar6 = iVar2 + 1;
      *(code **)(*(int *)(puVar1[iVar2 + 5] + 4) + 0xe4) = FUN_0215e098;
      *(undefined1 *)(*(int *)(puVar1[iVar2 + 5] + 4) + 0xb1) = 1;
      puVar10 = puVar10 + 9;
      iVar2 = iVar6;
    } while (iVar6 < 4);
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 + 6] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 6] + 4),1,*(undefined4 *)(puVar1[iVar2 + 5] + 4));
      (**(code **)(**(int **)(puVar1[iVar2 + 5] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 5] + 4),2,*(undefined4 *)(puVar1[iVar2 + 6] + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    iVar2 = 0;
    puVar10 = &DAT_02170378;
    do {
      iVar6 = FUN_0215e9e4(uVar3,puVar10,0,0x1f,0);
      puVar1[iVar2 + 9] = iVar6;
      *(undefined4 *)(*(int *)(iVar6 + 4) + 0x124) = *puVar10;
      (**(code **)(**(int **)(puVar1[iVar2 + 9] + 4) + 0x24))
                (*(int **)(puVar1[iVar2 + 9] + 4),puVar1);
      iVar6 = iVar2 + 1;
      *(code **)(*(int *)(puVar1[iVar2 + 9] + 4) + 0xe4) = FUN_0215e098;
      *(undefined1 *)(*(int *)(puVar1[iVar2 + 9] + 4) + 0xb1) = 1;
      iVar2 = iVar6;
      puVar10 = puVar10 + 9;
    } while (iVar6 < 7);
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 + 10] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 10] + 4),1,*(undefined4 *)(puVar1[iVar2 + 9] + 4));
      (**(code **)(**(int **)(puVar1[iVar2 + 9] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 9] + 4),2,*(undefined4 *)(puVar1[iVar2 + 10] + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 6);
    FUN_02051890(&DAT_02170180,&DAT_02172328,0x24);
    iVar2 = 0;
    do {
      iVar6 = 0;
      do {
        DAT_02172338 = (short)iVar6 * 0x30 + 0x18;
        DAT_0217233a = (undefined2)((uint)((iVar2 * 0x30 + 0x18) * 0x10000) >> 0x10);
        iVar7 = FUN_0215e9e4(uVar3,&DAT_02172328,0,0x1f,0);
        puVar1[iVar2 * 5 + iVar6 + 0x10] = iVar7;
        *(undefined4 *)(*(int *)(iVar7 + 4) + 0x124) = DAT_02172328;
        (**(code **)(**(int **)(puVar1[iVar2 * 5 + iVar6 + 0x10] + 4) + 0x24))
                  (*(int **)(puVar1[iVar2 * 5 + iVar6 + 0x10] + 4),puVar1);
        iVar7 = iVar6 + 1;
        *(code **)(*(int *)(puVar1[iVar2 * 5 + iVar6 + 0x10] + 4) + 0xe4) = FUN_0215e098;
        *(undefined1 *)(*(int *)(puVar1[iVar2 * 5 + iVar6 + 0x10] + 4) + 0xb1) = 1;
        iVar6 = iVar7;
      } while (iVar7 < 5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar2 = 0;
    do {
      iVar6 = 0;
      do {
        (**(code **)(**(int **)(puVar1[iVar2 * 5 + iVar6 + 0x11] + 4) + 0x160))
                  (*(int **)(puVar1[iVar2 * 5 + iVar6 + 0x11] + 4),8,
                   *(undefined4 *)(puVar1[iVar2 * 5 + iVar6 + 0x10] + 4));
        (**(code **)(**(int **)(puVar1[iVar2 * 5 + iVar6 + 0x10] + 4) + 0x160))
                  (*(int **)(puVar1[iVar2 * 5 + iVar6 + 0x10] + 4),4,
                   *(undefined4 *)(puVar1[iVar2 * 5 + iVar6 + 0x11] + 4));
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    iVar2 = 0;
    do {
      iVar6 = 0;
      do {
        (**(code **)(**(int **)(puVar1[iVar2 * 5 + iVar6 + 0x15] + 4) + 0x160))
                  (*(int **)(puVar1[iVar2 * 5 + iVar6 + 0x15] + 4),1,
                   *(undefined4 *)(puVar1[iVar2 * 5 + iVar6 + 0x10] + 4));
        (**(code **)(**(int **)(puVar1[iVar2 * 5 + iVar6 + 0x10] + 4) + 0x160))
                  (*(int **)(puVar1[iVar2 * 5 + iVar6 + 0x10] + 4),2,
                   *(undefined4 *)(puVar1[iVar2 * 5 + iVar6 + 0x15] + 4));
        iVar6 = iVar6 + 1;
      } while (iVar6 < 5);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    iVar2 = 0;
    do {
      if (iVar2 < 3) {
        piVar5 = *(int **)(puVar1[iVar2 + 5] + 4);
        (**(code **)(*piVar5 + 0x160))(piVar5,8,*(undefined4 *)(puVar1[0x14] + 4));
      }
      else {
        piVar5 = *(int **)(puVar1[iVar2 + 5] + 4);
        (**(code **)(*piVar5 + 0x160))(piVar5,8,*(undefined4 *)(puVar1[0x19] + 4));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    (**(code **)(**(int **)(puVar1[0x14] + 4) + 0x160))
              (*(int **)(puVar1[0x14] + 4),4,*(undefined4 *)(puVar1[5] + 4));
    (**(code **)(**(int **)(puVar1[0x19] + 4) + 0x160))
              (*(int **)(puVar1[0x19] + 4),4,*(undefined4 *)(puVar1[8] + 4));
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(puVar1[iVar2 + 9] + 4) + 0x160))
                (*(int **)(puVar1[iVar2 + 9] + 4),8,
                 *(undefined4 *)(puVar1[(uint)(byte)(&DAT_02170674)[iVar2] * 5 + 0x14] + 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
    (**(code **)(**(int **)(puVar1[0x1e] + 4) + 0x160))
              (*(int **)(puVar1[0x1e] + 4),4,*(undefined4 *)(puVar1[9] + 4));
    (**(code **)(**(int **)(puVar1[0x23] + 4) + 0x160))
              (*(int **)(puVar1[0x23] + 4),4,*(undefined4 *)(puVar1[0xc] + 4));
    (**(code **)(**(int **)(puVar1[8] + 4) + 0x160))
              (*(int **)(puVar1[8] + 4),2,*(undefined4 *)(puVar1[9] + 4));
    (**(code **)(**(int **)(puVar1[9] + 4) + 0x160))
              (*(int **)(puVar1[9] + 4),1,*(undefined4 *)(puVar1[8] + 4));
    func_0x021b6214(*(undefined4 *)(puVar1[0x10] + 4),1);
  }
  func_0x021b6214(*(undefined4 *)(puVar1[3] + 4),1);
  (**(code **)(*piVar4 + 0xc))();
  FUN_02073ef0(6,0);
  return puVar1;
}

