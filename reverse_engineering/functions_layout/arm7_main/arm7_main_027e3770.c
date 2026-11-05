
void FUN_027e3770(void)

{
  uint uVar1;
  short sVar2;
  short *psVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [516];
  
  psVar3 = DAT_027f97f0;
  if (*DAT_027f97f0 == 7) {
    uVar7 = 1;
    do {
      uVar1 = 1 << (uVar7 & 0xff);
      if (((ushort)psVar3[0xc1] & uVar1) != 0) {
        FUN_037fe788(psVar3 + (uVar7 - 1) * 3 + 0x94,auStack_230,6);
        for (iVar6 = 0; iVar6 < 2; iVar6 = iVar6 + 1) {
          iVar5 = FUN_027e2ad4(auStack_228,auStack_230,3);
          sVar2 = *(short *)(iVar5 + 4);
          if ((sVar2 == 0) || ((sVar2 != 7 && (sVar2 != 0xc)))) break;
        }
        OS_DisableInterrupts();
        if (((ushort)psVar3[0xc1] & uVar1) == 0) {
          OS_RestoreInterrupts();
        }
        else {
          psVar3[0xc1] = psVar3[0xc1] & ~(ushort)uVar1;
          psVar3[0x43] = psVar3[0x43] & ~(ushort)uVar1;
          (psVar3 + uVar7 * 4 + 0x39c)[0] = 0;
          (psVar3 + uVar7 * 4 + 0x39c)[1] = 0;
          (psVar3 + uVar7 * 4 + 0x39e)[0] = 0;
          (psVar3 + uVar7 * 4 + 0x39e)[1] = 0;
          OS_RestoreInterrupts();
          FUN_027e4a98(1,uVar7 & 0xffff,auStack_230);
        }
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0x10);
    iVar6 = FUN_027e2d80(auStack_228,1);
    if (*(short *)(iVar6 + 4) == 0) {
      psVar3[0x61] = 0;
      *psVar3 = 3;
      iVar6 = FUN_027e21ec(auStack_228);
      if (*(short *)(iVar6 + 4) == 0) {
        *psVar3 = 2;
        FUN_027e0100();
        puVar4 = (undefined2 *)FUN_03808074();
        *puVar4 = 9;
        puVar4[1] = 0;
        FUN_038080d0();
      }
      else {
        FUN_027e3734(0x302);
      }
    }
    else {
      FUN_027e3734(0);
    }
  }
  else {
    puVar4 = (undefined2 *)FUN_03808074();
    *puVar4 = 9;
    puVar4[1] = 3;
    FUN_038080d0();
  }
  return;
}

