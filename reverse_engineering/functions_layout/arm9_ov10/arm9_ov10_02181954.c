
void FUN_02181954(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(param_4) {
  case 0:
    uVar1 = 0x2181af5;
    break;
  case 1:
    uVar1 = 0x2181a5d;
    break;
  case 2:
    uVar1 = 0x2181a09;
    break;
  case 3:
    uVar1 = 0x21819b5;
    break;
  default:
    uVar1 = 0x21819b5;
  }
  *(undefined4 *)(param_1 + 0x498) = param_3;
  *(undefined4 *)(param_1 + 0x49c) = param_2;
  DAT_021a7d24 = param_1;
  FUN_020010fc(*(undefined4 *)(param_1 + 4),uVar1);
  return;
}

