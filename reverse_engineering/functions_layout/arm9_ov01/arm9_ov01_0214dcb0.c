
/* WARNING: Removing unreachable block (ram,0x0214de04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME JGalaxyResult::JGalaxyResult_Add [source-string] __FILE__="JGalaxyResult.cpp"
   __FUNCTION__="JGalaxyResult_Add" lines=[68] passed to 1 source-location call(s) */

int JGalaxyResult::JGalaxyResult_Add(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined2 uStack_2a;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  
  piVar1 = (int *)thunk_FUN_0201a228(0x34,s_JGalaxyResult_cpp_0216bb74,s_JGalaxyResult_Add_0216bb60,
                                     0x44);
  FUN_020517fc(piVar1,0,0x34);
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  uStack_20 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&uStack_20);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_0214e19c);
  (**(code **)(**(int **)(piVar1[1] + 4) + 0x24))(*(int **)(piVar1[1] + 4),piVar1);
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  iVar2 = ResultMission::ResultMission_Create(0);
  piVar1[10] = iVar2;
  *(code **)(iVar2 + 0x3c) = FUN_0214e370;
  *(code **)(piVar1[10] + 0x40) = FUN_0214e380;
  *(int **)(piVar1[10] + 0x44) = piVar1;
  iVar2 = FUN_020101f4(s_jgalaxy_jgalaxy_aar_0216bb88,0);
  piVar1[3] = iVar2;
  iVar2 = FUN_020101f4(s_common_button_aar_0216bb9c,0);
  piVar1[2] = iVar2;
  uVar7 = _DAT_021d5154;
  iVar2 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_0216b9dc,s_Create_0216bb58,0x2a6);
  if (iVar2 != 0) {
    func_0x021b7950(iVar2,0,uVar7,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar2 = FUN_0214d37c();
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  func_0x021b5898(*(undefined4 *)(iVar2 + 4));
  iVar3 = FUN_0203b3f4();
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar7;
  FUN_020329ec(0x510000);
  iVar3 = FUN_0214d37c();
  FUN_02023894(*(undefined4 *)(iVar3 + 4),0x510014,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  *(undefined4 *)(*(int *)(iVar3 + 4) + 0x54) = 0x31305053;
  uStack_24 = 0x5f000;
  FUN_0214e6c0(iVar3,&uStack_24);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  uVar7 = _DAT_021d5154;
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  uVar6 = *(undefined4 *)(iVar2 + 4);
  iVar4 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_0216b998,s_Create_0216bb50,0x3e);
  if (iVar4 != 0) {
    func_0x021af0f8(iVar4,uVar6,uVar7,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar4 = FUN_0214d37c();
  FUN_0214e688(iVar4,iVar3);
  (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),piVar1);
  func_0x021b3f78(*(undefined4 *)(iVar4 + 4),0x510014);
  func_0x021b400c(*(undefined4 *)(iVar4 + 4),0x510016);
  func_0x021b3fc4(*(undefined4 *)(iVar4 + 4),0x510015);
  func_0x021b6760(*(undefined4 *)(iVar4 + 4),4,FUN_0214e328);
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar4 + 4) + 0xb1) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar4 + 4),0x10);
  uStack_30 = 0x5f000;
  FUN_0214e6c0(iVar4,&uStack_30);
  (**(code **)(**(int **)(iVar4 + 4) + 0x148))(*(int **)(iVar4 + 4),8);
  FUN_02023894(*(undefined4 *)(iVar4 + 4),0x510014,0);
  (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x68) + 0x6c))();
  piVar5 = *(int **)(*(int *)(iVar4 + 4) + 0x50);
  piVar5[3] = 0x100000;
  piVar5[4] = 0xc0000;
  if (*(byte *)(piVar5 + 9) != (*(byte *)(piVar5 + 9) | 1)) {
    (**(code **)(*piVar5 + 0x18))();
  }
  *(byte *)(piVar5 + 9) = *(byte *)(piVar5 + 9) | 0x31;
  uStack_2c = 0xffd0;
  uStack_2a = 0xfff0;
  uStack_28 = 0;
  uStack_26 = 0;
  piVar5 = (int *)thunk_FUN_0201a228(0x70,s_ALCollision_inl_0216b9b8,s_Create_0216bb48,0x1b2);
  if (piVar5 != (int *)0x0) {
    func_0x021b054c(piVar5,0,&DAT_02093c8c);
    *piVar5 = (int)&jus_Class_0216ba10::vftable;
    FUN_0214dad4(piVar5 + 0x1a,&uStack_2c);
    *piVar5 = 0x21d1c58;
  }
  if (piVar5[6] == 0) {
    (**(code **)(*piVar5 + 0x14))();
  }
  FUN_02020e98(iVar4,piVar5[6]);
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  piVar1[4] = iVar2;
  piVar1[5] = iVar4;
  func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
  iVar2 = JGalaxyClearList::JGalaxyClearList_Create(DAT_020b4114,1);
  piVar1[0xb] = iVar2;
  iVar2 = func_0x021ba49c(1,0,1);
  piVar1[0xc] = iVar2;
  iVar2 = FUN_02075f08(piVar1 + 9,auStack_1c);
  piVar1[8] = iVar2;
  iVar2 = FUN_02075f60(piVar1 + 7);
  piVar1[6] = iVar2;
  FUN_02073ebc(2,1);
  func_0x021b65bc();
  return *piVar1;
}

