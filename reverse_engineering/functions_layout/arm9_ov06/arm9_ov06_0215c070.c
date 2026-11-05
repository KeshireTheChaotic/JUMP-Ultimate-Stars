
void FUN_0215c070(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  uVar1 = *(uint *)(iVar2 + 0x34);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfffffdff;
  }
  else {
    uVar1 = uVar1 | 0x200;
  }
  *(uint *)(iVar2 + 0x34) = uVar1;
  return;
}

