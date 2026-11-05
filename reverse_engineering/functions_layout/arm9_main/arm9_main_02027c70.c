
void FUN_02027c70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(uint *)(*(int *)(param_1 + 0x30) + 8) & 0x3ff) >> 9 != 0) {
    uVar4 = param_4;
    uVar1 = FUN_0201b45c();
    uVar2 = FUN_02020ee4(param_2);
    uVar3 = FUN_02020ee4(param_3);
    (**(code **)(**(int **)(param_1 + 0x30) + 0x48))
              (*(int **)(param_1 + 0x30),uVar1,uVar2,uVar3,param_4,uVar4);
  }
  return;
}

