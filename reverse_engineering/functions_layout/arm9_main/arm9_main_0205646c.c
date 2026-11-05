
int FUN_0205646c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_02056500();
  if ((int)uVar3 == -1) {
    return -1;
  }
  iVar1 = FUN_020564e4(param_2,(int)((ulonglong)uVar3 >> 0x20));
  iVar2 = -1;
  if (iVar1 != -1) {
    iVar2 = iVar1 + (int)uVar3 * 0x15180;
  }
  return iVar2;
}

