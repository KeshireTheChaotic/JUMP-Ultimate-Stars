
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizMainTextQDisp::JQuizMainTextQDispClass_Create [source-string]
   __FILE__="JQuizMainTextQDisp.cpp" __FUNCTION__="JQuizMainTextQDispClass_Create" lines=[50, 62]
   passed to 2 source-location call(s); header inlines: ALWidgetImp.h:Create */

int * JQuizMainTextQDisp::JQuizMainTextQDispClass_Create
                (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  piVar1 = (int *)thunk_FUN_0201a228(0x38,s_JQuizMainTextQDisp_cpp_02160e24,
                                     s_JQuizMainTextQDispClass_Create_02160e04,0x32);
  FUN_020517fc(piVar1,0,0x38);
  uVar5 = _DAT_021d5154;
  uVar8 = *(undefined4 *)(param_1 + 4);
  iVar2 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_021608d4,s_Create_02160dfc,0x3e);
  if (iVar2 != 0) {
    func_0x021af0f8(iVar2,uVar8,uVar5,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar2 = FUN_0214e3ec();
  *piVar1 = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  iVar3 = FUN_0203b404();
  FUN_0214f1b8(*(undefined4 *)(iVar3 + 0x88));
  uVar4 = FUN_0214f72c();
  if ((uVar4 < 2) || (iVar3 = FUN_0214f6c4(), iVar3 != 0)) {
    iVar3 = FUN_0203b404();
    uVar8 = *(undefined4 *)(iVar3 + 0x88);
    uVar5 = FUN_0214f288();
    iVar3 = FUN_0214eaa0(uVar8,uVar5,6,0x6e);
    piVar1[0xc] = iVar3;
    FUN_0214e478(iVar2,piVar1[0xc]);
    local_30 = 0x82000;
    local_2c = 0xa9000;
    FUN_0214e1b8(piVar1[0xc],&local_2c,&local_30);
  }
  FUN_0214e7ec(param_2);
  iVar3 = func_0x021ca3a4(0xe0,0x20,s_font_jskfont_q_aft_02160e3c,0,0);
  piVar6 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar6 + 0xa8))(piVar6,0);
  piVar6 = *(int **)(*(int *)(iVar3 + 4) + 100);
  (**(code **)(*piVar6 + 0xa4))(piVar6,1);
  local_34 = 0x20000;
  FUN_0214ea78(iVar3,&local_34);
  piVar6 = *(int **)(iVar3 + 4);
  (**(code **)(*(int *)piVar6[0x19] + 0x70))();
  (**(code **)(*piVar6 + 0xc4))();
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  local_3c = 0x20000;
  local_38 = 0x10000;
  FUN_0214e1b8(iVar3,&local_38,&local_3c);
  FUN_0214e478(iVar2,iVar3);
  piVar1[2] = iVar3;
  iVar3 = 0;
  do {
    iVar7 = func_0x021ca3a4(0xe0,0x10,s_font_jskfont_q_aft_02160e3c,0,0);
    piVar6 = *(int **)(*(int *)(iVar7 + 4) + 100);
    (**(code **)(*piVar6 + 0xa8))(piVar6,6);
    piVar6 = *(int **)(*(int *)(iVar7 + 4) + 100);
    (**(code **)(*piVar6 + 0xa4))(piVar6,1);
    local_40 = 0x20000;
    FUN_0214ea78(iVar7,&local_40);
    piVar6 = *(int **)(iVar7 + 4);
    (**(code **)(*(int *)piVar6[0x19] + 0x70))();
    (**(code **)(*piVar6 + 0xc4))();
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    local_54[3] = (iVar3 * 0x10 + 0x40) * 0x1000;
    local_44 = 0x10000;
    FUN_0214e1b8(iVar7,&local_44,local_54 + 3);
    FUN_0214e478(iVar2,iVar7);
    iVar9 = iVar3 + 1;
    piVar1[iVar3 + 3] = iVar7;
    iVar3 = iVar9;
  } while (iVar9 < 4);
  FUN_0214e850();
  FUN_0214e7ec(param_3);
  iVar3 = 0;
  do {
    iVar7 = func_0x021ca3a4(0xe0,0x10,s_font_jskfont_q_aft_02160e3c,0,0);
    piVar6 = *(int **)(*(int *)(iVar7 + 4) + 100);
    (**(code **)(*piVar6 + 0xa8))(piVar6,6);
    piVar6 = *(int **)(*(int *)(iVar7 + 4) + 100);
    (**(code **)(*piVar6 + 0xa4))(piVar6,1);
    local_54[2] = 0x20000;
    FUN_0214ea78(iVar7,local_54 + 2);
    piVar6 = *(int **)(iVar7 + 4);
    (**(code **)(*(int *)piVar6[0x19] + 0x70))();
    (**(code **)(*piVar6 + 0xc4))();
    (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
    local_54[0] = (iVar3 * 0x30 + 0x10) * 0x1000;
    local_54[1] = 0x18000;
    FUN_0214e1b8(iVar7,local_54 + 1,local_54);
    FUN_0214e478(iVar2,iVar7);
    iVar9 = iVar3 + 1;
    piVar1[iVar3 + 7] = iVar7;
    iVar3 = iVar9;
  } while (iVar9 < 4);
  FUN_0214e850();
  piVar1[0xb] = 0;
  return piVar1;
}

