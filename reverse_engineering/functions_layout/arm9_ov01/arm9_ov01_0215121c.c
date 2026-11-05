
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JArenaMissionTry::JAMissionTry_InitPanelWidgetItem [source-string]
   __FILE__="JArenaMissionTry.cpp" __FUNCTION__="JAMissionTry_InitPanelWidgetItem" lines=[1217]
   passed to 2 source-location call(s); header inlines: ALWidgetImp.h:Create */

void JArenaMissionTry::JAMissionTry_InitPanelWidgetItem
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  dword adStack_74 [24];
  
  uVar2 = _DAT_021d5154;
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 4);
  adStack_74[0x17] = param_4;
  iVar1 = thunk_FUN_0201a228(400,s_ALWidgetImp_h_0216bd84,s_Create_0216bd24,0x159);
  if (iVar1 != 0) {
    func_0x021ae114(iVar1,uVar8,uVar2,ALWidgetImp::CreateDrawFunc);
  }
  iVar1 = FUN_0214d37c();
  iVar7 = *(int *)(iVar1 + 4);
  *(undefined4 *)(iVar7 + 0x170) = 0xe8;
  *(undefined4 *)(iVar7 + 0x174) = 0x18;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x180) = 6;
  FUN_0214f7c0(iVar1,*(undefined4 *)(param_1 + 0x84));
  adStack_74[0x15] = 0x21000;
  adStack_74[0x16] = 0x6000;
  FUN_021511c8(iVar1,adStack_74 + 0x16,adStack_74 + 0x15);
  FUN_0214d354(iVar1,0);
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x140) = 1;
  *(undefined1 *)(*(int *)(iVar1 + 4) + 0x141) = 1;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x144) = 1;
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x13c) = 1;
  func_0x021b6214(*(undefined4 *)(iVar1 + 4));
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_02151a7c + 1);
  adStack_74[0x14] = 0x82000;
  FUN_0214ffd0(iVar1,adStack_74 + 0x14);
  *(int *)(param_1 + 0x134) = iVar1;
  iVar7 = FUN_0203b404();
  FUN_0214f7f8(*(undefined4 *)(iVar7 + 0x88));
  uVar2 = func_0x021caa0c(s_font_jskfont_aft_0216c02c,0,0);
  *(undefined4 *)(param_1 + 0x138) = uVar2;
  FUN_0214f834();
  uVar3 = *(uint *)(*(int *)(param_1 + 0x140) + 8);
  uStack_b4 = 0;
  uVar2 = thunk_FUN_0201a228(uVar3,s_JArenaMissionTry_cpp_0216bfdc,
                             s_JAMissionTry_InitPanelWidgetItem_0216bfb8,0x4c1);
  *(undefined4 *)(param_1 + 0x14c) = uVar2;
  FUN_020517fc(*(undefined4 *)(param_1 + 0x14c),0,uVar3);
  for (uVar9 = 0; uVar9 < uVar3; uVar9 = uVar9 + 1) {
    iVar7 = FUN_02152708(uVar9);
    if (iVar7 != 0) {
      func_0x021ae3a4(*(undefined4 *)(iVar1 + 4));
      iVar7 = FUN_0214d37c();
      FUN_0214d354(iVar7,0);
      (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
      iVar4 = ALWidgetImp::Create(iVar7,_DAT_021d5154);
      adStack_74[0x10] = 0;
      adStack_74[0xf] = 0;
      FUN_021511c8(iVar4,adStack_74 + 0xf,adStack_74 + 0x10);
      *(uint *)(*(int *)(iVar4 + 4) + 0x124) = uVar9;
      func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
      adStack_74[0x11] = 0x7b000;
      FUN_0214e6c0(iVar4,adStack_74 + 0x11);
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
      iVar5 = FUN_0203b404();
      uVar2 = *(undefined4 *)(iVar5 + 0x88);
      uVar8 = FUN_02152748(*(undefined4 *)(param_1 + 0x140),uVar9);
      iVar5 = FUN_0214fba8(uVar2,0xa00000,uVar8,0x7b);
      adStack_74[0x13] = 0x8000;
      adStack_74[0x12] = 0x8000;
      FUN_021511c8(iVar5,adStack_74 + 0x12,adStack_74 + 0x13);
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
      FUN_0214e688(iVar4,iVar5);
      iVar4 = ALWidgetImp::Create(iVar7,_DAT_021d5154);
      adStack_74[0xc] = 0;
      adStack_74[0xb] = 0x14000;
      FUN_021511c8(iVar4,adStack_74 + 0xb,adStack_74 + 0xc);
      *(uint *)(*(int *)(iVar4 + 4) + 0x124) = uVar9;
      func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
      adStack_74[0xd] = 0x7b000;
      FUN_0214e6c0(iVar4,adStack_74 + 0xd);
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
      iVar5 = FUN_0203b404();
      FUN_0214f7f8(*(undefined4 *)(iVar5 + 0x88));
      func_0x021c5fb4(*(undefined4 *)(*(int *)(param_1 + 0x138) + 4));
      iVar5 = FUN_0214d37c();
      adStack_74[0xe] = 0x7b000;
      FUN_0214e6c0(iVar5,adStack_74 + 0xe);
      piVar6 = *(int **)(iVar5 + 4);
      (**(code **)(*(int *)piVar6[0x19] + 0x70))();
      (**(code **)(*piVar6 + 0xc4))();
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
      piVar6 = *(int **)(*(int *)(iVar5 + 4) + 100);
      (**(code **)(*piVar6 + 0xa8))(piVar6,6);
      piVar6 = *(int **)(*(int *)(iVar5 + 4) + 100);
      (**(code **)(*piVar6 + 0x68))(piVar6,*(int *)(*(int *)(param_1 + 0x140) + 4) + uVar9 * 0xa4);
      FUN_0214f834();
      FUN_0214e688(iVar4,iVar5);
      iVar4 = ALWidgetImp::Create(iVar7,_DAT_021d5154);
      adStack_74[7] = 0;
      adStack_74[6] = 0xc5000;
      FUN_021511c8(iVar4,adStack_74 + 6,adStack_74 + 7);
      *(uint *)(*(int *)(iVar4 + 4) + 0x124) = uVar9;
      func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
      adStack_74[8] = 0x7b000;
      FUN_0214e6c0(iVar4,adStack_74 + 8);
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
      if (*(char *)(*(int *)(*(int *)(param_1 + 0x140) + 4) + uVar9 * 0xa4 + 0x77) == -1) {
        uStack_b8 = 10;
      }
      else {
        uStack_b8 = 9;
      }
      iVar5 = FUN_0203b404();
      iVar5 = FUN_0214fba8(*(undefined4 *)(iVar5 + 0x88),0x870000,uStack_b8,0x7b);
      adStack_74[10] = 0x7000;
      adStack_74[9] = 0;
      FUN_021511c8(iVar5,adStack_74 + 9,adStack_74 + 10);
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
      FUN_0214e688(iVar4,iVar5);
      iVar4 = ALWidgetImp::Create(iVar7,_DAT_021d5154);
      adStack_74[1] = 0;
      adStack_74[0] = 0xffffa000;
      FUN_021511c8(iVar4,adStack_74,adStack_74 + 1);
      *(uint *)(*(int *)(iVar4 + 4) + 0x124) = uStack_b4;
      adStack_74[2] = 0x7c000;
      FUN_0214e6c0(iVar4,adStack_74 + 2);
      (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),param_1);
      (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
      func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
      if (*(char *)(param_1 + 0x158) == (char)uStack_b4) {
        func_0x021b6214(*(undefined4 *)(iVar4 + 4),1);
      }
      uVar2 = FUN_02150a40(0,0x216bdb4,0x2093c8c);
      FUN_02020e98(iVar4,uVar2);
      *(code **)(*(int *)(iVar4 + 4) + 0xdc) = FUN_0215265c + 1;
      *(undefined1 **)(*(int *)(iVar4 + 4) + 0xe0) = &LAB_0215267c_1;
      func_0x021b65e8(*(undefined4 *)(iVar4 + 4),4,FUN_02152680);
      iVar5 = FUN_0203b414(3);
      FUN_0214f7f8(*(undefined4 *)(iVar5 + 0x88));
      FUN_02032a4c(*(undefined4 *)(*(int *)(param_1 + 0x44) + 4));
      iVar5 = FUN_0214d37c();
      *(undefined4 *)(*(int *)(iVar5 + 4) + 0x54) = 0;
      adStack_74[3] = 0xc4000;
      FUN_0214e6c0(iVar5,adStack_74 + 3);
      adStack_74[5] = 0;
      adStack_74[4] = 0;
      FUN_021511c8(iVar5,adStack_74 + 4,adStack_74 + 5);
      (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
      FUN_0214f834();
      FUN_0214e688(iVar4,iVar5);
      (**(code **)(**(int **)(iVar7 + 4) + 0x24))(*(int **)(iVar7 + 4),iVar4);
      *(undefined1 **)(*(int *)(iVar7 + 4) + 0xdc) = &LAB_021525dc_1;
      *(code **)(*(int *)(iVar7 + 4) + 0xe0) = FUN_0215261c + 1;
      iVar4 = FUN_02152728(uVar9);
      if (iVar4 != 0) {
        iVar7 = ALWidgetImp::Create(iVar7,_DAT_021d5154);
        uStack_84 = 0;
        uStack_88 = 0;
        FUN_021511c8(iVar7,&uStack_88,&uStack_84);
        *(uint *)(*(int *)(iVar7 + 4) + 0x124) = uVar9;
        func_0x021b6214(*(undefined4 *)(iVar7 + 4),0);
        uStack_80 = 0x79000;
        FUN_0214e6c0(iVar7,&uStack_80);
        (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
        iVar4 = FUN_0203b404();
        iVar4 = FUN_0214fba8(*(undefined4 *)(iVar4 + 0x88),0x870000,8,0x79);
        uStack_78 = 0x8000;
        uStack_7c = 0x8000;
        FUN_021511c8(iVar4,&uStack_7c,&uStack_78);
        (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
        FUN_0214e688(iVar7,iVar4);
      }
      *(char *)(*(int *)(param_1 + 0x14c) + uStack_b4) = (char)uVar9;
      uStack_b4 = uStack_b4 + 1;
    }
  }
  if (uStack_b4 != 0) {
    (**(code **)(**(int **)(iVar1 + 4) + 0x1a0))
              (*(int **)(iVar1 + 4),(int)*(char *)(param_1 + 0x158),0);
    (**(code **)(**(int **)(iVar1 + 4) + 0x198))
              (*(int **)(iVar1 + 4),(int)*(char *)(param_1 + 0x158));
  }
  if (6 < uStack_b4) {
    *(undefined1 *)(*(int *)(iVar1 + 4) + 0x114) = 1;
  }
  *(char *)(param_1 + 0x159) = (char)uStack_b4;
  return;
}

