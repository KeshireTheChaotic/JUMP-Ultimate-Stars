
void FUN_0215ea60(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0216ad7c;
  if (DAT_0216ad7c == 0) {
    DAT_0216ad7c = param_1;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  while( true ) {
    if (iVar1 == param_1) {
      return;
    }
    if (*(int *)(iVar1 + 0x28) == 0) break;
    iVar1 = *(int *)(iVar1 + 0x28);
  }
  *(int *)(iVar1 + 0x28) = param_1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

