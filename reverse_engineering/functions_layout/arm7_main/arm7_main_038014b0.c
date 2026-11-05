
void FUN_038014b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_03801770(param_1,iVar2);
    if (iVar1 != 0) {
      FUN_038014f4(iVar1,param_1,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}

