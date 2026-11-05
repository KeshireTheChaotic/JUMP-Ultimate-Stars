
void FUN_0214fe04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = (uint)*(byte *)(*(int *)(iVar1 + 0x10) + 1);
  if (uVar2 == *(uint *)(iVar1 + 0x124)) {
    func_0x021b6214(iVar1,1,uVar2,param_4,param_4);
    return;
  }
  func_0x021b6214(iVar1,0,uVar2,param_4,param_4);
  return;
}

