
void FUN_02061504(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    if (iVar2 == 0) {
      *(undefined4 *)(param_2 + 8) = 0;
      *param_1 = param_2;
      return;
    }
    for (iVar1 = *(int *)(iVar2 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      iVar2 = iVar1;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(iVar2 + 8) = param_2;
  }
  return;
}

