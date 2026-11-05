
/* JUS-GAME CommuMenuWLCmnMemEnt::CommuMenuWLCmnMemEnt_Add [source-string]
   __FILE__="CommuMenuWLCmnMemEnt.cpp" __FUNCTION__="CommuMenuWLCmnMemEnt_Add" lines=[89] passed to
   1 source-location call(s) */

int CommuMenuWLCmnMemEnt::CommuMenuWLCmnMemEnt_Add
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_10;
  
  local_10 = param_4;
  piVar1 = (int *)jus_AllocDebug(0xc0,s_CommuMenuWLCmnMemEnt_cpp_0216a1d0,
                                 s_CommuMenuWLCmnMemEnt_Add_0216a1b4,0x59);
  FUN_020517fc(piVar1,0,0xc0);
  FUN_02051890(param_1,piVar1 + 0x2c,0x10);
  if ((char)piVar1[0x2c] != '\0') {
    FUN_02158de0(piVar1[0x2d]);
  }
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(*piVar1 + 4) + 0x18))(*(int **)(*piVar1 + 4),piVar1);
  *(undefined1 *)((int)piVar1 + 0xa5) = 1;
  CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(*piVar1);
  func_0x021b65bc();
  iVar2 = FUN_02028920(0);
  piVar1[2] = iVar2;
  *(undefined1 *)(piVar1 + 3) = *(undefined1 *)((int)piVar1 + 0xb1);
  *(undefined1 *)((int)piVar1 + 0xd) = 0;
  *(undefined1 *)((int)piVar1 + 0xf) = 0;
  *(undefined1 *)(piVar1 + 4) = 0;
  *(char *)((int)piVar1 + 0x11) = (char)piVar1[0x2c];
  piVar1[6] = 4;
  piVar1[7] = (int)(piVar1 + 0x10);
  iVar2 = 0;
  do {
    iVar4 = iVar2 + 1;
    *(undefined1 *)(piVar1 + iVar2 * 6 + 0x10) = 0;
    iVar2 = iVar4;
  } while (iVar4 < 4);
  if ((char)piVar1[0x2c] != '\0') {
    uVar3 = FUN_02071f08();
    FUN_02051890(uVar3,piVar1 + 0x11,0x14);
    *(undefined1 *)(piVar1 + 0x10) = 1;
  }
  piVar1[8] = (int)piVar1;
  piVar1[0xb] = (int)FUN_02159d98;
  piVar1[0xc] = (int)&LAB_02159d64;
  piVar1[0xd] = (int)&LAB_02159d84;
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),&LAB_02159fa0);
  local_10 = 0x80000;
  (**(code **)(**(int **)(piVar1[1] + 4) + 0xa0))(*(int **)(piVar1[1] + 4),&local_10);
  FUN_02088330();
  FUN_020882e0();
  iVar2 = CommuMenuCmnMemberEnt::CommuMenuCmnMemberEnt_Add(piVar1 + 3);
  piVar1[0x2a] = iVar2;
  return *piVar1;
}

