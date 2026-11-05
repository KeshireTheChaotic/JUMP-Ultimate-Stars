
undefined4 FUN_0215b018(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_0214cebc(*(undefined4 *)(param_1 + 8),0,param_3,*(int *)(param_1 + 0xc),param_4);
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_0215b0b4(*(undefined4 *)(param_1 + 0xf8));
    }
    uVar1 = FUN_0215a9e0(param_3);
    FUN_021500cc(*(undefined4 *)(param_1 + 0xf8),uVar1);
    return 1;
  }
  if (param_2 == 0) {
    (**(code **)(param_1 + 0x208))(param_1,*(undefined4 *)(param_1 + 0x204),5,0,0);
  }
  else {
    (**(code **)(param_1 + 0x208))
              (param_1,*(undefined4 *)(param_1 + 0x204),5,0,
               *(undefined4 *)(param_1 + (param_2 + -1) * 4 + 0x10));
  }
  return 0;
}

