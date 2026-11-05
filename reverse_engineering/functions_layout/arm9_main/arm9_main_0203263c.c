
void FUN_0203263c(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  if ((iVar4 != 0) && (iVar2 = FUN_0201a9ec(iVar4), iVar2 == 0)) {
    FUN_0201a958(iVar4,1);
  }
  if (param_2 == 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    iVar4 = FUN_02004b04(param_2);
    uVar3 = FUN_0201a228(iVar4 + 1);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    FUN_02004b18(uVar3,param_2);
    uVar1 = FUN_020326b0(param_2);
  }
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  return;
}

