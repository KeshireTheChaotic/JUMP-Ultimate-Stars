
undefined4 FUN_021c0264(int param_1,int param_2,undefined4 param_3,int param_4,undefined2 param_5)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  int local_1c;
  
  if ((DAT_021d525c != 0) && (*(short *)(DAT_021d525c + 0x1316) != 0)) {
    return 2;
  }
  uVar7 = param_1 + 0x1fU & 0xffffffe0;
  iVar8 = uVar7 + 0x1e00;
  local_1c = param_4;
  if (param_4 == 0x10000) {
    local_1c = FUN_020584c8();
  }
  uVar2 = OS_DisableInterrupts();
  DAT_021d5250 = param_5;
  DAT_021d5258 = uVar7;
  DAT_021d525c = iVar8;
  MIi_CpuClear32(0,uVar7,0x1e00);
  MIi_CpuClear16(0,iVar8,0x1340);
  puVar4 = (undefined2 *)(uVar7 + 0x530);
  iVar5 = 0;
  if (*(char *)(param_2 + 1) != '\0') {
    iVar3 = param_2;
    do {
      *puVar4 = *(undefined2 *)(iVar3 + 2);
      puVar4 = puVar4 + 1;
      iVar3 = iVar3 + 2;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)*(byte *)(param_2 + 1));
  }
  psVar6 = (short *)(uVar7 + 0x538);
  iVar5 = 0;
  do {
    if (*DAT_021d4380 == 0) break;
    sVar1 = *DAT_021d4380;
    DAT_021d4380 = DAT_021d4380 + 1;
    *psVar6 = sVar1;
    psVar6 = psVar6 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  FUN_02051890(param_2,uVar7 + 0x3100,0x16);
  if (*(byte *)(param_2 + 1) < 10) {
    *(undefined2 *)(iVar8 + (uint)*(byte *)(param_2 + 1) * 2 + 0x1302) = 0;
  }
  *(undefined2 *)(uVar7 + 0x500) = 0x100;
  *(undefined2 *)(uVar7 + 0x502) = 8;
  *(undefined2 *)(uVar7 + 0x518) = 0;
  *(undefined2 *)(uVar7 + 0x51a) = 0;
  *(undefined2 *)(uVar7 + 0x52c) = 1;
  *(uint *)(uVar7 + 0x504) = uVar7 + 0x2200;
  *(undefined2 *)(uVar7 + 0xe) = 0;
  *(undefined2 *)(uVar7 + 0x12) = 0;
  *(undefined2 *)(uVar7 + 0x16) = 1;
  *(undefined2 *)(uVar7 + 0x14) = 0;
  *(undefined4 *)(uVar7 + 8) = param_3;
  *(short *)(uVar7 + 0xc) = (short)local_1c;
  sVar1 = FUN_021c03ec();
  *(short *)(uVar7 + 0x18) = sVar1 + 200;
  *(undefined2 *)(uVar7 + 0x10) = 0xf;
  *(undefined1 *)(uVar7 + 0x50c) = 0;
  *(undefined1 *)(uVar7 + 0x50d) = 0;
  *(undefined2 *)(uVar7 + 0x3116) = 1;
  *(undefined4 *)(uVar7 + 0x311c) = 0;
  OS_RestoreInterrupts(uVar2);
  return 0;
}

