
void FUN_02153120(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02153174(iVar1);
  FUN_02153a9c(iVar1,(int)*(char *)(iVar1 + 0x439));
  *(undefined4 *)(iVar1 + *(char *)(iVar1 + 0x439) * 4 + 0x454) = 0;
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  FUN_0207342c(0x78,0);
  return;
}

