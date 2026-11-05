
undefined4 FUN_021c2ae8(int param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_2;
  iVar2 = *param_4;
  if (iVar3 < 2) {
    *param_2 = 0;
    return 0;
  }
  iVar1 = (iVar3 + -1) * 2;
  if (*(short *)(iVar2 + (uint)*(ushort *)(param_1 + iVar1) * 4) != -1) {
    if (*(short *)(iVar2 + (uint)*(ushort *)(param_1 + (iVar3 + -2) * 2) * 4) == -1) {
      iVar3 = iVar3 + -1;
    }
    else if (iVar3 < param_3) {
      *(undefined2 *)(param_1 + iVar3 * 2) = 0xffff;
      iVar3 = iVar3 + 1;
    }
    else if ((iVar3 < 3) ||
            (*(short *)(iVar2 + (uint)*(ushort *)(param_1 + (iVar3 + -3) * 2) * 4) == -1)) {
      iVar3 = iVar3 + -2;
    }
    else {
      *(undefined2 *)(param_1 + iVar1) = 0xffff;
    }
  }
  *param_2 = iVar3;
  return 1;
}

