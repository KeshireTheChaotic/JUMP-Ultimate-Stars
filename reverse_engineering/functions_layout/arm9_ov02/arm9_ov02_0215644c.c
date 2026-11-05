
void FUN_0215644c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,5);
  (**(code **)(**(int **)(piVar2[1] + 4) + 0x148))(*(int **)(piVar2[1] + 4),0x20);
  *(undefined1 *)(*piVar2 + 0x59) = 0;
  if (*(char *)((int)piVar2 + 0x26) == '\0') {
    iVar1 = FUN_0203b3e4();
    FUN_0214ecc0(*(undefined4 *)(iVar1 + 0x88),0,0);
    return;
  }
  iVar1 = FUN_0203b3f4();
  FUN_0214ecc0(*(undefined4 *)(iVar1 + 0x88),0,0);
  return;
}

