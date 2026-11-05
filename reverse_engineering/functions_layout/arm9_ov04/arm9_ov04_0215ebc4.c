
void FUN_0215ebc4(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + iVar3 * 4 + 4) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    iVar2 = param_1 + iVar3;
    iVar3 = iVar3 + 1;
    *(undefined1 *)(iVar2 + 0x14) = 0xff;
  } while (iVar3 < 4);
  *(undefined1 *)(param_1 + 0x1c) = 0;
  return;
}

