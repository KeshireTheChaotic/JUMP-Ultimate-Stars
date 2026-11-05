
void FUN_0215353c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0214f1bc(*(undefined4 *)(iVar3 + 0x28),0);
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar3 + 0x3c);
    iVar1 = FUN_0214f898(iVar3,0x31305053);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_02023894(*(undefined4 *)(iVar1 + 4),0x810001,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    piVar2 = *(int **)(iVar3 + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21535a9);
  }
  return;
}

