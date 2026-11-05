
bool FUN_02160be0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_02172960 + 0x118) + 0x56c);
  iVar1 = FUN_0200d12c(*(short *)(iVar1 + 0x18) * 100,(int)*(short *)(iVar1 + 0x16));
  return iVar1 <= (int)(uint)*(ushort *)(param_2 + 2);
}

