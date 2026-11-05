
undefined4 FUN_0219973c(void)

{
  int iVar1;
  
  iVar1 = FUN_02198c00();
  if ((*(int *)(iVar1 + 0x2270) == 0) || (*(uint *)(iVar1 + 0x2274) < 0xd)) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x2270) + 4);
}

