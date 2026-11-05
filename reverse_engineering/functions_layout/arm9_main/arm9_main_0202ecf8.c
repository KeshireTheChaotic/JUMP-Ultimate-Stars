
void FUN_0202ecf8(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_99 [129];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x58))(param_1,param_4);
  iVar2 = 0;
  if (piVar1 != (int *)0x0) {
    iVar4 = -1;
    for (; *(char *)(param_3 + iVar2) != '\0'; iVar2 = iVar2 + 1) {
      if (*(char *)(param_3 + iVar2) == '(') {
        iVar4 = iVar2;
      }
    }
    if (iVar4 == -1) {
      uVar3 = (**(code **)(*param_1 + 0x5c))(param_1,param_4);
      (**(code **)(*piVar1 + 0x88))(piVar1,param_2,param_3,uVar3);
    }
    else {
      FUN_02004b18(auStack_99 + 1,param_3 + iVar4 + 1);
      iVar2 = FUN_02004b04(auStack_99 + 1);
      auStack_99[iVar2] = 0;
      uVar3 = (**(code **)(*param_1 + 0x5c))(param_1,param_4);
      (**(code **)(*piVar1 + 0x88))(piVar1,param_2,auStack_99 + 1,uVar3);
    }
  }
  return;
}

