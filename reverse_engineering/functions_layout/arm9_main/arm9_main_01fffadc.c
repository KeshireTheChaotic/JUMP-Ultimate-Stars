
void FUN_01fffadc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_r6;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined4 *)(*(uint *)(param_2 + 0x6c) * 0x400 + param_2 + 0xc0);
  puVar3 = (undefined4 *)((*(uint *)(param_2 + 0x6c) ^ 1) * 0x400 + param_2 + 0xc0 + 0x200);
  iVar1 = 0x20;
  do {
    uVar4 = *puVar3;
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    uVar7 = puVar3[3];
    puVar3 = puVar3 + 4;
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    puVar2 = puVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  uVar8 = unaff_r6 == 0x7e;
  if ((bool)uVar8) {
    FUN_01fff1e0();
  }
  if (!(bool)uVar8) {
    FUN_01fff208();
  }
  uVar9 = FUN_01fffa24();
  iVar1 = (int)((ulonglong)uVar9 >> 0x20);
  FUN_01fff424((int)uVar9,iVar1,iVar1 + 8);
  FUN_01fff908();
  return;
}

