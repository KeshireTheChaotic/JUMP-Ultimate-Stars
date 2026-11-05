
undefined4 FUN_0205ca54(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0205eb28(*param_1,0x14,4);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0205cad8(iVar1);
  FUN_0205e240(param_1 + 1,iVar1);
  return 1;
}

