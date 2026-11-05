
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-GAME CommWrapDisconnect::CommWrapDisconnect_Create [source-string]
   __FILE__="CommWrapDisconnect.cpp" __FUNCTION__="CommWrapDisconnect_Create" lines=[107] passed to
   1 source-location call(s) */

int * CommWrapDisconnect::CommWrapDisconnect_Create
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x28,s_CommWrapDisconnect_cpp_020a0158,
                                     s_CommWrapDisconnect_Create_020a013c,0x6b,param_4);
  FUN_020517fc(piVar1,0,0x28);
  FUN_02051890(param_1,piVar1 + 3,0x14);
  piVar1[2] = piVar1[7];
  *(undefined1 *)(piVar1 + 8) = 0;
  *(undefined1 *)((int)piVar1 + 0x21) = 0;
  *(undefined1 *)((int)piVar1 + 0x22) = 0;
  *(undefined1 *)((int)piVar1 + 0x23) = 0;
  *(undefined1 *)(piVar1 + 9) = 0;
  *(undefined1 *)((int)piVar1 + 0x25) = 0;
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_02086a14 + 1);
  iVar2 = FUN_02026f94();
  piVar1[1] = iVar2;
  (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),piVar1);
  FUN_02028384(*(undefined4 *)(piVar1[1] + 4),FUN_02086a10 + 1);
  _DAT_0214be18 = piVar1;
  return piVar1;
}

