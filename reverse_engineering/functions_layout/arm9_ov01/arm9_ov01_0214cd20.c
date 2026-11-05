
/* JUS-GAME JGalaxyStageInfo::JGalaxyStageInfo_Add [source-string] __FILE__="JGalaxyStageInfo.cpp"
   __FUNCTION__="JGalaxyStageInfo_Add" lines=[130] passed to 1 source-location call(s) */

int JGalaxyStageInfo::JGalaxyStageInfo_Add(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int local_2c [3];
  
  piVar1 = (int *)thunk_FUN_0201a228(0x40,FUN_0216baf4,s_JGalaxyStageInfo_Add_0216b9f0,0x82);
  FUN_020517fc(piVar1,0,0x40);
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_0214d184);
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  piVar1[0xd] = DAT_020b4114;
  FUN_02043264(0);
  iVar2 = FUN_020101f4(s_common_button_aar_0216bb0c,0);
  piVar1[3] = iVar2;
  iVar2 = FUN_020101f4(s_jgalaxy_jgalaxy_aar_0216bb20,0);
  piVar1[4] = iVar2;
  piVar3 = (int *)FUN_02033410(s_jgalaxy_jgalaxy_bin_0216bb34,0,0);
  if (piVar3[7] == 0) {
    (**(code **)(*piVar3 + 0x10))();
  }
  iVar2 = piVar3[7];
  piVar1[2] = iVar2;
  piVar3 = *(int **)(iVar2 + 4);
  iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,0);
  iVar4 = (**(code **)(**(int **)(piVar1[2] + 4) + 0x2c))
                    (*(int **)(piVar1[2] + 4),*(undefined4 *)(iVar2 + 0x14));
  iVar5 = (**(code **)(**(int **)(piVar1[2] + 4) + 0x2c))
                    (*(int **)(piVar1[2] + 4),*(undefined4 *)(iVar2 + 0x10));
  iVar2 = (**(code **)(**(int **)(piVar1[2] + 4) + 0x2c))
                    (*(int **)(piVar1[2] + 4),*(undefined4 *)(iVar2 + 0xc));
  piVar1[0xe] = (uint)*(byte *)((uint)*(byte *)(iVar5 + (uint)*(byte *)(piVar1[0xd] * 0x88 + iVar4 +
                                                                       10) * 0x40 + 0x2c) * 0x48 +
                                iVar2 + 0x42);
  iVar4 = piVar1[0xd] * 0x88 + iVar4;
  piVar1[5] = iVar4;
  if ((*(byte *)(iVar4 + 0xc) & 4) == 0) {
    iVar2 = MissionData::MissionData_Create(1);
  }
  else {
    iVar2 = MissionData::MissionData_Create(0);
  }
  piVar1[6] = iVar2;
  iVar2 = ALWidgetBaseImp::Create(piVar1,0);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0xb8) = 0;
  FUN_0214d354();
  iVar4 = 0;
  do {
    iVar5 = FUN_0203b3f4();
    iVar5 = ALWidgetImp::Create(piVar1,&DAT_0216ba7c + iVar4 * 0x28,iVar2,0x20,
                                *(undefined4 *)(iVar5 + 0x88));
    local_2c[iVar4] = iVar5;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
  piVar1[9] = iVar2;
  iVar2 = ALWidgetBaseImp::Create(piVar1,0);
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0xb8) = 0;
  FUN_0214d354();
  iVar4 = FUN_0203b3e4();
  iVar4 = ALWidgetImp::Create(piVar1,&DAT_0216bacc,iVar2,0x20,*(undefined4 *)(iVar4 + 0x88));
  func_0x021b6760(*(undefined4 *)(iVar4 + 4),4,FUN_0214d594);
  func_0x021b3f78(*(undefined4 *)(iVar4 + 4),0x510008);
  func_0x021b3fc4(*(undefined4 *)(iVar4 + 4),0x510009);
  func_0x021b3fb0(*(undefined4 *)(iVar4 + 4),0x510008);
  piVar1[0xc] = local_2c[2];
  piVar1[0xb] = iVar4;
  if ((*(byte *)(piVar1[5] + 0xc) & 8) != 0) {
    (**(code **)(**(int **)(piVar1[0xc] + 4) + 0x148))(*(int **)(piVar1[0xc] + 4),8);
    func_0x021b65d8(*(undefined4 *)(piVar1[0xc] + 4));
    (**(code **)(**(int **)(piVar1[0xc] + 4) + 0xd8))(*(int **)(piVar1[0xc] + 4),0);
    iVar4 = (**(code **)(**(int **)(piVar1[0xc] + 4) + 0xb0))(*(int **)(piVar1[0xc] + 4),0x31305053)
    ;
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_0214d37c();
    }
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
  }
  func_0x021b65d8(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  piVar1[10] = iVar2;
  iVar2 = JGalaxyClearList::JGalaxyClearList_Create(piVar1[0xd],0);
  piVar1[7] = iVar2;
  uVar6 = (uint)*(byte *)(piVar1[5] + 8);
  if ((*(byte *)(piVar1[5] + 0xc) & 8) == 0) {
    iVar2 = func_0x021c2b58(*(undefined1 *)(uVar6 * 0xa4 + *(int *)(piVar1[6] + 4) + 0x75),0,1);
    piVar1[8] = iVar2;
    func_0x021c3718(iVar2,piVar1[6],*(undefined1 *)(piVar1[5] + 8));
  }
  else {
    iVar2 = func_0x021c2b58(*(undefined1 *)(uVar6 * 0xa4 + *(int *)(piVar1[6] + 4) + 0x75),3,1);
    piVar1[8] = iVar2;
    func_0x021c3718(iVar2,piVar1[6],*(undefined1 *)(piVar1[5] + 8));
  }
  FUN_020734e0((&DAT_02169ce0)[piVar1[0xe]]);
  FUN_0207361c((&DAT_02169ce0)[piVar1[0xe]],0);
  FUN_02073ebc(2,1);
  func_0x021b65bc();
  return *piVar1;
}

