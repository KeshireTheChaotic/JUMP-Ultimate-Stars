
undefined4 FUN_02192d2c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = true;
  cVar1 = *(char *)(*(int *)(param_1 + 4) + 0x73);
  if ((cVar1 != '\0') && (cVar1 != '\x04')) {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_0218f18c();
  }
  return 0;
}

