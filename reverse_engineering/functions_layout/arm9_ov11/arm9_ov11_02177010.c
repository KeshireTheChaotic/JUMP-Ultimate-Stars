
void FUN_02177010(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_02175628(*(undefined4 *)(param_1 + 0x10));
  FUN_02175628();
  FUN_02175628();
  iVar1 = FUN_02176d50();
  *(undefined4 *)(iVar1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 300) = *param_2;
  *(undefined4 *)(param_1 + 0x130) = param_2[1];
  *(undefined1 *)(param_1 + 0x18b) = 8;
  *(undefined2 *)(param_1 + 0x188) = 0;
  return;
}

