
uint FUN_02019bb8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  if (piVar2[1] == 0) {
    return (uint)*(ushort *)(param_1 + 0x2e);
  }
  iVar1 = (**(code **)(*piVar2 + 8))(piVar2,param_2,0,*(code **)(*piVar2 + 8),param_4);
  return (int)*(short *)(iVar1 + 6);
}

