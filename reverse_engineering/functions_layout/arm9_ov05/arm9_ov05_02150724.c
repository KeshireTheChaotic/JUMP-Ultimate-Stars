
void FUN_02150724(int param_1)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x94) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_021504fc();
  }
  local_18 = (int)*(short *)(iVar1 + 0xa2) << 0xc;
  local_14 = (int)*(short *)(iVar1 + 0xa0) << 0xc;
  FUN_0214ce68(param_1,&local_14,&local_18);
  iVar1 = func_0x021b712c(*(undefined4 *)(iVar2 + 4));
  if (iVar1 == 0) {
    FUN_0207342c(0x78,3);
  }
  return;
}

