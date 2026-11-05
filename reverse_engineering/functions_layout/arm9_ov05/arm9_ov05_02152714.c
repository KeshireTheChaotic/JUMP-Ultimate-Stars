
void FUN_02152714(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((param_2 & 0x20) != 0) {
    func_0x021b65bc();
    FUN_021527c8(iVar1);
    FUN_0207342c(0x78,1);
  }
  if ((*(uint *)(*(int *)(*(int *)(iVar1 + 0xb0) + 4) + 0x90) & 0x20) == 0x20) {
    *param_3 = 0;
  }
  return;
}

