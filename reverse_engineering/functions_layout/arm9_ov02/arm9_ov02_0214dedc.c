
undefined4 FUN_0214dedc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2 * 0x48 + *(int *)(param_1 + 0x34);
  iVar3 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(iVar2 + 0x44) <= iVar3) {
      return 1;
    }
    iVar1 = FUN_0214df2c(param_1,*(undefined1 *)(iVar2 + iVar3 + 0x38));
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return 0;
}

