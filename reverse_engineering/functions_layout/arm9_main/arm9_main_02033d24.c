
undefined1 * FUN_02033d24(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  bool bVar8;
  
  uVar7 = 0;
  puVar3 = puRam02033da4;
  puVar4 = puRam02033da4;
  puVar6 = puRam02033da4;
  while( true ) {
    if (0xff < uVar7) {
      return puRam02033da4;
    }
    pcVar5 = (char *)(param_1 + uVar7);
    puVar2 = puVar3 + 1;
    *puVar3 = *(undefined1 *)(param_1 + uVar7);
    puVar3 = puVar2;
    if (2 < uVar7) {
      cVar1 = pcVar5[-2];
      bVar8 = cVar1 == '.';
      if (bVar8) {
        cVar1 = pcVar5[-1];
      }
      if ((bVar8 && cVar1 == '.') && (*pcVar5 == '/' || *pcVar5 == '\\')) {
        puVar3 = puVar6;
      }
    }
    cVar1 = *pcVar5;
    puVar2 = puVar4;
    if (cVar1 == '/' || cVar1 == '\\') {
      puVar2 = puVar3;
      puVar6 = puVar4;
    }
    if (cVar1 == '\0') break;
    uVar7 = uVar7 + 1;
    puVar4 = puVar2;
  }
  return puRam02033da4;
}

