
/* JUS-GAME JQuizMainBlackBelt::JQuizMainBlackBeltClass_Create [source-string]
   __FILE__="JQuizMainBlackBelt.cpp" __FUNCTION__="JQuizMainBlackBeltClass_Create" lines=[50] passed
   to 1 source-location call(s) */

int * JQuizMainBlackBelt::JQuizMainBlackBeltClass_Create(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  piVar1 = (int *)thunk_FUN_0201a228(0x10,s_JQuizMainBlackBelt_cpp_02161004,
                                     s_JQuizMainBlackBeltClass_Create_02160fe4,0x32);
  FUN_020517fc(piVar1,0,0x10);
  iVar2 = ALWidgetBaseImp::Create(piVar1,param_1);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
  piVar1[1] = iVar2;
  local_14 = 0x80;
  local_10 = 0x60;
  iVar3 = FUN_0203b404();
  iVar2 = FUN_0214ee60(iVar2,*(undefined4 *)(iVar3 + 0x88),0x810000,0x34,0x70,&local_14);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  piVar1[2] = iVar2;
  iVar2 = FUN_02026f94();
  *piVar1 = iVar2;
  local_18 = 0x80000;
  (**(code **)(**(int **)(iVar2 + 4) + 0xa0))(*(int **)(iVar2 + 4),&local_18);
  FUN_02028384(*(undefined4 *)(*piVar1 + 4),FUN_02155a88);
  (**(code **)(**(int **)(*piVar1 + 4) + 0x24))(*(int **)(*piVar1 + 4),piVar1);
  return piVar1;
}

