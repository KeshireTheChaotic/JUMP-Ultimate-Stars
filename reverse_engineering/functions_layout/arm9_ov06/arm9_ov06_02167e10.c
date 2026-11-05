
int FUN_02167e10(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,ushort param_6)

{
  int *piVar1;
  int iVar2;
  int local_18;
  
  local_18 = param_4;
  piVar1 = (int *)FUN_02032a4c(*(undefined4 *)(param_1 + 4));
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  iVar2 = piVar1[6];
  FUN_02167a10(iVar2,param_2);
  piVar1 = *(int **)(*(int *)(iVar2 + 4) + 0x50);
  piVar1[3] = param_3 << 0xc;
  piVar1[4] = param_4 << 0xc;
  if (*(byte *)(piVar1 + 9) != (*(byte *)(piVar1 + 9) | 1)) {
    (**(code **)(*piVar1 + 0x18))();
  }
  *(byte *)(piVar1 + 9) = *(byte *)(piVar1 + 9) | 0x31;
  local_18 = (uint)param_6 << 0xc;
  piVar1 = *(int **)(*(int *)(iVar2 + 4) + 100);
  (**(code **)(*piVar1 + 0x10))(piVar1,&local_18);
  (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  piVar1 = *(int **)(iVar2 + 4);
  if (param_5 == 0) {
    (**(code **)(*piVar1 + 0xd4))(piVar1,0);
  }
  else {
    (**(code **)(*piVar1 + 0xd4))(piVar1,*(undefined4 *)(param_5 + 4));
  }
  return iVar2;
}

