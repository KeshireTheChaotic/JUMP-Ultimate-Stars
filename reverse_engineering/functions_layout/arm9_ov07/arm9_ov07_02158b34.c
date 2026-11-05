
void FUN_02158b34(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0214f898(*(undefined4 *)(param_1 + (param_2 + 8) * 4 + 0x30),0x31305854);
  if (param_3 == 0) {
    FUN_021513b8(uVar1,0,0);
    return;
  }
  FUN_021513b8(uVar1,*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + param_2 * 0x18 + 4,10);
  return;
}

