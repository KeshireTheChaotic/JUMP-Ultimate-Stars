
void FUN_0205b77c(void)

{
  undefined *puVar1;
  int iVar2;
  
  FUN_0205e2cc(&DAT_020ad63c,0x14);
  FUN_0205e2cc(&DAT_020ad630,0x14);
  puVar1 = &DAT_020ad648;
  iVar2 = 0;
  do {
    puVar1[0x2c] = 0;
    puVar1[0x3c] = (char)iVar2;
    FUN_0205e240(&DAT_020ad630,puVar1);
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x44;
  } while (iVar2 < 0x10);
  puVar1 = &DAT_020ada88;
  iVar2 = 0;
  do {
    FUN_0205e2cc(puVar1,0xc);
    FUN_0205e2cc(puVar1 + 0xc,0);
    puVar1[0x20] = 0x7f;
    *(undefined4 *)(puVar1 + 0x18) = 1;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    puVar1 = puVar1 + 0x24;
  } while (iVar2 < 0x20);
  return;
}

