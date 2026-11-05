
void FUN_021b18c4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  FUN_02037ed8(param_1,param_2 + 8);
  *(undefined4 *)(iVar1 + 0x50) = 0xffffffff;
  return;
}

