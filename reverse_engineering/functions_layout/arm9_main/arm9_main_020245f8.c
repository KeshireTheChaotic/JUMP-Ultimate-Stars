
int FUN_020245f8(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == param_1[0x15]) {
    return 0;
  }
  uVar2 = 0;
  while( true ) {
    iVar1 = (**(code **)(*param_1 + 0xac))();
    if (iVar1 - 1U <= uVar2) {
      return -1;
    }
    if (param_2 == *(int *)(*(int *)(param_1[0x1b] + uVar2 * param_1[0x1c]) + 0x54)) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2 + 1;
}

