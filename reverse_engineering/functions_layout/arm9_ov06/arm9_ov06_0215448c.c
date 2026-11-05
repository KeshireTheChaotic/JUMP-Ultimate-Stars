
void FUN_0215448c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1 * 4;
    (**(code **)(**(int **)(iVar2 + 0x78) + 8))();
    (**(code **)(**(int **)(iVar2 + 0x80) + 8))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  (**(code **)(**(int **)(param_1 + 0x10) + 8))();
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  FUN_0201b244(param_1);
  return;
}

