
/* JUS-GAME CommuMenuDataLeaderSel::CommuMenuDataLeaderSel_Add [source-string]
   __FILE__="CommuMenuDataLeaderSel.cpp" __FUNCTION__="CommuMenuDataLeaderSel_Add" lines=[84] passed
   to 1 source-location call(s) */

int CommuMenuDataLeaderSel::CommuMenuDataLeaderSel_Add(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  piVar1 = (int *)jus_AllocDebug(0x4c,s_CommuMenuDataLeaderSel_cpp_0216a754,
                                 s_CommuMenuDataLeaderSel_Add_0216a738,0x54);
  FUN_020517fc(piVar1,0,0x4c);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    piVar1[iVar2 + 2] = -1;
    iVar2 = iVar3;
  } while (iVar3 < 0xc);
  CommuMenuWrlsEntryObj::CommuMenuWrlsEntryObj_Init();
  FUN_02158e40(2);
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  iVar2 = CommuMenuWLLeaderState::CommuMenuWLLeaderState_Create();
  piVar1[0x11] = iVar2;
  iVar2 = FUN_02159aec();
  piVar1[0x12] = iVar2;
  *(int **)(iVar2 + 0x10) = piVar1;
  *(undefined **)(piVar1[0x12] + 0x14) = &DAT_02162730;
  *(code **)(piVar1[0x12] + 0x18) = FUN_02162734;
  *(undefined1 **)(piVar1[0x12] + 0x1c) = &LAB_02162784;
  *(code **)(piVar1[0x12] + 0x20) = FUN_0216278c;
  *(undefined1 **)(piVar1[0x12] + 0x24) = &LAB_021627d0;
  *(undefined1 *)piVar1[0x12] = 0;
  *(undefined1 *)(piVar1[0x12] + 1) = 0;
  *(undefined1 *)(piVar1[0x12] + 2) = 1;
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),&LAB_0216266c);
  local_10 = 0x80000;
  (**(code **)(**(int **)(piVar1[1] + 4) + 0xa0))(*(int **)(piVar1[1] + 4),&local_10);
  iVar2 = FUN_0215656c(piVar1[0x12]);
  piVar1[0x10] = iVar2;
  return *piVar1;
}

