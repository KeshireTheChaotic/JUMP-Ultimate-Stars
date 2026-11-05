
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JQuizMainSinglePause::JQuizMainSinglePauseClass_Create [source-string]
   __FILE__="JQuizMainSinglePause.cpp" __FUNCTION__="JQuizMainSinglePauseClass_Create" lines=[60]
   passed to 1 source-location call(s) */

int * JQuizMainSinglePause::JQuizMainSinglePauseClass_Create(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_r3;
  int *piVar6;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38 [3];
  int local_2c;
  undefined4 uStack_28;
  
  uStack_28 = in_r3;
  piVar1 = (int *)jus_AllocDebug(0x20,s_JQuizMainSinglePause_cpp_021612b4,
                                 s_JQuizMainSinglePauseClass_Create_02161290,0x3c);
  FUN_020517fc(piVar1,0,0x20);
  piVar1[7] = -1;
  iVar2 = jus_AllocDebug(0xcc,s_ALWidget_inl_02160c0c,s_Create_021611fc,0x1de);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)func_0x021af26c(iVar2,FUN_02158ff0,FUN_02159050,FUN_021590cc);
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x14))();
  }
  piVar6 = (int *)piVar3[6];
  iVar2 = piVar6[1];
  *(undefined2 *)(iVar2 + 0xbc) = 0x10;
  *(undefined2 *)(iVar2 + 0xbe) = 3;
  func_0x021b3b7c(1,0,piVar6,0);
  _DAT_021d5154 = 1;
  iVar2 = FUN_02151d90(piVar6,0x31305053);
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 100);
  piVar3 = *(int **)(iVar2 + 0x2c);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_02036430(*(undefined4 *)(iVar2 + 0x20));
  }
  if (piVar3[6] == 0) {
    (**(code **)(*piVar3 + 0x10))();
  }
  iVar2 = CommonPaletteAnime::CommonPaletteAnime_Create(piVar3[6],0x11,3,5,0x80);
  piVar1[6] = iVar2;
  *(undefined2 *)(iVar2 + 0x18) = 0;
  *(undefined2 *)(iVar2 + 0x16) = 0x8df;
  *(undefined1 *)(iVar2 + 0x1a) = 0x1e;
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  *(undefined1 *)(iVar2 + 0x1b) = 1;
  (**(code **)(*piVar6 + 8))();
  iVar2 = ALWidgetBaseImp::Create(piVar1,0);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
  func_0x021b7744(*(undefined4 *)(iVar2 + 4),1);
  *piVar1 = iVar2;
  local_60 = 0x80;
  local_5c = 0x60;
  iVar4 = FUN_0203b3f4();
  iVar4 = FUN_0214ee60(iVar2,*(undefined4 *)(iVar4 + 0x88),0x8f0000,0,0x80,&local_60);
  FUN_02151ebc(&local_58,iVar4,&DAT_021612d0);
  FUN_02023940(*(undefined4 *)(iVar4 + 4));
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_58,0,local_54);
  piVar3 = *(int **)(*(int *)(iVar4 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c70(*(undefined4 *)(iVar4 + 4),0);
  (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),piVar1);
  FUN_02027834(*(undefined4 *)(iVar4 + 4),8,FUN_0215921c);
  func_0x021b4104(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 4),4);
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0xaa) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar4 + 4),0x20);
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0xab) = 0;
  func_0x021b3f78(*(undefined4 *)(iVar4 + 4));
  func_0x021b3fb0(*(undefined4 *)(iVar4 + 4),0);
  func_0x021b3fc4(*(undefined4 *)(iVar4 + 4),0);
  piVar1[1] = iVar4;
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  iVar4 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
  piVar1[2] = iVar4;
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
  local_40 = 0x10000;
  FUN_0214ea78(iVar4,&local_40);
  local_38[0] = local_5c << 0xc;
  local_3c = local_60 << 0xc;
  FUN_0214e1b8(iVar4,&local_3c,local_38);
  *(undefined4 *)(*(int *)(iVar4 + 4) + 0x124) = 0;
  FUN_02151ebc(&local_50,iVar4,&DAT_021612d0);
  FUN_02023940(*(undefined4 *)(iVar4 + 4));
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  FUN_02023c60(*(undefined4 *)(iVar4 + 4),local_50,0,local_4c);
  piVar3 = *(int **)(*(int *)(iVar4 + 4) + 0x68);
  (**(code **)(*piVar3 + 0xac))(piVar3,0);
  FUN_02023c70(*(undefined4 *)(iVar4 + 4),0);
  (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),piVar1);
  FUN_02027834(*(undefined4 *)(iVar4 + 4),8,FUN_02159184);
  func_0x021b4104(*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 4),4);
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0xaa) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar4 + 4),0x8000);
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0xab) = 0;
  func_0x021b3f78(*(undefined4 *)(iVar4 + 4));
  func_0x021b3fb0(*(undefined4 *)(iVar4 + 4),0);
  func_0x021b3fc4(*(undefined4 *)(iVar4 + 4),0);
  local_60 = 0x80;
  local_5c = 0x4e;
  iVar4 = 0;
  do {
    iVar5 = ALWidgetImp::Create(iVar2,_DAT_021d5154);
    piVar1[iVar4 + 3] = iVar5;
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    local_38[1] = 0x10000;
    FUN_0214ea78(iVar5,local_38 + 1);
    local_2c = local_5c << 0xc;
    local_38[2] = local_60 << 0xc;
    FUN_0214e1b8(iVar5,local_38 + 2,&local_2c);
    *(int *)(*(int *)(iVar5 + 4) + 0x124) = iVar4;
    FUN_02151ebc(&local_48,iVar5,&DAT_021612d0);
    FUN_02023940(*(undefined4 *)(iVar5 + 4));
    (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
    FUN_02023c60(*(undefined4 *)(iVar5 + 4),local_48,0,local_44);
    piVar3 = *(int **)(*(int *)(iVar5 + 4) + 0x68);
    (**(code **)(*piVar3 + 0xac))(piVar3,0);
    FUN_02023c70(*(undefined4 *)(iVar5 + 4),0);
    piVar3 = (int *)jus_AllocDebug(0x70,s_ALCollision_inl_021608f4,s_Create_02161204,0x1b2);
    if (piVar3 != (int *)0x0) {
      func_0x021b054c(piVar3,0,&DAT_02093c8c);
      *piVar3 = (int)&jus_Class_0216094c::vftable;
      FUN_0214e6d0(piVar3 + 0x1a,&DAT_02161214);
      *piVar3 = 0x21d1c58;
    }
    if (piVar3[6] == 0) {
      (**(code **)(*piVar3 + 0x14))();
    }
    FUN_02020e98(iVar5,piVar3[6]);
    (**(code **)(**(int **)(iVar5 + 4) + 0x24))(*(int **)(iVar5 + 4),piVar1);
    FUN_02027834(*(undefined4 *)(iVar5 + 4),8,FUN_02159184);
    func_0x021b4104(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 4),4);
    *(undefined1 **)(*(int *)(iVar5 + 4) + 0xec) = &LAB_0215912c;
    func_0x021b3f78(*(undefined4 *)(iVar5 + 4),0);
    func_0x021b3fb0(*(undefined4 *)(iVar5 + 4),0);
    func_0x021b3fc4(*(undefined4 *)(iVar5 + 4),0);
    iVar4 = iVar4 + 1;
    local_5c = local_5c + 0x16;
  } while (iVar4 < 3);
  return piVar1;
}

