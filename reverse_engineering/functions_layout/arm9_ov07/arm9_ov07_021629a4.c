
int FUN_021629a4(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_r3;
  undefined4 uStack_10;
  
  uStack_10 = in_r3;
  piVar1 = (int *)jus_AllocDebug(0x168,s_CommuMenuDataMemberEnt_cpp_0216a790,
                                 s_CommuMenuDataMemberEnt_Add_Core_0216a770,0x5f);
  FUN_020517fc(piVar1,0,0x168);
  *(undefined1 *)((int)piVar1 + 0xad) = 1;
  *(undefined1 *)(piVar1 + 0x2b) = 1;
  *(undefined1 *)((int)piVar1 + 0xae) = 1;
  if ((char)piVar1[0x2b] != '\0') {
    FUN_02158de0(2);
  }
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(_FUN_021629a4 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(*piVar1 + 4) + 0x18))(*(int **)(*piVar1 + 4),piVar1);
  iVar2 = FUN_02028920(0);
  piVar1[2] = iVar2;
  *(undefined1 *)(piVar1 + 3) = 0;
  *(undefined1 *)((int)piVar1 + 0xd) = 0;
  *(undefined1 *)((int)piVar1 + 0xf) = 1;
  *(undefined1 *)(piVar1 + 4) = 0;
  *(undefined1 *)((int)piVar1 + 0x11) = 1;
  piVar1[6] = 4;
  piVar1[7] = (int)(piVar1 + 0x10);
  iVar2 = 0;
  do {
    iVar4 = iVar2 + 1;
    *(undefined1 *)(piVar1 + iVar2 * 6 + 0x10) = 0;
    iVar2 = iVar4;
  } while (iVar4 < 4);
  if ((char)piVar1[0x2b] != '\0') {
    uVar3 = FUN_02071f08();
    FUN_02051890(uVar3,piVar1 + 0x11,0x14);
    *(undefined1 *)(piVar1 + 0x10) = 1;
  }
  iVar2 = FUN_021629a4;
  piVar1[8] = (int)piVar1;
  piVar1[0xb] = iVar2;
  piVar1[0xc] = (int)FUN_02162f50;
  piVar1[0xd] = (int)FUN_02162f78;
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_02162f94);
  uStack_10 = 0x80000;
  (**(code **)(**(int **)(piVar1[1] + 4) + 0xa0))(*(int **)(piVar1[1] + 4),&uStack_10);
  FUN_02027834(*(undefined4 *)(piVar1[1] + 4),8,FUN_021629dc);
  FUN_02158d7c(piVar1[1]);
  FUN_020882e0();
  FUN_02088330();
  iVar2 = CommuMenuCmnMemberEnt::CommuMenuCmnMemberEnt_Add(piVar1 + 3);
  piVar1[0x2a] = iVar2;
  return *piVar1;
}

