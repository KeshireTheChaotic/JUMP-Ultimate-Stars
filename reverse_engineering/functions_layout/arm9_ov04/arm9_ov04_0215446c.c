
void FUN_0215446c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_021547f4(*(undefined4 *)(param_1 + 0x3c),0x7fff,0x14,1,param_4);
  FUN_021547a0(*(undefined4 *)(param_1 + 0x3c),0);
  FUN_021547c4(param_1);
  FUN_021545f8(*(undefined4 *)(param_1 + 0x2c),0);
  FUN_02154814(param_1,param_2,1);
  iVar1 = 0;
  do {
    if (iVar1 != param_2) {
      FUN_02154814(param_1,iVar1,0);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

