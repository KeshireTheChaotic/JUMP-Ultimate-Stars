
void FUN_0215bedc(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    if (*(char *)(*(int *)(*(int *)(param_1 + 0x74) + 8) + iVar1 * 0x1c + 2) != '\0') {
      FUN_0215bfd0(param_1,iVar1);
    }
  }
  return;
}

