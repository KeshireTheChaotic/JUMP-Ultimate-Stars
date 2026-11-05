
void FUN_021978f4(undefined2 *param_1,ushort *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  
  iVar1 = thunk_FUN_02197c28(param_2,param_4);
  uVar4 = 0;
  iVar2 = 0;
  if (0 < iVar1) {
    puVar3 = param_1;
    do {
      uVar4 = uVar4 + (uint)*param_2 * param_3;
      *puVar3 = (short)uVar4;
      uVar4 = uVar4 >> 0x10;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  iVar1 = iVar2;
  if (iVar2 < param_4) {
    iVar1 = iVar2 + 1;
    param_1[iVar2] = (short)uVar4;
  }
  FUN_020517fc(param_1 + iVar1,0,(param_4 - iVar1) * 2);
  return;
}

