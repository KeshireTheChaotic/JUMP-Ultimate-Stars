
int FUN_02045664(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = iVar2 + param_2;
  *(uint *)(param_1 + 8) = uVar1;
  if (*(uint *)(param_1 + 0xc) < uVar1) {
    *(uint *)(param_1 + 0xc) = uVar1;
  }
  return iVar2;
}

