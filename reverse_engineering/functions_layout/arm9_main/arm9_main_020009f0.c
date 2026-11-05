
/* JUS-SDK do_autoload [structural] crt0 call #4 of 7 in NitroSDK order */

void do_autoload(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar1 = &DAT_020a9140;
  puVar3 = &DAT_020a05c0;
  while (puVar1 != (undefined4 *)0x20a9158) {
    puVar6 = (undefined4 *)*puVar1;
    piVar2 = puVar1 + 2;
    iVar8 = puVar1[1];
    for (puVar4 = puVar6; (int)puVar4 - ((int)puVar6 + iVar8) < 0; puVar4 = puVar4 + 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
    }
    puVar1 = puVar1 + 3;
    puVar7 = (undefined4 *)((int)puVar4 + *piVar2);
    for (; puVar4 < puVar7; puVar4 = puVar4 + 1) {
      *puVar4 = 0;
    }
    uVar5 = (uint)puVar6 & 0xffffffe0;
    do {
      coproc_moveto_Data_Synchronization(0);
      coproc_moveto_Invalidate_Instruction_Cache_by_MVA(uVar5);
      coproc_moveto_Invalidate_Data_Cache_by_MVA(uVar5);
      uVar5 = uVar5 + 0x20;
    } while ((int)uVar5 < (int)puVar7);
  }
  return;
}

