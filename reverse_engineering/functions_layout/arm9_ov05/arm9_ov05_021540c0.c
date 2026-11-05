
void FUN_021540c0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < *(char *)(param_1 + 0x4a7); iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x278) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  return;
}

