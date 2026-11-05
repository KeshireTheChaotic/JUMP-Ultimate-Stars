
void FUN_0215891c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = FUN_02158900(*(undefined4 *)(iVar3 + 0x98));
  if ((iVar2 == 0) && (*(char *)(iVar3 + 0xde) != '\0')) {
    *(undefined1 *)(iVar3 + 0xde) = 0;
  }
  iVar2 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x30) + 4) + 0x19c))();
  if (*(char *)(iVar3 + 0xdc) == iVar2) {
    return;
  }
  uVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x30) + 4) + 0x19c))();
  *(undefined1 *)(iVar3 + 0xdc) = uVar1;
  *(undefined1 *)(iVar3 + 0xde) = 1;
  return;
}

