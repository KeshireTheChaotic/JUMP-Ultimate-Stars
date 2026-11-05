
void FUN_0207b1c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x18) & 0x20) == 0) {
    return;
  }
  pcVar1 = *(code **)(param_2 + 0x28);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2,*(undefined4 *)(param_2 + 0x24),pcVar1,param_4,param_4);
  }
  (**(code **)(param_1 + 0x20))(param_1,param_2,*(undefined4 *)(param_2 + 0x1c));
  FUN_0207bc2c(param_1,param_2);
  FUN_0207ac70(param_1 + 8,0,param_2,100);
  return;
}

