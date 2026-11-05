
/* JUS-GAME Ending::Ending_Add [source-string] __FILE__="Ending.cpp" __FUNCTION__="Ending_Add"
   lines=[57] passed to 1 source-location call(s) */

int Ending::Ending_Add(void)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  piVar1 = (int *)thunk_FUN_0201a228(0x20,&DAT_02160cc8,&DAT_02160cbc,0x39);
  FUN_020517fc(piVar1,0,0x20);
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  local_10 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_10);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_0214e9a8);
  (**(code **)(**(int **)(piVar1[1] + 4) + 0x24))(*(int **)(piVar1[1] + 4),piVar1);
  iVar2 = FUN_020310f4();
  *piVar1 = iVar2;
  DAT_02093c04 = DAT_02093c04 + -1;
  *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4) = DAT_020a0e80;
  FUN_020314a0(*(undefined4 *)(iVar2 + 4));
  *(undefined1 *)((int)piVar1 + 0x19) = 0;
  *(undefined1 *)((int)piVar1 + 0x1a) = 0;
  iVar2 = FUN_020101f4(s_ending_ending_aar_02160cd4);
  piVar1[2] = iVar2;
  iVar2 = EndingPiece::EndingPiece_Create(piVar1);
  piVar1[3] = iVar2;
  iVar2 = EndingStaffRoll::EndingStaffRoll_Create(piVar1);
  piVar1[4] = iVar2;
  iVar2 = EndingCopyright::EndingCopyright_Create(piVar1);
  piVar1[5] = iVar2;
  FUN_02041f7c(DAT_020a0f64,1);
  FUN_020734e0(1);
  FUN_0207361c(1,0);
  FUN_0215b8b8(piVar1[3]);
  FUN_02073ebc(2,1);
  return *piVar1;
}

