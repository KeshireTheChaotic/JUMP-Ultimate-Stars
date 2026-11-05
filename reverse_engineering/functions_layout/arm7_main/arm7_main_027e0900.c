
void FUN_027e0900(int param_1)

{
  ushort uVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char local_30;
  char local_2f;
  char local_2e;
  char local_2d;
  char local_2c;
  char local_2b;
  
  psVar2 = DAT_027f97f0;
  if ((*DAT_027f97f0 == 7) || (*DAT_027f97f0 == 9)) {
    FUN_037fe788(param_1 + 0x10,&local_30,6);
    uVar7 = 0;
    for (iVar8 = 0; iVar8 < 0xf; iVar8 = iVar8 + 1) {
      uVar3 = OS_DisableInterrupts();
      uVar5 = iVar8 + 1;
      if (((uint)(ushort)psVar2[0xc1] & 1 << (uVar5 & 0xff)) != 0) {
        iVar6 = iVar8 * 6;
        if ((((local_30 == (char)psVar2[iVar8 * 3 + 0x94]) &&
             (local_2f == *(char *)((int)psVar2 + iVar6 + 0x129))) &&
            (local_2e == (char)psVar2[iVar8 * 3 + 0x95])) &&
           (((local_2d == *(char *)((int)psVar2 + iVar6 + 299) &&
             (local_2c == (char)psVar2[iVar8 * 3 + 0x96])) &&
            (local_2b == *(char *)((int)psVar2 + iVar6 + 0x12d))))) {
          uVar7 = uVar5 & 0xffff;
          uVar1 = ~(ushort)(1 << (uVar5 & 0xff));
          psVar2[0xc1] = psVar2[0xc1] & uVar1;
          psVar2[0x43] = psVar2[0x43] & uVar1;
          (psVar2 + uVar7 * 4 + 0x39c)[0] = 0;
          (psVar2 + uVar7 * 4 + 0x39c)[1] = 0;
          (psVar2 + uVar7 * 4 + 0x39e)[0] = 0;
          (psVar2 + uVar7 * 4 + 0x39e)[1] = 0;
          FUN_037fe6f4(psVar2 + iVar8 * 3 + 0x94,0,6);
          OS_RestoreInterrupts(uVar3);
          break;
        }
      }
      OS_RestoreInterrupts(uVar3);
    }
    if (uVar7 != 0) {
      puVar4 = (undefined2 *)FUN_03808074();
      *puVar4 = 8;
      puVar4[1] = 0;
      puVar4[4] = 9;
      puVar4[9] = *(undefined2 *)(param_1 + 0x16);
      puVar4[8] = (short)uVar7;
      FUN_037fe788(param_1 + 0x10,puVar4 + 5,6);
      puVar4[0x16] = psVar2[0x18];
      puVar4[0x17] = psVar2[0x19];
      FUN_038080d0(puVar4);
      if (*(int *)(psVar2 + 6) == 1) {
        FUN_027e6d04(1 << (uVar7 & 0xff) & 0xffff);
      }
    }
  }
  else {
    uVar3 = OS_DisableInterrupts();
    if (psVar2[0xc1] == 0) {
      OS_RestoreInterrupts();
    }
    else {
      iVar8 = *(int *)(psVar2 + 6);
      if (iVar8 == 1) {
        psVar2[6] = 0;
        psVar2[7] = 0;
        FUN_027e6748();
        FUN_027e0238();
      }
      psVar2[0xc1] = 0;
      psVar2[0x43] = 0;
      psVar2[10] = 0;
      psVar2[0xb] = 0;
      psVar2[8] = 0;
      psVar2[9] = 0;
      psVar2[0xe] = 0;
      psVar2[0xf] = 0;
      FUN_027e0100();
      psVar2[0x61] = 0;
      *psVar2 = 3;
      OS_RestoreInterrupts(uVar3);
      puVar4 = (undefined2 *)FUN_03808074();
      *puVar4 = 0xc;
      puVar4[1] = 0;
      puVar4[4] = 9;
      puVar4[6] = *(undefined2 *)(param_1 + 0x16);
      puVar4[5] = psVar2[0xc4];
      FUN_037fe788(psVar2 + 0xc5,puVar4 + 8,6);
      puVar4[0xb] = psVar2[0x18];
      puVar4[0xc] = psVar2[0x19];
      FUN_038080d0(puVar4);
      if (iVar8 == 1) {
        FUN_027e6d04(1);
      }
    }
  }
  return;
}

