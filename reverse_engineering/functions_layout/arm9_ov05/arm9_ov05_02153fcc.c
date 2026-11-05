
void FUN_02153fcc(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_02153ea0(param_1,10,5);
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x250) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return;
}

