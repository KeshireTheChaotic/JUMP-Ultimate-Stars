
void FUN_02151a20(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(int *)(*(int *)(param_1 + 4) + 0x124) == 9) && (*(char *)(iVar1 + 0x159) != '\0')) {
    *(uint *)(iVar1 + 0x150) = *(uint *)(iVar1 + 0x150) | 0x14;
  }
  return;
}

