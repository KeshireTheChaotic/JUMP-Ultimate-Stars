
void FUN_02027ce0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 8) & 0x7ff) >> 10 != 0) {
    uVar3 = param_4;
    uVar1 = FUN_0201b45c();
    uVar2 = FUN_02020ee4(param_2);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x4c))
              (*(int **)(param_1 + 0x30),uVar1,uVar2,param_3,param_4,uVar3);
  }
  return;
}

