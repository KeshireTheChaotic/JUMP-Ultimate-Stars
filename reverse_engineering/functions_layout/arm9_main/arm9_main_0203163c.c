
void FUN_0203163c(int param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0x24c) != 0) {
    FUN_020161b0();
    (**(code **)(param_1 + 0x24c))();
  }
  *(undefined4 *)(param_1 + 0x224) = 3;
  puVar6 = *(undefined4 **)(param_1 + 0x23c);
  while (puVar6 != (undefined4 *)0x0) {
    piVar4 = puVar6 + -8;
    puVar5 = (undefined4 *)*puVar6;
    if (*(char *)((int)puVar6 + 9) < '\0') {
      iVar2 = FUN_0203184c(param_1 + 0x10,param_1,piVar4);
      if (iVar2 == 0) {
        FUN_02028488(param_1 + 0x10,piVar4);
      }
    }
    else {
      FUN_02027560(piVar4);
    }
    puVar1 = (ushort *)(puVar6 + -7);
    puVar6 = puVar5;
    if (1 < *puVar1) {
      do {
        uVar3 = (**(code **)(*piVar4 + 0xc))();
      } while (1 < uVar3);
    }
  }
  return;
}

