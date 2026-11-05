
void FUN_0215be88(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(char *)(iVar2 + 0x71) == '\0') && (iVar1 = FUN_0215bcac(iVar2), iVar1 != 0)) {
    FUN_0215bcd4(iVar2);
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x215be6d);
  }
  piVar3 = *(int **)(param_1 + 4);
  (**(code **)(*piVar3 + 400))();
  (**(code **)(*piVar3 + 0x178))();
  *(undefined1 *)(piVar3[0x19] + 0x40) = 1;
  return;
}

