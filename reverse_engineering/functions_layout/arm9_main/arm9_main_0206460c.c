
int FUN_0206460c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x28) - iVar3;
  iVar2 = param_3;
  if (iVar1 < param_3) {
    iVar2 = iVar1;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(int *)(param_1 + 0x34) = param_3;
  *(int *)(param_1 + 0x38) = iVar2;
  if (param_4 == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  }
  FUN_02063fe8(param_1,0);
  if (param_4 == 0) {
    iVar2 = FUN_02064450(param_1);
    if (iVar2 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x2c) - iVar3;
    }
  }
  return iVar2;
}

