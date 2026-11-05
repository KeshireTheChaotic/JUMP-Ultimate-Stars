
void FUN_021997ec(int param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02198c00();
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x226a) == '\0')) && (*(short *)(param_1 + 0x3c) == 0)) {
    iVar2 = FUN_021996e4(param_1 + 4);
    if (iVar2 == 0) {
      iVar2 = FUN_0219976c();
    }
    if ((iVar2 == 0) && (*(int *)(iVar1 + 0x2278) == 1)) {
      iVar2 = FUN_0219973c();
    }
    if (iVar2 != 0) {
      *(undefined2 *)(iVar2 + 2) = param_2;
      FUN_020517c4(param_1,iVar2 + 0x10,0xc0);
      FUN_02199628(iVar2);
    }
  }
  return;
}

