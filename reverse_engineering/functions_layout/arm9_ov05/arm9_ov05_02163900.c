
void FUN_02163900(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  int local_1c;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x94) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_021504fc();
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x9c) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_021504fc();
  }
  local_20 = (int)*(short *)(iVar1 + 0xa2) << 0xc;
  local_1c = (int)*(short *)(iVar1 + 0xa0) << 0xc;
  FUN_0214ce68(param_1,&local_1c,&local_20);
  if (((param_2 == 0) && (iVar1 = func_0x021b712c(*(undefined4 *)(iVar2 + 4)), iVar1 == 0)) &&
     (iVar3 != 0 && iVar3 != iVar2)) {
    FUN_0207342c(0x78,3);
  }
  return;
}

