
int FUN_020325d0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_020326b0(param_2);
  *(undefined2 *)(param_1 + 0x2c) = uVar1;
  iVar3 = *(int *)(param_1 + 0x20);
  while( true ) {
    iVar4 = *(int *)(iVar3 + 0x14);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      return 0;
    }
    if (((*(int *)(iVar3 + 0xc) != 0) && (*(short *)(param_1 + 0x2c) == *(short *)(iVar3 + 0x10)))
       && (iVar2 = FUN_02004c2c(param_2), iVar2 == 0)) break;
    iVar3 = iVar4;
  }
  return iVar3;
}

