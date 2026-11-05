
undefined4 * FUN_0215ea14(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_0216ad7c;
  while ((puVar2 != (undefined4 *)0x0 && (iVar1 = thunk_FUN_020579f8(param_1,*puVar2), iVar1 != 0)))
  {
    puVar2 = (undefined4 *)puVar2[10];
  }
  return puVar2;
}

