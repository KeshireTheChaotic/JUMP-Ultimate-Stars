
void FUN_0214e2ec(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1) {
    do {
      FUN_0214cf10(param_2,param_3,6);
      uVar1 = FUN_0214cd34();
      *(undefined2 *)(param_2 + 6) = uVar1;
      uVar1 = FUN_0214ce14(*(undefined2 *)(param_2 + 6));
      *(undefined2 *)(param_2 + 6) = uVar1;
      param_2 = param_2 + 8;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return;
}

