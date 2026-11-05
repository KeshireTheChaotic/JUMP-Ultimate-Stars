
void FUN_0215f6e4(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
    FUN_0206c7fc(param_2,*(int *)(iVar2 + 0xc) >> 8,*(int *)(iVar2 + 0x10) >> 8,0);
    return;
  }
  uVar1 = FUN_0206c7fc(param_2,0,0,0);
  FUN_021544c8(uVar1,**(undefined4 **)(param_1 + 0x1a0));
  return;
}

