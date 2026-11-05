
void FUN_027e606c(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_208 [520];
  
  iVar1 = FUN_027e21a8(auStack_208);
  if (*(short *)(iVar1 + 4) == 0) {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 0x1f;
    puVar2[1] = 0;
    FUN_038080d0();
  }
  else {
    FUN_027e6030(0x305);
  }
  return;
}

