
/* JUS-GAME CommuMenuWLLeaderState::CommuMenuWLLeaderState_Create [source-string]
   __FILE__="CommuMenuWLLeaderState.cpp" __FUNCTION__="CommuMenuWLLeaderState_Create" lines=[45]
   passed to 1 source-location call(s) */

int * CommuMenuWLLeaderState::CommuMenuWLLeaderState_Create(void)

{
  int *piVar1;
  undefined4 in_r3;
  int iVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = in_r3;
  piVar1 = (int *)jus_AllocDebug(0x188,s_CommuMenuWLLeaderState_cpp_0216a198,
                                 s_CommuMenuWLLeaderState_Create_0216a178,0x2d);
  FUN_020517fc(piVar1,0,0x188);
  *(undefined1 *)(piVar1 + 1) = 1;
  *(undefined1 *)((int)piVar1 + 5) = 1;
  *(undefined1 *)((int)piVar1 + 6) = 0;
  piVar1[2] = 0xc;
  piVar1[3] = (int)(piVar1 + 0xe);
  for (iVar2 = 0; iVar2 < piVar1[2]; iVar2 = iVar2 + 1) {
    *(undefined1 *)(piVar1 + iVar2 * 7 + 0xe) = 0;
  }
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_02159af4);
  local_10 = 0x80000;
  (**(code **)(**(int **)(*piVar1 + 4) + 0xa0))(*(int **)(*piVar1 + 4),&local_10);
  return piVar1;
}

