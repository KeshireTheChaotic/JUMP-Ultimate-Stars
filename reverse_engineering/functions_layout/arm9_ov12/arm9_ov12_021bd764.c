
void FUN_021bd764(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 4;
    FUN_021bd794(*(undefined4 *)(iVar3 + 0x24));
    piVar1 = *(int **)(*(int *)(iVar3 + 0x24) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  *(undefined1 *)(param_1 + 0xa1) = 0;
  return;
}

