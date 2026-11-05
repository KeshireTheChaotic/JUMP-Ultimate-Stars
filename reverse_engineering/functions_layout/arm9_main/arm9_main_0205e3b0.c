
int FUN_0205e3b0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0205e0f0(param_1,0);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(uint *)(iVar1 + 0x18) <= param_2) && (param_2 < *(uint *)(iVar1 + 0x1c))) break;
    iVar1 = FUN_0205e0f0(param_1,iVar1);
  }
  iVar2 = FUN_0205e3b0(iVar1 + 0xc,param_2);
  if (iVar2 == 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}

