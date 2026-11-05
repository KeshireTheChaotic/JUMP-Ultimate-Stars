
void FUN_02164be4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    if (puVar2[0x18] == 0) {
      iVar1 = FUN_02086c4c();
      if (iVar1 == 0) {
        FUN_02086d30();
      }
      else {
        puVar2[0x18] = 1;
      }
    }
    FUN_02086cac(0);
    FUN_020735e4();
    if (puVar2[0x16] != 0) {
      FUN_02163d3c();
    }
    if (puVar2[0x15] != 0) {
      func_0x021bab64();
    }
    FUN_02150b4c(*puVar2);
    FUN_02150b4c(puVar2[1]);
    if ((int *)puVar2[3] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[3] + 8))();
    }
    if ((int *)puVar2[4] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[4] + 8))();
    }
    if ((int *)puVar2[5] != (int *)0x0) {
      (**(code **)(*(int *)puVar2[5] + 8))();
    }
    iVar1 = 0;
    do {
      if ((int *)puVar2[iVar1 + 9] != (int *)0x0) {
        (**(code **)(*(int *)puVar2[iVar1 + 9] + 0xc))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    FUN_02150dbc(puVar2[2]);
    func_0x021b65cc();
    DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
    DAT_020afcb8 = puVar2[0x18];
    DAT_02093c04 = DAT_02093c04 + 1;
    (**(code **)(**(int **)(puVar2[2] + 4) + 0xc))();
    FUN_0201b244(puVar2);
  }
  return;
}

