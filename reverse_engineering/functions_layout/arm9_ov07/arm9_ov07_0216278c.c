
void FUN_0216278c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x38) = param_2;
  if (param_2 == 0x7ff0) {
    return;
  }
  *(int *)(param_1 + 0x3c) = param_2;
  FUN_02157118(*(undefined4 *)(param_1 + 0x40));
  FUN_02159700(*(undefined4 *)(param_1 + 0x3c),0);
  uVar1 = FUN_0214dd50();
  FUN_0214dd60(uVar1,9);
  return;
}

