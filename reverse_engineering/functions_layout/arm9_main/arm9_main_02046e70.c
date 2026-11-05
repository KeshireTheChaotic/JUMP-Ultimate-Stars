
void FUN_02046e70(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x8e4);
  if (*(int *)(*(int *)(*(int *)(param_1 + 100) + 0x34) + 0x8e4) == iVar2) {
    return;
  }
  if (*(int **)(param_1 + 100) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 100) + 4))();
  }
  if (iVar2 == 1) {
    iVar2 = jus_AllocDebug(0xb0);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = jus_Class_0209b4f0::jus_Class_0209b4f0(iVar2,param_1);
    }
    *(undefined4 *)(param_1 + 100) = uVar1;
    return;
  }
  if (iVar2 == 3) {
    iVar2 = jus_AllocDebug(0xb0);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = jus_Class_0209b5d4::jus_Class_0209b5d4(iVar2,param_1);
    }
    *(undefined4 *)(param_1 + 100) = uVar1;
    return;
  }
  if (iVar2 == 2) {
    iVar2 = jus_AllocDebug(0xb0);
    uVar1 = 0;
    if (iVar2 != 0) {
      uVar1 = jus_Class_0209b6b8::jus_Class_0209b6b8(iVar2,param_1);
    }
    *(undefined4 *)(param_1 + 100) = uVar1;
    return;
  }
  iVar2 = jus_AllocDebug(0xb0);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = jus_Class_0209b79c::jus_Class_0209b79c(iVar2,param_1);
  }
  *(undefined4 *)(param_1 + 100) = uVar1;
  return;
}

