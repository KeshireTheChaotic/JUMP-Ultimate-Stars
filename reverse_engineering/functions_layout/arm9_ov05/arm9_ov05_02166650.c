
void FUN_02166650(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_28 [3];
  
  FUN_021634b4(local_28,&DAT_02171478);
  piVar1 = *(int **)(*(int *)(param_1 + 0x20) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  iVar2 = 0;
  do {
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 0x14 + iVar3 * 4 + 0x9c) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    iVar3 = *(int *)(param_1 + iVar2 * 0x14 + 0xa4);
    FUN_02023894(*(undefined4 *)(iVar3 + 4),0xb20022,0);
    (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
    FUN_021639a8(iVar3,local_28);
    iVar2 = iVar2 + 1;
    local_28[0] = local_28[0] + 0x22000;
  } while (iVar2 < 6);
  return;
}

