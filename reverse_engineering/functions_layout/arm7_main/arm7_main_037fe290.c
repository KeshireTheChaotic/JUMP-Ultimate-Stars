
void FUN_037fe290(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_03808484;
  while( true ) {
    if (iVar2 == 0) {
      FUN_037fe24c();
      return;
    }
    if ((*(uint *)(param_1 + 0xc) <= *(uint *)(iVar2 + 0xc)) &&
       ((*(uint *)(iVar2 + 0xc) != *(uint *)(param_1 + 0xc) ||
        (*(short *)(param_1 + 0x10) < *(short *)(iVar2 + 0x10))))) break;
    iVar2 = *(int *)(iVar2 + 0x18);
  }
  iVar1 = *(int *)(iVar2 + 0x14);
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + 0x18) = iVar2;
  *(int *)(iVar2 + 0x14) = param_1;
  if (iVar1 == 0) {
    DAT_03808484 = param_1;
    FUN_037fe074();
    return;
  }
  *(int *)(iVar1 + 0x18) = param_1;
  return;
}

