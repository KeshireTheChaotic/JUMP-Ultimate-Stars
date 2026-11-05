
void FUN_02151a7c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x134) + 4) + 0x194))();
  if (*(char *)(iVar3 + 0x158) != iVar2) {
    if (*(char *)(iVar3 + 0x159) != '\0') {
      *(uint *)(iVar3 + 0x150) = *(uint *)(iVar3 + 0x150) | 0x7c;
    }
    uVar1 = (**(code **)(**(int **)(*(int *)(iVar3 + 0x134) + 4) + 0x194))();
    *(undefined1 *)(iVar3 + 0x158) = uVar1;
  }
  return;
}

