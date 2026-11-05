
void FUN_027e60f8(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_210 [516];
  
  iVar1 = FUN_027e2178(auStack_210);
  if (*(short *)(iVar1 + 4) == 0) {
    puVar2 = (undefined2 *)FUN_03808074();
    *puVar2 = 0x20;
    puVar2[1] = 0;
    MIi_CpuCopy16(iVar1 + 8,puVar2 + 4,0xb4);
    FUN_038080d0(puVar2);
  }
  else {
    FUN_027e60bc(0x307);
  }
  return;
}

