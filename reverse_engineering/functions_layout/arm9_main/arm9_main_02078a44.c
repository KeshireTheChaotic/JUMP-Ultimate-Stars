
void FUN_02078a44(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x570);
  if (iVar1 == 0) {
    return;
  }
  *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & uRam02078a6c;
  *(undefined4 *)(param_1 + 0x570) = 0;
  return;
}

