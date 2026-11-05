
/* WARNING: Removing unreachable block (ram,0x0214de04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0214dcfc(undefined4 param_1,undefined4 param_2,code *param_3,undefined4 param_4,
                undefined4 param_5,undefined2 param_6,undefined2 param_7,undefined4 param_8,
                undefined4 param_9,undefined1 param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *unaff_r7;
  undefined4 uVar6;
  undefined2 uStack00000006;
  undefined2 uStack0000000a;
  
  (*param_3)();
  FUN_02028384(*(undefined4 *)(unaff_r7[1] + 4),FUN_0214e19c);
  (**(code **)(**(int **)(unaff_r7[1] + 4) + 0x24))();
  iVar1 = FUN_020310f4();
  *unaff_r7 = iVar1;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar1 + 4));
  iVar1 = ResultMission::ResultMission_Create(0);
  unaff_r7[10] = iVar1;
  *(undefined1 **)(iVar1 + 0x3c) = &LAB_0214e370;
  *(code **)(unaff_r7[10] + 0x40) = FUN_0214e380;
  *(int **)(unaff_r7[10] + 0x44) = unaff_r7;
  iVar1 = FUN_020101f4(s_jgalaxy_jgalaxy_aar_0216bb88,0);
  unaff_r7[3] = iVar1;
  iVar1 = FUN_020101f4(s_common_button_aar_0216bb9c,0);
  unaff_r7[2] = iVar1;
  uVar6 = _DAT_021d5154;
  iVar1 = thunk_FUN_0201a228(0x14c,s_ALWidgetBaseImp_h_0216b9dc,s_Create_0216bb58,0x2a6);
  if (iVar1 != 0) {
    func_0x021b7950(iVar1,0,uVar6,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar1 = FUN_0214d37c();
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  func_0x021b5898(*(undefined4 *)(iVar1 + 4));
  iVar2 = FUN_0203b3f4();
  uVar6 = *(undefined4 *)(*(int *)(iVar2 + 0x88) + 4);
  DAT_02093c08 = DAT_02093c08 + -1;
  (&DAT_020a16d0)[DAT_02093c08] = DAT_020a0dd0;
  DAT_020a0dd0 = uVar6;
  FUN_020329ec(0x510000);
  iVar2 = FUN_0214d37c();
  FUN_02023894(*(undefined4 *)(iVar2 + 4),0x510014,0);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x54) = 0x31305053;
  param_8 = 0x5f000;
  FUN_0214e6c0(iVar2,&param_8);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  uVar6 = _DAT_021d5154;
  DAT_020a0dd0 = (&DAT_020a16d0)[DAT_02093c08];
  DAT_02093c08 = DAT_02093c08 + 1;
  uVar5 = *(undefined4 *)(iVar1 + 4);
  iVar3 = thunk_FUN_0201a228(0x134,s_ALWidgetImp_h_0216b998,s_Create_0216bb50,0x3e);
  if (iVar3 != 0) {
    func_0x021af0f8(iVar3,uVar5,uVar6,ALWidgetBaseImp::CreateDrawFunc);
  }
  iVar3 = FUN_0214d37c();
  FUN_0214e688(iVar3,iVar2);
  (**(code **)(**(int **)(iVar3 + 4) + 0x24))();
  func_0x021b3f78(*(undefined4 *)(iVar3 + 4),0x510014);
  func_0x021b400c(*(undefined4 *)(iVar3 + 4),0x510016);
  func_0x021b3fc4(*(undefined4 *)(iVar3 + 4),0x510015);
  func_0x021b6760(*(undefined4 *)(iVar3 + 4),4,FUN_0214e328);
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0xaa) = 1;
  *(undefined1 *)(*(int *)(iVar3 + 4) + 0xb1) = 1;
  func_0x021b77a8(*(undefined4 *)(iVar3 + 4),0x10);
  param_5 = 0x5f000;
  FUN_0214e6c0(iVar3,&param_5);
  (**(code **)(**(int **)(iVar3 + 4) + 0x148))(*(int **)(iVar3 + 4),8);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),0x510014,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  piVar4 = *(int **)(*(int *)(iVar3 + 4) + 0x50);
  piVar4[3] = 0x100000;
  piVar4[4] = 0xc0000;
  if (*(byte *)(piVar4 + 9) != (*(byte *)(piVar4 + 9) | 1)) {
    (**(code **)(*piVar4 + 0x18))();
  }
  *(byte *)(piVar4 + 9) = *(byte *)(piVar4 + 9) | 0x31;
  param_6 = 0xffd0;
  uStack00000006 = 0xfff0;
  param_7 = 0;
  uStack0000000a = 0;
  piVar4 = (int *)thunk_FUN_0201a228(0x70,s_ALCollision_inl_0216b9b8,s_Create_0216bb48,0x1b2);
  if (piVar4 != (int *)0x0) {
    func_0x021b054c(piVar4,0,&DAT_02093c8c);
    *piVar4 = (int)&jus_Class_0216ba10::vftable;
    FUN_0214dad4(piVar4 + 0x1a,&param_6);
    *piVar4 = 0x21d1c58;
  }
  if (piVar4[6] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  FUN_02020e98(iVar3,piVar4[6]);
  (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
  unaff_r7[4] = iVar1;
  unaff_r7[5] = iVar3;
  func_0x021b65d8(*(undefined4 *)(iVar1 + 4));
  iVar1 = JGalaxyClearList::JGalaxyClearList_Create(DAT_020b4114,1);
  unaff_r7[0xb] = iVar1;
  iVar1 = func_0x021ba49c(1,0,1);
  unaff_r7[0xc] = iVar1;
  iVar1 = FUN_02075f08(unaff_r7 + 9,&param_10);
  unaff_r7[8] = iVar1;
  iVar1 = FUN_02075f60(unaff_r7 + 7);
  unaff_r7[6] = iVar1;
  FUN_02073ebc(2,1);
  func_0x021b65bc();
  return *unaff_r7;
}

