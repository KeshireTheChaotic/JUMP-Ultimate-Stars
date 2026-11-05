
void FUN_0215dffc(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  if (*(int *)(iVar3 + 0x94) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_021504fc();
  }
  sVar1 = *(short *)(iVar3 + 0xa2);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(int *)(iVar2 + 0xc) = (int)*(short *)(iVar3 + 0xa0) << 0xc;
  *(int *)(iVar2 + 0x10) = (int)sVar1 << 0xc;
  FUN_02150090(iVar2,1);
  iVar3 = func_0x021b712c(*(undefined4 *)(iVar4 + 4));
  if (iVar3 == 0) {
    FUN_0207342c(0x78,3);
    return;
  }
  return;
}

