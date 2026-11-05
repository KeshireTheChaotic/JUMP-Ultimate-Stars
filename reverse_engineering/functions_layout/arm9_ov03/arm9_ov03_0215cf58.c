
void FUN_0215cf58(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  switch(param_2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    goto LAB_0215cfcc;
  case 3:
LAB_0215cfcc:
    iVar1 = *(int *)(param_1 + (param_2 + -2) * 8 + 0x9c);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    }
    iVar1 = *(int *)(param_1 + (param_2 + -2) * 8 + 0xa0);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    }
  default:
    goto switchD_0215cf68_default;
  }
  iVar1 = *(int *)(param_1 + param_2 * 8 + 0x8c);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  }
  iVar1 = *(int *)(param_1 + param_2 * 8 + 0x90);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  }
switchD_0215cf68_default:
  piVar2 = *(int **)(*(int *)(param_1 + param_2 * 4 + 0x28) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  return;
}

