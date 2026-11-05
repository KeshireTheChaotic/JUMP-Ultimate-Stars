
void FUN_021586bc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x21c) + 0x28);
  if (iVar1 != 0) {
    if (param_2 != 0) {
      func_0x021b65d8();
      return;
    }
    func_0x021b65e0(*(undefined4 *)(iVar1 + 4));
  }
  return;
}

