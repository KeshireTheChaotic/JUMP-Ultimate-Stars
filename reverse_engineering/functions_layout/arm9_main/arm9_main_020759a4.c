
bool FUN_020759a4(int param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4) + param_2 * 8;
  if (*(short *)(*(int *)(param_1 + 4) + param_2 * 8) != 0) {
    return false;
  }
  iVar1 = FUN_020759e8(*(undefined2 *)(iVar2 + 4));
  if (iVar1 != 1) {
    *param_3 = (uint)*(ushort *)(iVar2 + 4);
  }
  return iVar1 != 1;
}

