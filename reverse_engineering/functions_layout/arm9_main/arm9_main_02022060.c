
void FUN_02022060(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x50);
  if (param_2 != 0) {
    iVar1 = (**(code **)(*piVar3 + 100))();
    if ((iVar1 == 0) || (iVar1 = (**(code **)(*piVar3 + 100))(), iVar1 == 1)) {
      iVar1 = jus_AllocDebug(0x6c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = jus_Class_020966d0::jus_Class_020966d0(iVar1,piVar3,0);
      }
      (**(code **)(*piVar3 + 0xc))();
      *(undefined4 *)(param_1 + 0x50) = uVar2;
    }
    piVar3 = *(int **)(param_2 + 0x50);
    iVar1 = (**(code **)(*piVar3 + 100))();
    if ((iVar1 == 0) || (iVar1 = (**(code **)(*piVar3 + 100))(), iVar1 == 1)) {
      iVar1 = jus_AllocDebug(0x6c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = jus_Class_020966d0::jus_Class_020966d0(iVar1,piVar3,0);
      }
      (**(code **)(*piVar3 + 0xc))();
      *(undefined4 *)(param_2 + 0x50) = uVar2;
    }
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == param_2) {
    return;
  }
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x48);
    if (iVar1 == param_1) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        *(undefined4 *)(*(int *)(iVar1 + 0x44) + 0x48) = 0;
      }
      else {
        *(undefined4 *)(*(int *)(iVar1 + 0x44) + 0x48) = *(undefined4 *)(iVar1 + 0x4c);
      }
    }
    else {
      while (*(int *)(iVar1 + 0x4c) != param_1) {
        iVar1 = *(int *)(iVar1 + 0x4c);
      }
      *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    }
  }
  *(int *)(param_1 + 0x44) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    (**(code **)(**(int **)(param_1 + 0x50) + 0x54))();
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x48);
    *(int *)(param_2 + 0x48) = param_1;
    (**(code **)(**(int **)(param_1 + 0x50) + 0x54))
              (*(int **)(param_1 + 0x50),*(undefined4 *)(param_2 + 0x50));
  }
  FUN_02014cc4(*(undefined4 *)(param_1 + 100));
  return;
}

