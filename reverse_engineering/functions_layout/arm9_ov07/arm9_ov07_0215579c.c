
/* JUS-GAME CommuMenuWiFiFrMatch::CommuMenuWiFiFrMatch_Add [source-string]
   __FILE__="CommuMenuWiFiFrMatch.cpp" __FUNCTION__="CommuMenuWiFiFrMatch_Add" lines=[128] passed to
   1 source-location call(s) */

int CommuMenuWiFiFrMatch::CommuMenuWiFiFrMatch_Add(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_r3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  piVar1 = (int *)thunk_FUN_0201a228(0x5f8,s_CommuMenuWiFiFrMatch_cpp_02169d98,
                                     s_CommuMenuWiFiFrMatch_Add_02169d7c,0x80);
  FUN_020517fc(piVar1,0,0x5f8);
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  (**(code **)(**(int **)(*piVar1 + 4) + 0x18))(*(int **)(*piVar1 + 4),piVar1);
  CommuMenuCommon::CMMenuCmn_PackArc_InitLoad(*piVar1);
  func_0x021b65bc();
  iVar2 = FUN_02028920(0);
  piVar1[2] = iVar2;
  func_0x0219becc();
  func_0x0219bf0c();
  func_0x0219adf4(4);
  func_0x0219ae0c(4);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    *(undefined1 *)((int)piVar1 + iVar2 + 0x5b8) = 0xff;
    iVar2 = iVar3;
  } while (iVar3 < 0x32);
  piVar1[7] = (int)piVar1;
  piVar1[10] = (int)&LAB_02155970;
  piVar1[0xb] = (int)&LAB_021559c0;
  piVar1[0xc] = (int)&LAB_021559e4;
  piVar1[0xd] = (int)&LAB_021559f0;
  piVar1[0xe] = (int)&LAB_02155a08;
  piVar1[0xf] = (int)FUN_02155988;
  *(undefined1 *)(piVar1 + 3) = 0;
  *(undefined1 *)((int)piVar1 + 0xd) = 1;
  *(undefined1 *)((int)piVar1 + 0xe) = 0;
  piVar1[4] = 0x32;
  piVar1[5] = (int)(piVar1 + 0x10);
  for (iVar2 = 0; iVar2 < piVar1[4]; iVar2 = iVar2 + 1) {
    *(undefined1 *)(piVar1 + iVar2 * 7 + 0x10) = 0;
  }
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_02155a14);
  local_10 = 0x80000;
  (**(code **)(**(int **)(piVar1[1] + 4) + 0xa0))(*(int **)(piVar1[1] + 4),&local_10);
  iVar2 = FUN_0215656c(piVar1 + 3);
  piVar1[0x17b] = iVar2;
  return *piVar1;
}

