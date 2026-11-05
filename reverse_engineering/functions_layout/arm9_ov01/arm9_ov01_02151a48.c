
void FUN_02151a48(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(iVar2 + 0x10);
  if (((*(int *)(iVar2 + 0x124) == 9) && ((*(uint *)(iVar2 + 0x90) & 0x10) == 0x10)) &&
     (*(char *)(iVar1 + 0x159) != '\0')) {
    *(uint *)(iVar1 + 0x150) = *(uint *)(iVar1 + 0x150) | 4;
  }
  return;
}

