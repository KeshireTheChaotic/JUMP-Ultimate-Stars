
void FUN_0201b120(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + -1;
  for (iVar5 = *(int *)(param_1 + 0x1c);
      (puVar4 = (undefined4 *)(iVar5 + 0x20), param_2 < puVar4 ||
      (iVar3 = *(int *)(param_1 + 0x10),
      (undefined4 *)((int)puVar4 + (iVar3 * *(int *)(param_1 + 0xc) & 0xfffffffcU)) <= param_2));
      iVar5 = *(int *)(iVar5 + 0x10)) {
  }
  if (*(int *)(iVar5 + 0x14) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar5 + 0x18);
  }
  *param_2 = uVar1;
  *(undefined4 **)(iVar5 + 0x18) = param_2;
  *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  if (*(int *)(iVar5 + 0x14) != *(int *)(param_1 + 0x10)) {
    return;
  }
  *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x10) = *(undefined4 *)(iVar5 + 0x10);
  if (*(int *)(iVar5 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(iVar5 + 0x10) + 0xc) = *(undefined4 *)(iVar5 + 0xc);
  }
  FUN_02037f58(*(int *)(param_1 + 8) + 0x4a0,iVar5,iVar3,puVar4,param_4);
  FUN_0201a958(iVar5,0);
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) - (short)*(undefined4 *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar5 != *(int *)(iVar3 + 0x4a8)) {
    return;
  }
  puVar4 = *(undefined4 **)(iVar3 + 0x4a0);
  for (puVar2 = puVar4; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    if (puVar2 < puVar4) {
      puVar4 = puVar2;
    }
  }
  *(undefined4 **)(iVar3 + 0x4a8) = puVar4;
  return;
}

