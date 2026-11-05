
void FUN_0205b9a0(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_020ad648;
  iVar2 = 0;
  do {
    if (puVar1[0x2c] != '\0') {
      FUN_0205b49c(puVar1,param_1);
    }
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x44;
  } while (iVar2 < 0x10);
  return;
}

