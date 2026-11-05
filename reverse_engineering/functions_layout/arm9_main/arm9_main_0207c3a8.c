
void FUN_0207c3a8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  while (iVar1 != 0) {
    FUN_02037c24(param_1 + 0x20,iVar1);
    FUN_020517fc(iVar1,0,0x20);
    FUN_02037b98(param_1 + 0x18,iVar1);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  return;
}

