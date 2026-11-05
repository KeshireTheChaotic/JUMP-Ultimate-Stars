
void FUN_0207330c(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0205af34();
  puVar3 = DAT_0214bd40;
  while (puVar3 != (undefined4 *)0x0) {
    iVar1 = puVar3[3];
    puVar2 = (undefined4 *)*puVar3;
    puVar3[3] = iVar1 + 1;
    if (2 < iVar1) {
      FUN_02037f58(&DAT_0214bd40,puVar3);
      FUN_02037f14(&DAT_0214bd44,puVar3);
    }
    puVar3 = puVar2;
  }
  return;
}

