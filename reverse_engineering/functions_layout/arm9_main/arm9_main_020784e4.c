
bool FUN_020784e4(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x56c);
  sVar1 = FUN_0200d12c(*(short *)(iVar2 + 0x16) * param_2,100);
  return *(short *)(iVar2 + 0x18) <= sVar1;
}

