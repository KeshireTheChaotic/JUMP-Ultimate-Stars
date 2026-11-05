
void FUN_02036064(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))();
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x40))(*(int **)(param_1 + 0x1c),param_2,param_3);
    return;
  }
  iVar1 = jus_AllocDebug(0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_TagNRML::jus_TagNRML(iVar1,param_2,param_3,0);
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  return;
}

