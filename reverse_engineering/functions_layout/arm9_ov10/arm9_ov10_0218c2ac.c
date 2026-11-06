
int FUN_0218c2ac(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)*param_2;
  iVar1 = *(int *)*param_1;
  if (iVar1 == iVar2) {
    return (int)(((uint)*(ushort *)((int *)*param_1 + 1) - (uint)*(ushort *)((int *)*param_2 + 1)) *
                0x10000) >> 0x10;
  }
  return iVar1 - iVar2;
}

