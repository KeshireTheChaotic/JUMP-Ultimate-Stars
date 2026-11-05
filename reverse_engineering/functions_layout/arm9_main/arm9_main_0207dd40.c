
void FUN_0207dd40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  for (puVar5 = *(undefined4 **)(param_1 + 0xb0); puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)*puVar5) {
    iVar6 = puVar5[2];
    iVar4 = (int)*(short *)(*(int *)(iVar6 + 8) + 0x30);
    iVar2 = (int)*(short *)(*(int *)(iVar6 + 8) + 0x2c);
    iVar3 = *(int *)(*(int *)(*(int *)(iVar6 + 0xc) + 0x5c) + 0xc);
    if ((iVar3 + (iVar2 - iVar4) * 0x100 < 0x4000) &&
       (iVar1 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar6 + 0xc) + 0x30)), iVar1 != 0)) {
      *(uint *)(*(int *)(iVar6 + 0xc) + 0x78) = *(uint *)(*(int *)(iVar6 + 0xc) + 0x78) | 0x1000000;
    }
    if ((0x3c000 < iVar3 + (iVar2 + iVar4) * 0x100) &&
       (iVar2 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar6 + 0xc) + 0x30)), iVar2 == 0)) {
      *(uint *)(*(int *)(iVar6 + 0xc) + 0x78) = *(uint *)(*(int *)(iVar6 + 0xc) + 0x78) | 0x2000000;
    }
  }
  return;
}

