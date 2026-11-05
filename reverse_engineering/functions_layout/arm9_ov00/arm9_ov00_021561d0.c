
void FUN_021561d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  puVar4 = puVar5;
  uStack_28 = param_4;
  for (iVar6 = puVar5[0x85]; iVar6 != 0; iVar6 = iVar6 + -1) {
    uVar7 = *(undefined4 *)(puVar4[1] + 8);
    (*(code *)*puVar4)(puVar5,puVar4);
    puVar4[4] = 0;
    local_3c = ((int)puVar4[7] >> 3) << 0xc;
    local_40 = ((int)puVar4[6] >> 3) << 0xc;
    FUN_0214f418(uVar7,&local_40,&local_3c);
    FUN_0214e27c(&local_34,puVar5[0x4b]);
    FUN_0214e27c(&local_38,uVar7);
    iVar3 = local_38 + local_34 + -0x10000;
    *(short *)(puVar4 + 2) = (short)((int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc);
    FUN_0214e290(&local_2c,puVar5[0x4b]);
    FUN_0214e290(&local_30,uVar7);
    iVar3 = local_30 + local_2c + -0x30000;
    *(short *)((int)puVar4 + 10) = (short)((int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc);
    puVar4 = puVar4 + 0x12;
  }
  iVar6 = 0;
  puVar4 = puVar5;
  while( true ) {
    if ((int)puVar5[0x85] <= iVar6) goto LAB_02156338;
    if (*(char *)((int)puVar4 + 0x32) != '\0') break;
    iVar6 = iVar6 + 1;
    puVar4 = puVar4 + 0x12;
  }
  bVar1 = *(byte *)((int)puVar5 + iVar6 + 0x218);
  *(undefined1 *)((int)puVar5 + iVar6 + 0x218) = 0;
  for (iVar3 = 0; iVar3 < (int)puVar5[0x85]; iVar3 = iVar3 + 1) {
    if (iVar6 != iVar3) {
      bVar2 = *(byte *)((int)puVar5 + iVar3 + 0x218);
      if (bVar2 < bVar1) {
        *(byte *)((int)puVar5 + iVar3 + 0x218) = bVar2 + 1;
      }
    }
  }
LAB_02156338:
  puVar4 = puVar5;
  for (iVar6 = 0; iVar6 < (int)puVar5[0x85]; iVar6 = iVar6 + 1) {
    *(undefined1 *)((int)puVar4 + 0x32) = 0;
    FUN_02156960(puVar4,*(undefined1 *)((int)puVar5 + iVar6 + 0x218));
    puVar4 = puVar4 + 0x12;
  }
  return;
}

