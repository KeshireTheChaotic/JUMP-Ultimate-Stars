
void FUN_021601c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0215e980(*(undefined4 *)(iVar2 + 0xd0));
  if (iVar1 == 0) {
    return;
  }
  FUN_0215fec4(iVar2);
  return;
}

