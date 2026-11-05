
uint * FUN_0219976c(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  iVar1 = FUN_02198c00();
  puVar4 = *(uint **)(iVar1 + 0x2270);
  puVar3 = (uint *)0x0;
  if ((((puVar4 != (uint *)0x0) && (0xc < *(uint *)(iVar1 + 0x2274))) &&
      (uVar2 = FUN_0200d338(*(uint *)(iVar1 + 0x2274) - 0xc,0xd0), uVar2 != 0)) && (*puVar4 < uVar2)
     ) {
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        puVar3 = puVar4 + uVar5 * 0x34 + 3;
        if ((char)puVar4[uVar5 * 0x34 + 3] == '\0') break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    if (uVar5 < uVar2) {
      *(undefined1 *)puVar3 = 1;
      puVar3[1] = *puVar4;
      puVar3[3] = 0;
      puVar3[2] = puVar4[2];
      puVar4[2] = (uint)puVar3;
      if (puVar3[2] == 0) {
        puVar4[1] = (uint)puVar3;
      }
      else {
        *(uint **)(puVar3[2] + 0xc) = puVar3;
      }
      *puVar4 = *puVar4 + 1;
    }
  }
  return puVar3;
}

