
void FUN_0217bb30(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  if (param_2 == 0) {
    *(uint *)(iVar1 + 0xa8) = *(uint *)(iVar1 + 0xa8) & 0xffffffbf;
  }
  else {
    *(uint *)(iVar1 + 0xa8) = *(uint *)(iVar1 + 0xa8) | 0x40;
  }
  return;
}

