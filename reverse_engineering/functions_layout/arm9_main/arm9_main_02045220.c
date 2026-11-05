
int FUN_02045220(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + (uint)*(ushort *)(iVar1 + param_2 * 2);
  }
  return iVar1;
}

