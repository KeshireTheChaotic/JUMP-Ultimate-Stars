
void FUN_02086310(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 4) +
          (uint)*(byte *)(*(int *)(param_1 + 0x30) + 0x16) * 0x10;
  iVar1 = FUN_020862e8();
  if (iVar1 == 0) {
    FUN_02085a04(param_1,0,0);
    return;
  }
  FUN_02085a04(param_1,(int)*(short *)(iVar2 + 8),(int)*(short *)(iVar2 + 10));
  FUN_020860f8(param_1);
  return;
}

