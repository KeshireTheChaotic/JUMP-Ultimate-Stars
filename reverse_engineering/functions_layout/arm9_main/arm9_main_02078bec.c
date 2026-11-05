
undefined1 FUN_02078bec(int param_1,uint param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 0x558);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  uVar1 = 1;
  while (puVar3 != (undefined4 *)0x0) {
    uVar2 = (uint)*(byte *)(puVar3 + 0x10);
    bVar4 = uVar2 == 0;
    if (bVar4) {
      uVar2 = puVar3[0xd];
    }
    puVar3 = (undefined4 *)*puVar3;
    if (bVar4) {
      uVar2 = (int)*(char *)(uVar2 + 8) + 1;
    }
    if (bVar4 && param_2 == uVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

