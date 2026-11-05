
void FUN_0215c668(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  DAT_020a0f10 = DAT_020a0f10 + 1;
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  FUN_0207367c(8);
  if (puVar2[2] != 0) {
    FUN_0206ae98();
  }
  if (puVar2[3] != 0) {
    FUN_0206ae98();
  }
  iVar1 = 0;
  do {
    if ((int *)puVar2[iVar1 + 0x11] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[iVar1 + 0x11] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  iVar1 = 0;
  do {
    if ((int *)puVar2[iVar1 + 0x1a] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[iVar1 + 0x1a] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 9);
  iVar1 = 0;
  do {
    if ((int *)puVar2[iVar1 * 2 + 0x23] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[iVar1 * 2 + 0x23] + 8))();
    }
    if ((int *)puVar2[iVar1 * 2 + 0x24] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[iVar1 * 2 + 0x24] + 8))();
    }
    if ((int *)puVar2[iVar1 * 2 + 0x27] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[iVar1 * 2 + 0x27] + 8))();
    }
    if ((int *)puVar2[iVar1 * 2 + 0x28] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[iVar1 * 2 + 0x28] + 8))();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  (**(code **)(*(int *)puVar2[0xf] + 0xc))();
  (**(code **)(*(int *)puVar2[0x10] + 0xc))();
  (**(code **)(*(int *)puVar2[10] + 8))();
  (**(code **)(*(int *)puVar2[0xb] + 8))();
  (**(code **)(*(int *)puVar2[0xc] + 8))();
  (**(code **)(*(int *)puVar2[0xd] + 8))();
  (**(code **)(*(int *)puVar2[8] + 8))();
  (**(code **)(*(int *)puVar2[9] + 8))();
  FUN_02075758(puVar2[4]);
  FUN_020735e4();
  FUN_0207698c(puVar2[1]);
  FUN_020763e0(*puVar2);
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  (**(code **)(**(int **)(puVar2[5] + 4) + 0xc))();
  (**(code **)(*(int *)puVar2[6] + 8))();
  FUN_0201b244(puVar2);
  return;
}

