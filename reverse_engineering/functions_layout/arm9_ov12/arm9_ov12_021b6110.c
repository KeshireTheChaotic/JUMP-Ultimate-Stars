
void FUN_021b6110(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_021b5338(param_1,*(undefined4 *)(param_1 + 0xb4));
  piVar2 = *(int **)(iVar1 + 0xc);
  if (((piVar2 != (int *)0x0) && (*(int *)(param_1 + 0x10c) == 0)) &&
     (*(char *)(param_1 + 0x114) != '\0')) {
    uVar3 = (**(code **)(*piVar2 + 0x138))(piVar2,param_1);
    *(undefined4 *)(param_1 + 0x10c) = uVar3;
    if (*(char *)(param_1 + 0x116) == '\0') {
      uVar3 = 2;
    }
    else {
      uVar3 = 0;
    }
    *(undefined4 *)(*(int *)(param_1 + 0x10c) + 0xac) = uVar3;
    *(int *)(*(int *)(param_1 + 0x10c) + 0x98) = (int)*(short *)(param_1 + 0xce);
    (**(code **)(**(int **)(param_1 + 0x10c) + 0xd4))(*(int **)(param_1 + 0x10c),param_1);
    (**(code **)(**(int **)(param_1 + 0x10c) + 300))();
    (**(code **)(**(int **)(param_1 + 0x10c) + 0xd8))(*(int **)(param_1 + 0x10c),1);
  }
  return;
}

